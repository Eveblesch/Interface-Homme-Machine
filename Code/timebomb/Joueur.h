#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "Carte.h"

#ifndef JOUEUR_H
#define JOUEUR_H

class Joueur
{
public:
  Joueur(QString pseudo,QString equipe,unsigned int personnage);

  QString pseudo;
  QString equipe;
  unsigned int personnage;
  std::vector<Carte> paquetJoueur;
  unsigned int cablesDesamorces;
  unsigned int cablesClassiques;

  void setCarte(Carte c);
};

#endif
