#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QThread>
#include <QTcpSocket>
#include <unistd.h>
#include <QCoreApplication>
#include <QString>
#include <QRandomGenerator>
#include "user.h"
#include "baptiste.h"
#include "worker.h"

class Server : public QObject
{
        Q_OBJECT
public:
    explicit Server(QObject* parent=nullptr);

    QTcpServer* server;
    QList<QTcpSocket*> socketList; //duplicate
    QList<unsigned int> salonsIdList; //duplicate
    QStringList packet;
    QString buffer;
    QList<User *> allConnectedClients;
    QList<Worker*> salons;
    QList<struct salon> salonsAttrs;

    void readData(QTcpSocket * socket);
    void addNewUser(int n);
    void closeConnection(int n);
    void createNewRoom(int n,QStringList s);
    void joinRoom(int n,QStringList s);
    void sendAll(QString msg);
    void sendSpecific(QString msg,User* u);

signals:
    //void moveUserToRoom(User* u);

public slots:
    void hNewConnection();
    void hHandleError(QString errorMsg);
    void closeRoom(Worker* w);
    void hSetVis(unsigned int id,bool b);
};

#endif // SERVER_H
