#include "Joueur.h"
#include "mainwindow.h"

Joueur::Joueur(QString pseudo,QString equipe,unsigned int personnage):
  pseudo(pseudo),
  equipe(equipe),
  personnage(personnage),
  paquetJoueur(),
  cablesDesamorces(0),
  cablesClassiques(0)
{}

void Joueur::setCarte(Carte c)
{
    paquetJoueur.push_back(c);
}
