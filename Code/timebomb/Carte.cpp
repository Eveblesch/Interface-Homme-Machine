#include "Carte.h"
#include "mainwindow.h"
Carte::Carte(unsigned int idCarte, QString typeCarte):
    idCarte(idCarte),
    trouver(),
    /*type carte
     * bombe
     * filSecurise
     * filDesamorce */
    typeCarte(typeCarte)
{}

void Carte::revelerCarte(){
  trouver=true;
}
