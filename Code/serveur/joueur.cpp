#include "joueur.h"

Joueur::Joueur(/*QString pseudo,*/QString equipe,QString personnage):
  //pseudo(pseudo),
  equipe(equipe),
  personnage(personnage),
  paquetJoueur(),
  cablesDesamorces(0),
  cablesClassiques(0)
{}

void Joueur::setCarte(Carte* c)
{
    paquetJoueur.push_back(c);
}
