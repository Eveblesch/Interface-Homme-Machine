#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <QPushButton>

#include "joueur.h"
#include "carte.h"
#include "user.h"


#ifndef JEU_H
#define JEU_H

class Jeu
{
public:
  Jeu();

  //Attributs
  unsigned int nbJoueur;
  std::vector<Joueur*> listeJoueur;
  std::vector<Carte> paquetPrincipal;
  unsigned int nbrCarteSecurise;
  unsigned int nbrCarteDesamorce;
  unsigned int bombe=1;
  unsigned int tour;
  unsigned int manche;
  unsigned int nbrouge=0;
  unsigned int nbbleu=0;
  unsigned int joueurCourant=0;
  std::vector<std::vector<Carte*>> cartesParJoueur;

  void creationPartie(QList<User*> users);
  void AjoutJoueur(Joueur* j);
  void annonceStat();
  void creationPaquet();
  void melangerPaquet(unsigned int distribution);
  unsigned int retirerCarte(unsigned int idCarte);
  unsigned int taillePaquet();
  void distributionCartesJoueurs();
  void afficherPaquetJoueur(const Joueur &player);
  void afficherCarteTrouver();
  unsigned int finPartie();


  unsigned int quiAcetteCarte(unsigned int idCarte);
  void suppressionPartie();

};


#endif
