#include "Joueur_button.h"
#include "mainwindow.h"



Joueur_button::Joueur_button(QWidget *parent, unsigned int joueurdId, QString nom) :
    QPushButton(parent),
    joueur_position(joueurdId),
    joueur_nom(nom)
{}

unsigned int Joueur_button::Joueur_position() const
{
    return joueur_position;
}


QString Joueur_button::Joueur_nom() const
{
    return joueur_nom;
}
