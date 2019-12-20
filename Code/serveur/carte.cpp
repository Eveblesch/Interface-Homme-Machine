#include "carte.h"

Carte::Carte(unsigned int idCarte, QString typeCarte):
    idCarte(idCarte),
    trouver(false),
    /*type carte
     * bombe
     * filSecurise
     * filDesamorce */
    typeCarte(typeCarte)
{}

void Carte::revelerCarte(){
  trouver=true;
}
