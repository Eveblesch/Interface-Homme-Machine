#include <QString>
#include <string>

#ifndef CARTE_H
#define CARTE_H

class Carte
{
public:
  Carte(unsigned int idCarte,QString typeCarte);

  unsigned int idCarte;
  bool trouver=false;
  QString typeCarte;

  void revelerCarte();

};

#endif
