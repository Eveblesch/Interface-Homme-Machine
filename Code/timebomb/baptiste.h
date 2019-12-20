#ifndef BAPTISTE_H
#define BAPTISTE_H

#include <QString>
#include <QList>
#include "Carte.h"

struct client{
  unsigned int tour;
  unsigned int joueurcourant;
  unsigned int nb_joueur;
  QList<unsigned int> nb_carte_joueur;
};

struct salon{
  QString name;
  unsigned int id;
  bool visibility;
//  bool authNeeded;
//  unsigned int nb_clients;
//  unsigned int nb_clientsmax;
//  bool hasStarted;
//  QString passwd;
};

class Baptiste {
public:
    static QString baptiste_toUser(QString pseudo);
    static QString baptiste_createRoom(unsigned int nbjmax,bool auth,QString paswwd,QString name);
    static QString baptiste_joinRoom(unsigned int id,QString name/*,QString passwd*/);
    static QString baptiste_annonce() {return "prout";}
    static QString baptiste_cut() {return "prout";}
    static QList<struct salon> baptiste_toLobby(QString buf);
    static struct client baptiste_toJeuClient() {struct client c; return c;}
    static Carte baptiste_toCarte(QString s,bool p);
};

#endif // BAPTISTE_H
