#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <QString>
#include "carte.h"

#ifndef JOUEUR_H
#define JOUEUR_H

class Joueur
{
public:
  Joueur(/*QString pseudo,*/QString equipe="null",QString personnage="null");

  //Attributs
  //QString pseudo;
  QString equipe;
  QString personnage;
  std::vector<Carte*> paquetJoueur;

  // Attributs pour le score du joueur
  int cablesDesamorces;
  int cablesClassiques;

  //Methodes
  void setCarte(Carte* c);
};

#endif
