#include "worker.h"

Worker::Worker(QObject* parent,User* aowner,unsigned int anbrJoueursMax,bool aauthNeeded,QString apassword,QString aname) :
    QObject(parent)
{
    nbrJoueursMax = anbrJoueursMax;
    authNeeded = aauthNeeded;
    password = apassword;
    name = aname;
    owner = aowner;
    id = static_cast<unsigned int>(QRandomGenerator::global()->bounded(1,10000));
    ownerStart = false;
    enoughStart = false;
    hasStarted = false;
    nbOrdi = 0;
    hasbeenplayed = false;
    timer = new QTimer(this);
    connect(this,&Worker::nbUserChanged,&Worker::hNbUserChecks);
    connect(this,&Worker::nbUserChanged,&Worker::hUpdateVisOnClient);
    connect(this,&Worker::canWeStart,[=](){if (enoughStart && ownerStart) {hStartGame();} else if (enoughStart) {sendSpecific("canstart",owner);}});
    connect(this,&Worker::turnOver,&Worker::hNewTurn);
    connect(this,&Worker::roundOver,&Worker::hNewRound);
    connect(this,&Worker::gameOver,&Worker::hGameFinished);
    connect(this,&Worker::closeRoom,&Worker::hCloseRoom);
    connect(timer,&QTimer::timeout,[=](){sendSpecific("timeout",User::getUserFromJoueur(clients,*jeu.listeJoueur[jeu.joueurCourant]));});
}

Worker::~Worker() {}

void Worker::sendAll(QString msg) {
    //int i;
    qDebug() << "[worker] sending all :" + msg << endl;
    emit threadSendAll(msg);
//    for (i = 0; i < clients.size(); i++){
//        clients[i]->socket->write(msg.toUtf8());
//        clients[i]->socket->flush();
//        clients[i]->socket->waitForBytesWritten(10);
//    }
}

void Worker::sendSpecific(QString msg, User* u) {
    qDebug() << "[worker] sending :" + msg + "to" + u->pseudo << endl;
    emit threadSendSpecific(msg,u);
//    u->socket->write(msg.toUtf8());
//    u->socket->flush();
//    u->socket->waitForBytesWritten(10);
}

void Worker::hUserLeftUnexpectedly(User* u) {
    qDebug() << "[worker] user n°" + QString::number(clients.indexOf(u)) + "left unexpectedly" << endl;
    if (!hasStarted) {
        qDebug() << "[worker] game has not started" << endl;
        clients.removeAt(clients.indexOf(u));
        sendAll("left&"+u->pseudo);
        emit(nbUserChanged());
    } else {
        nbOrdi++;
        Joueur j = u->gamePlayer;
        qDebug() << "[worker] replacing user n°" + QString::number(clients.indexOf(u)) + "with a placeholder" << endl;
        clients[clients.indexOf(u)] = new UserPlaceholder(nbOrdi,j);
    }
}

void Worker::hAddUserToSalon(User* u) {
    if(static_cast<unsigned int>(clients.size()) == nbrJoueursMax) {
        qDebug() << "[worker] cannot add user " + u->pseudo + "to game n° " +QString::number(this->id)+ ",is full" << endl;
        emit(error("EFULL"));
    } else if(hasStarted){
        qDebug() << "[worker] cannot add user " + u->pseudo + "to game n° " +QString::number(this->id)+ ",is started" << endl;
        emit(error("ESTARTED"));
    } else {
        QEventLoop loop;
        clients.append(u);
        u->inGame = id;
        qDebug() << "[worker] adding user " + u->pseudo + "to game n° " +QString::number(this->id) << endl;
        QString alreadyIn = "alreadyin&" + QString::number(clients.size()-1);
        qDebug() << "[worker] clients size is " << clients.size() << endl;
        for (int i = 0; i < (clients.size()); i++) {
            if (clients[i]->pseudo != u->pseudo) {
                alreadyIn = alreadyIn + "&"+ clients[i]->pseudo;
            }
        }
        QTimer::singleShot(500, &loop, SLOT(quit()));
        loop.exec();
        sendSpecific(alreadyIn,u);
        QTimer::singleShot(500, &loop, SLOT(quit()));
        loop.exec();
        for (int i = 0; i < msghist.size(); i++) {
            sendSpecific(msghist[i],u);
            QTimer::singleShot(50, &loop, SLOT(quit()));
            loop.exec();
        }
        sendAll("newplayer&"+u->pseudo+"&"+QString::number(clients.size())); //"newplayer&pseudo&nbjoueurstotal"
        QTimer::singleShot(500, &loop, SLOT(quit()));
        loop.exec();
        emit(nbUserChanged());
    }
}

void Worker::hNbUserChecks() {
    qDebug() << "[worker] user nb has changed in game n° " + QString::number(this->id) << endl;
    if (clients.size() >= 4) {
        qDebug() << "[worker] enough clients to start, asking for start in game n° " + QString::number(this->id) << endl;
        enoughStart = true;
        emit canWeStart();
    } else {
        qDebug() << "[worker] not enough clients to start in game n° " + QString::number(this->id) << endl;
        enoughStart = false;
    }
}

void Worker::hWReadData(QStringList p,User* u) {
    qDebug() << "[worker] handling msg from user" + u->pseudo << endl;
    if (p[0] == "annonce") {
        qDebug() << "[worker] msg is annonce" << endl;
        sendAll(p[0]+"&"+p[1]+"&"+p[2]);
    } else if (p[0] == "cut") {
        qDebug() << "[worker] msg is cut" << endl;
        timer->stop();
        User* uToCut = clients[p[1].toInt()];
        unsigned int cToCut = uToCut->gamePlayer.paquetJoueur[static_cast<unsigned int>(p[2].toInt())]->idCarte;
        lastcuttype = jeu.retirerCarte(cToCut);
        if (lastcuttype == 1)
            sendAll(Baptiste::baptiste_event(jeu));
        jeu.joueurCourant = jeu.quiAcetteCarte(cToCut);
        qDebug() << "[worker] cut card is n° " + QString::number(cToCut) + " from " + u->pseudo << endl;
        qDebug() << "[worker] next player is " + User::getUserFromJoueur(clients,*(jeu.listeJoueur[jeu.joueurCourant]))->pseudo << endl;
        if (jeu.tour == static_cast<unsigned int>(clients.size())) {
            qDebug() << "[worker] round over in game n° " + QString::number(this->id) << endl;
            emit roundOver();
        } else {
            qDebug() << "[worker] turn over in game n° " + QString::number(this->id) << endl;
            emit turnOver();
        }
    } else if (p[0] == "chat") {
        qDebug() << "[worker] msg is chat" << endl;
        qDebug() << msghist.size() << endl;
        if (msghist.size() == 10) {
            msghist.removeFirst();
            msghist.append(p[0]+"&"+p[1]+"&"+p[2]+"&"+p[3]);
        } else {
            msghist.append(p[0]+"&"+p[1]+"&"+p[2]+"&"+p[3]);
        }
        qDebug() << "[worker] chat history size is " << QString::number(msghist.size());
        sendAll(p[0]+"&"+p[1]+"&"+p[2]+"&"+p[3]);
    } else if ((p[0] == "start")&&(u == owner)) {
        ownerStart = true;
        emit canWeStart();
    } else if (p[0] == "quitroom"){
        qDebug() << "[worker] msg is quitroom" << endl;
        u->inGame = 999;
        qDebug() << "[worker] clearing inGame field for user " + u->pseudo + "out of game n° " + QString::number(this->id) << endl;
        sendAll("quitplayer&"+u->pseudo+"&"+QString::number(clients.size()));
        clients.removeAt(clients.indexOf(u));
        if ((clients.size() == 0)&&(hasbeenplayed)) {
            qDebug() << "[worker] nobody left in game n° " + QString::number(this->id) << endl;
            emit closeRoom();
        }
    } else if (p[0] == "askgamedata") {

    }
}

void Worker::hCloseRoom() {
    qDebug() << "[worker] emitting finished()" << endl;
    emit finished();
}

void Worker::hStartGame() {
    QEventLoop loop;
    qDebug() << "[worker] game n° " + QString::number(this->id) + "starting" << endl;
    jeu.creationPartie(clients);
    jeu.creationPaquet();
    jeu.melangerPaquet(0);
    jeu.distributionCartesJoueurs();
    jeu.joueurCourant = static_cast<unsigned int>(QRandomGenerator::global()->bounded(0,clients.size()));
    qDebug() << "[worker] first player for game n° " + QString::number(this->id)+ "is " + User::getUserFromJoueur(clients,*jeu.listeJoueur[jeu.joueurCourant])->pseudo << endl;
    QTimer::singleShot(500, &loop, SLOT(quit()));
    loop.exec();
    sendAll("firststart");
    QTimer::singleShot(500, &loop, SLOT(quit()));
    loop.exec();
    QString tour = "tour&"+QString::number(jeu.tour)+"&"+QString::number(jeu.joueurCourant)+"&"+QString::number(clients.size());
    for (int i = 0; i < clients.size(); i++){
        Joueur j = clients[i]->gamePlayer;
        sendSpecific(Baptiste::baptiste_listedecartes(j.paquetJoueur,i),clients[i]);
        QTimer::singleShot(500, &loop, SLOT(quit()));
        loop.exec();
        sendSpecific(Baptiste::baptiste_role(j),clients[i]);
        tour += "&"+QString::number(j.paquetJoueur.size());
    }
    sendAll(Baptiste::baptiste_infostart(jeu));
    QTimer::singleShot(500, &loop, SLOT(quit()));
    loop.exec();
    sendAll(Baptiste::baptiste_fullpaquet(jeu.cartesParJoueur));
    QTimer::singleShot(500, &loop, SLOT(quit()));
    loop.exec();
    sendAll(Baptiste::baptiste_allroles(jeu.listeJoueur));
    QTimer::singleShot(500, &loop, SLOT(quit()));
    loop.exec();
    sendAll(tour);
    QTimer::singleShot(500, &loop, SLOT(quit()));
    loop.exec();
    for (int i = 0; i < msghist.size(); i++) {
        sendAll(msghist[i]);
        QTimer::singleShot(50, &loop, SLOT(quit()));
        loop.exec();
    }
//    QTimer::singleShot(500, &loop, SLOT(quit()));
//    loop.exec();
    sendAll("fullstart");
}



void Worker::hNewTurn() {
    QEventLoop loop;
    if (lastcuttype == 2) {
        emit gameOver();
    } else {
        jeu.tour++;
        QString tour = "tour&"+QString::number(jeu.tour)+"&"+QString::number(jeu.joueurCourant)+"&"+QString::number(clients.size());
        for (int i = 0; i < clients.size(); i++){
            Joueur j = clients[i]->gamePlayer;
            sendSpecific(Baptiste::baptiste_listedecartes(j.paquetJoueur,i),clients[i]);
        }
        sendAll(tour);
        QTimer::singleShot(500, &loop, SLOT(quit()));
        loop.exec();
        sendAll(Baptiste::baptiste_fullpaquet(jeu.cartesParJoueur));
        sendAll(Baptiste::baptiste_newtour(jeu));
        qDebug() << "[worker] timer for newturn is go" << endl;
        timer->start(30000);
    }

}

void Worker::hNewRound() {
    if (lastcuttype == 2) {
        emit gameOver();
    } else {
        jeu.tour = 0;
        jeu.manche++;
        jeu.melangerPaquet(1);
        sendAll(Baptiste::baptiste_newRound(jeu));
        emit turnOver();
    }
}

void Worker::hGameFinished() {
    qDebug() << "[worker] game over" << endl;
    if (lastcuttype == 2) {
        sendAll("endgame&over&bomb");
    } else if ((lastcuttype == 1) && (jeu.nbrCarteDesamorce == 0)) {
        sendAll("endgame&over&diff");
    } else {
        sendAll("endgame&over&end");
    }
    sendAll(QString("endgame&statsall&")+((lastcuttype==1) ? "bleu" : "rouge"));
    sendAll(Baptiste::baptiste_endgameStats(jeu));
}

void Worker::hUpdateVisOnClient(){
    if (clients.size() == nbrJoueursMax){
        emit setVis(id,false);
    } else {
        emit setVis(id,true);
    }
}
