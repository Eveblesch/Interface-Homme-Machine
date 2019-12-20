#ifndef USER_H
#define USER_H

#include <QObject>
#include <QTcpSocket>
#include <QRandomGenerator>
#include "joueur.h"

class User
{
public:
    explicit User(QString pseudo="",QTcpSocket* socket=nullptr,Joueur j=Joueur("none",nullptr));
    User(const User& other);
    ~User();
    static User* getUserFromJoueur(QList<User*> ulist,Joueur j);

    unsigned int id;
    QString pseudo;
    QTcpSocket* socket;
    unsigned int inGame;
    Joueur gamePlayer;
};

Q_DECLARE_METATYPE(User*)

#endif // USER_H
