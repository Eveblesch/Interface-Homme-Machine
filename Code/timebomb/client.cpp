#include "client.h"

Client::Client(QObject* parent) :
    QObject(parent)
{
    socket = new QTcpSocket();
    socket->setSocketOption(QAbstractSocket::LowDelayOption,1);
    connect(this,SIGNAL(createRoom(unsigned int,bool,QString,QString)),this,SLOT(hCreateRoom(unsigned int,bool,QString,QString)));
    connect(this,SIGNAL(quit()),this,SLOT(hQuit()));
    connect(this,SIGNAL(quitRoom()),this,SLOT(hQuitRoom()));
    connect(this,SIGNAL(joinRoom(unsigned int,QString/*,QString*/)),this,SLOT(hJoinRoom(unsigned int,QString/*,QString*/)));
    connect(this,SIGNAL(annonce(bool,unsigned int)),this,SLOT(hAnnonce(bool,unsigned int)));
    connect(this,SIGNAL(cut(unsigned int,unsigned int)),this,SLOT(hCut(unsigned int,unsigned int)));
    connect(this,SIGNAL(chat(QString)),this,SLOT(hChat(QString)));
    connect(this,SIGNAL(startGame()),this,SLOT(hStartGame()));
    connect(this,SIGNAL(asklobby()),this,SLOT(hAskLobby()));
}

Client::~Client(){};

bool Client::connexion(){
    socket->connectToHost("127.0.0.1",4040);
    if (socket->waitForConnected(3000)) {
        connect(socket,&QAbstractSocket::stateChanged,this,[=](){emit closeConnexion();});
        connect(socket,&QAbstractSocket::readyRead,this,&Client::hReadData);
        bufferOut = Baptiste::baptiste_toUser(pseudo).toUtf8();
        socket->write(bufferOut.toUtf8());
        return true;
    } else {
        return false;
    }
}

void Client::hReadData() {
    socket->waitForReadyRead(10);
    QString tmp = socket->readAll();
    if (tmp.isEmpty()) {
        return;
    }
    bufferIn = QString(tmp);
    packet = bufferIn.split("&");
    qDebug() << "[client] receiving: " << bufferIn << " " << bufferIn.isEmpty() << endl;
    if (packet[0] == "lobby") {
        emit gotLobby();
        // do nothing more
    } else if (packet[0] == "tour") {
        emit gotTurnInfo(packet);
        //
    } else if (packet[0] == "paquet") {
        if (packet[1].toInt() > 5)
            emit gotFullDeck(packet);
        else
            emit gotDeck(packet);
        //
    } else if (packet[0] == "role") {
        emit gotRole();
        //
    } else if (packet[0] == "annonce") {
        emit gotAnnonce();
        //
    } else if (packet[0] == "chat") {
        emit gotChat(packet);
        //
    } else if (packet[0] == "endgame") {
        if (packet[1] == "statsall") {
            emit gotEndgameMainstats();
            //
        } else if (packet[1] == "stats"){
            emit gotEndgamePlayerStats(packet);
            //
        } else if (packet[1] == "over") {
            //
        }
    } else if (packet[0] == "canstart") {
        emit gotCanStart();
        //
    } else if (packet[0] == "timeout") {
        emit gotTimeout();
        //
    } else if (packet[0] == "info") {
        if (packet[1] == "start") {
            emit gotInfoStart();
            //
        } else if (packet[1] == "newtour"){
            emit gotInfoNewTurn();
            //
        } else if (packet[1] == "newround") {
            emit gotInfoNewRound();
            //
        }
        else if (packet[1] == "event") {
            emit gotInfoEvent();
            //
        }
    } else if (packet[0] == "fullstart") {
        emit gotFullStart();
        //
    } else if (packet[0] == "fullroles") {
        emit gotAllRoles(packet);
    } else if (packet[0] == "newplayer") {
        emit newPlayerInRoom(packet[1],true);
    } else if (packet[0] == "alreadyin") {
        emit allPlayersInRoom(packet);
    } else if (packet[0] == "authRoom") {
        emit gotAuthRoom(static_cast<unsigned int>(packet[1].toInt()));
    } else if (packet[0] == "quitplayer") {
        emit newPlayerInRoom(packet[1],false);
    } else if (packet[0] == "refreshlobby") {
        emit refreshlobby();
    } else if (packet[0] == "firststart") {
        emit gotFirstStart();
    } else {
        qDebug() << packet[0] << " not handled" << endl;
    }
}

void Client::sendMsg(QString msg) {
    bufferOut = msg;
    qDebug() << "[client] sending: " << bufferOut << endl;
    socket->write(bufferOut.toUtf8());
    socket->flush();
    socket->waitForBytesWritten(10);
}

//void Client::hClose(){
//    sendMsg("quit");
//}

void Client::hCreateRoom(unsigned int nbjmax,bool auth,QString paswwd,QString name) {
    sendMsg(Baptiste::baptiste_createRoom(nbjmax,auth,paswwd,name));
}

void Client::hQuit() {
    sendMsg("quit");
}

void Client::hQuitRoom() {
    sendMsg("quitroom");
}

void Client::hJoinRoom(unsigned int id,QString name/*,QString passwd*/) {
    sendMsg(Baptiste::baptiste_joinRoom(id,name/*,passwd*/));
}

void Client::hAnnonce(bool bomb,unsigned int diffuse){
    sendMsg(Baptiste::baptiste_annonce());
}

void Client::hCut(unsigned int njoueur,unsigned int ncarte){
    sendMsg(Baptiste::baptiste_cut());
}

void Client::hChat(QString msg){
    sendMsg("chat&"+QDateTime::currentDateTimeUtc().toString("hh:mm:ss")+"&"+pseudo+"&"+msg);
}

void Client::hStartGame() {
    sendMsg("start");
}

void Client::hSetPseudo(QString pseudo) {
    this->pseudo = pseudo;
}

void Client::hAskLobby() {
    sendMsg("asklobby");
}
