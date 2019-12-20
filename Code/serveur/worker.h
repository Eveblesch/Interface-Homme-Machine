#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QTcpSocket>
#include <QString>
#include <QRandomGenerator>
#include <QDateTime>
#include <QTimer>
#include <QEventLoop>
#include "user.h"
#include "jeu.h"
#include "userplaceholder.h"

class Worker : public QObject
{
    Q_OBJECT
public:
    Worker(QObject* parent=nullptr,User* aowner=nullptr,unsigned int anbrJoueursMax=8,bool aauthNeeded=false,QString apassword="",QString aname="untitled");
    ~Worker();

    unsigned int id;
    unsigned int nbrJoueursMax;
    bool authNeeded;
    QString password;
    QString name;
    QList<User*> clients;
    bool hasStarted;
    User* owner;

    void sendAll(QString msg);
    void sendSpecific(QString msg,User* u);
public slots:
    void hAddUserToSalon(User* u);
    void hUserLeftUnexpectedly(User* u);
    void hNbUserChecks();
    void hWReadData(QStringList packet,User* u);
    //void hReturnData();

    void hStartGame();
    void hNewTurn();
    void hNewRound();
    void hGameFinished();
    void hCloseRoom();
    void hUpdateVisOnClient();
signals:
    void finished();
    void error(QString errorMsg);
    void nbUserChanged();
    void canWeStart();
    void closeRoom();
    void heyServClose(Worker* w);
    void setVis(unsigned int id,bool b);

    void gameOver();
    void turnOver();
    void roundOver();

    void threadSendAll(QString msg);
    void threadSendSpecific(QString msg,User* u);


protected:
    void run();
private:

    Jeu jeu;
    bool ownerStart;
    bool enoughStart;
    unsigned int nbOrdi;
    unsigned int lastcuttype;
    QTimer* timer;
    QStringList msghist;
    bool hasbeenplayed;
};

#include "baptiste.h"

#endif // WORKER_H
