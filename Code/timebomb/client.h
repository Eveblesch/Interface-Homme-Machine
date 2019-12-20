#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include <QString>
#include <QDateTime>
#include <QInputDialog>
#include "baptiste.h"

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject* parent=nullptr);
    ~Client();
    void sendMsg(QString msg);

    QTcpSocket* socket;
    QString bufferIn;
    QString bufferOut;
    QStringList packet;

    QString pseudo;

    bool connexion();
signals:
    void closeConnexion();

    void createRoom(unsigned int nbjmax,bool auth,QString paswwd,QString name);
    void quit();
    void quitRoom(); //bouton quitter ?
    void joinRoom(unsigned int id,QString name);
    void annonce(bool bomb,unsigned int diffuse);
    void cut(unsigned int njoueur,unsigned int ncarte);
    void chat(QString msg);
    void startGame();
    void asklobby();

    void gotLobby();
    void gotAuthRoom(unsigned int id);
    void newPlayerInRoom(QString pseudo,bool inOrOut);
    void gotChat(QStringList msg);
    void gotTimeout();
    void gotCanStart();
    void allPlayersInRoom(QStringList s);
    void refreshlobby();

    void gotTurnInfo(QStringList l);
    void gotDeck(QStringList l);
    void gotRole();
    void gotAnnonce();
    void gotEndgameMainstats();
    void gotEndgamePlayerStats(QStringList statsbyplayer);
    void gotInfoStart();
    void gotInfoNewTurn();
    void gotInfoNewRound();
    void gotInfoEvent();
    void gotGameOver();
    void gotDeck();
    void gotFullDeck(QStringList s);
    void gotFirstStart();
    void gotFullStart();
    void gotAllRoles(QStringList s);

public slots:
    void hReadData();
    void hSetPseudo(QString pseudo);
    void hAskLobby();

    //void hClose();
    void hCreateRoom(unsigned int nbjmax,bool auth,QString paswwd,QString name);
    void hQuit();
    void hQuitRoom();
    void hJoinRoom(unsigned int id,QString name);
    void hAnnonce(bool bomb,unsigned int diffuse);
    void hCut(unsigned int njoueur,unsigned int ncarte);
    void hChat(QString msg);
    void hStartGame();



};

#endif // CLIENT_H
