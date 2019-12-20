#include "server.h"

Server::Server(QObject* parent) :
    QObject(parent)
{
    server = new QTcpServer(this);
    connect(server,&QTcpServer::newConnection,this,&Server::hNewConnection);
    if (!server->listen(QHostAddress::Any,4040)) {
        qDebug() << "[server] could not start";
    } else {
        qDebug() << "[server] started !";
    }
}

void Server::sendAll(QString msg) {
    int i;
    qDebug() << "[server] sending all :" + msg << endl;
    if (msg.isEmpty())
        return;
    for (i = 0; i < allConnectedClients.size(); i++){
        allConnectedClients[i]->socket->write(msg.toUtf8());
        allConnectedClients[i]->socket->flush();
        allConnectedClients[i]->socket->waitForBytesWritten(10);
    }
}

void Server::sendSpecific(QString msg, User* u) {
    qDebug() << "[server] sending :" + msg + "&to" + u->pseudo << endl;
    if (msg.isEmpty())
        return;
    u->socket->write(msg.toUtf8());
    u->socket->flush();
    u->socket->waitForBytesWritten(10);
}

void Server::hNewConnection() {
    User * u;
    //int n = allConnectedClients.size();
    qDebug() << "[serveur]new connexion" << endl;
    u = new User("",server->nextPendingConnection(),Joueur("none",nullptr));
    allConnectedClients.append(u);
    socketList.append(u->socket);
    connect(u->socket,&QAbstractSocket::readyRead,[=](){this->readData(u->socket);});
    connect(u->socket,&QAbstractSocket::stateChanged,[=](){this->closeConnection(allConnectedClients.indexOf(u));});
    qDebug() << "[serveur]connexion acceptée "<< u->pseudo <<endl;
}

void Server::addNewUser(int n){
    qDebug() << "[serveur]new user"<<endl;
    allConnectedClients[n]->id = QRandomGenerator::global()->generate();
    allConnectedClients[n]->pseudo = packet[2];
    qDebug() << "[serveur]user créé "<<n<<endl;
    sendSpecific(Baptiste::baptiste_lobby(salonsAttrs),allConnectedClients[n]);
}

void Server::closeConnection(int n){
    User* u = allConnectedClients[n];
    u->socket->blockSignals(true);
    qDebug() << "[serveur] demande de closeConnection "<< u->pseudo<< endl;
    u->socket->close();
    qDebug() << "[serveur]socket fermé"<<endl;
    allConnectedClients.removeAt(n);
    socketList.removeAt(n);
    if (u->inGame != 999) {
        QMetaObject::invokeMethod(salons[salonsIdList.indexOf(u->inGame)],"hUserLeftUnexpectedly",Q_ARG(User*,u));
        qDebug() << "[serveur] hUserLeftUnexpectedly"<<endl;
    }
    QEventLoop loop;
    QTimer::singleShot(1000, &loop, SLOT(quit()));
    loop.exec();
    //delete [] u;
    qDebug() << "[serveur] closeConnection finished "<<endl;
}

void Server::createNewRoom(int n,QStringList s){
    qDebug() << "[serveur] createNewRoom"<<endl;
    qDebug() << "[server] s value :" << s << endl;
    User* u = allConnectedClients[n];
    QThread* thread = new QThread(this);
    qDebug() << s[5] << "ee" << s[3] << endl;
    Worker* salon = new Worker(nullptr,u,s[2].toInt(),((s[4] == "1") ? true : false),s[5],s[3]);
    salon->moveToThread(thread);
    qDebug() << "[serveur] Salon crée et threadé - owner "<< salon->owner<< "||" << u << " name "<< salon->name << "||" << s[3] <<endl;
    //plein de connects qui viendront au fur et à mesure
    connect(salon,&Worker::error,this,&Server::hHandleError);
    connect(salon,&Worker::heyServClose,this,&Server::closeRoom);
    connect(salon,&Worker::finished,thread,&QThread::quit);
    connect(salon,&Worker::finished,&Worker::deleteLater);
    connect(thread,&QThread::finished,&QThread::deleteLater);
    connect(salon,&Worker::threadSendAll,this,&Server::sendAll);
    connect(salon,&Worker::threadSendSpecific,this,&Server::sendSpecific);
    connect(salon,&Worker::setVis,this,&Server::hSetVis);
    qDebug() << "[serveur] connects du salon"<<endl;
    struct salon sl = {s[3],salon->id,true};
    salonsAttrs.append(sl);
    //
    salons.append(salon);
    salonsIdList.append(salon->id);
    qDebug() << "[serveur] salon ajoutée à la liste en position "<< salons.indexOf(salon)<<endl;
    thread->start();
    qDebug() << "[serveur] thread salon démarré"<<endl;
}

void Server::joinRoom(int n,QStringList s) {
    qDebug() << "[serveur] joinRoom"<<endl;
    User* u = allConnectedClients[n];
    int ns = s[2].toInt();
    sendSpecific("authRoom&" + QString::number(salonsIdList.indexOf(ns)),u);
    QMetaObject::invokeMethod(salons[salonsIdList.indexOf(ns)],"hAddUserToSalon",Qt::QueuedConnection,Q_ARG(User*,u));
    qDebug() << "[serveur] add User "<< u->pseudo << "to salon "<< ns <<endl;
}

void Server::closeRoom(Worker* w) {
    qDebug() << "[serveur] closeRoom "<< w->id<<endl;
}

void Server::hHandleError(QString errormsg) {
    qDebug() << "[serveur] hHandleError"<<endl;
    if (errormsg == "EFULL") {
        qDebug() << "[serveur] error EFULL salon plein"<<endl;
    } else if (errormsg == "ESTARTED") {
        qDebug() << "[serveur] error ESTARTED partie déjà commencée "<<endl;
    }
}

void Server::readData(QTcpSocket *socket) {
    int n;
    socket->waitForReadyRead(10);
    qDebug() << "[serveur] message captée"<<endl;
    n = socketList.indexOf(socket);
    buffer = QString::fromStdString(socket->readAll().toStdString());
    if (buffer.isEmpty()) {
        return;
    }
    qDebug() << "[serveur] message récupérée du socket "<< n <<endl;
    qDebug() << buffer << endl;
    packet = buffer.split("&");
    if (packet[0] == "new") { //"new&user&pseudo"
        qDebug() << "[serveur] paquet new"<<endl;
        addNewUser(n);
    } else if (packet[0] == "quit") {//"quit"
        qDebug() << "[serveur] paquet quit"<<endl;
        closeConnection(n);
    } else if (packet[0] == "create") { //"create&salon&nbrJoueursMax&authNeeded&password&name"
        qDebug() << "[serveur] paquet create"<<endl;
        createNewRoom(n,packet);
    } else if (packet[0] == "join") { //"join&salon&id&name"
        qDebug() << "[serveur] paquet join"<<endl;
        joinRoom(n,packet);
    } else if (packet[0] == "asklobby") {
        sendSpecific(Baptiste::baptiste_lobby(salonsAttrs),allConnectedClients[n]);
    } else {
        qDebug() << "[serveur] paquet pour un worker"<<endl;
        //qDebug() << allConnectedClients[n]->id;
        //qDebug() << salonsIdList.indexOf(allConnectedClients[n]->inGame) << endl;
        //qDebug() << salonsIdList[0] << endl;
        QMetaObject::invokeMethod(salons[salonsIdList.indexOf(allConnectedClients[n]->inGame)],"hWReadData",Qt::QueuedConnection,Q_ARG(QStringList,packet),Q_ARG(User*,allConnectedClients[n]));
    }
}

void Server::hSetVis(unsigned int id,bool b) {
    QEventLoop loop;
    for (int i = 0; i < salonsAttrs.size(); i++){
        if (salonsAttrs[i].id == id)
            salonsAttrs[i].visibility = b;
    }
    for (int i = 0; i < allConnectedClients.size(); i++){
        if (allConnectedClients[i]->inGame == 999) {
            QTimer::singleShot(500, &loop, SLOT(quit()));
            loop.exec();
            sendAll("refreshlobby");
        }
    }
}
