#include "user.h"

User::User(QString apseudo,QTcpSocket* asocket,Joueur j) :
    pseudo(apseudo),
    socket(asocket),
    gamePlayer(j)
{
    id = 0;
    inGame = 999;
    qRegisterMetaType<User>("User");
}

User* User::getUserFromJoueur(QList<User*> ulist,Joueur j) {
    for (int i = 0; i < ulist.size(); i++) {
        if (ulist[i]->gamePlayer.personnage == j.personnage)
            return ulist[i];
    }
    return nullptr;
}

User::~User(){
    delete [] this;
}

User::User(const User &other){
    id = 0;
    pseudo = other.pseudo;
    socket = other.socket;
    inGame = 999;
    gamePlayer = Joueur();
}
