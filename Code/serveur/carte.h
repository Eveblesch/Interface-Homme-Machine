#include <QString>

#ifndef CARTE_H
#define CARTE_H

class Carte
{
public:
  Carte(unsigned int idCarte,QString typeCarte);

  //Attributs
  unsigned int idCarte;
  bool trouver;
  QString typeCarte;

  //Métoude

  void revelerCarte();

};

#endif
