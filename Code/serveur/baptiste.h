#ifndef BAPTISTE_H
#define BAPTISTE_H

//mais t'es pas net baptiste ?!

#include <QString>
#include <QList>
#include "joueur.h"
#include "jeu.h"
#include "carte.h"
#include "worker.h"

struct salon {
    QString name;
    unsigned int id;
    bool visibility;
};

class Baptiste {
public:
    static QString baptiste_listedecartes(std::vector<Carte*> paquet,unsigned int index); //
    static QString baptiste_role(Joueur j); //
    static QString baptiste_infostart(Jeu j); //
    static QString baptiste_newtour(Jeu j); //
    static QString baptiste_newRound(Jeu j); //
    static QString baptiste_endgameStats(Jeu j); //
    static QString baptiste_event(Jeu j);
    static QString baptiste_fullpaquet(std::vector<std::vector<Carte*>> cp);
    static QString baptiste_allroles(std::vector<Joueur*> j);
    static QString baptiste_lobby(QList<struct salon> salons);
};

#endif // BAPTISTE_H
