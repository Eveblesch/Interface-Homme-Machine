#include "Pseudo.h"
#include "ui_pseudo.h"
#include "mainwindow.h"

Pseudo::Pseudo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pseudo),
    nbrjoueur(0),
    liste()
{
    ui->setupUi(this);

}

Pseudo::~Pseudo()
{
    delete ui;
}

void Pseudo::on_button_retour_pressed()
{

    this->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        mv->display_creation_partie();
    }
}

void Pseudo::on_button_create_pressed()
{
    QString nom,retour;
    QStringList listePseudos;
    for(unsigned int i=0;i<nbrjoueur;i++)
    {
        retour=liste[i]->text();
        listePseudos.append(retour);
    }
    this->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        mv->display_plateau(listePseudos);
    }
}
void Pseudo::affichageZoneTexte(unsigned int nbrjoueurTotal)
{
    clearWidget();
    QLineEdit * saisie;
    nbrjoueur=nbrjoueurTotal;
    for(int i=0;i<nbrjoueur;i++)
    {
        saisie=new QLineEdit(QString(tr("Joueur"))+QString::number(i+1),this);
        liste.push_back(saisie);
        ui->gridPseudo->addWidget(saisie, i,0);
    }
};

void Pseudo::clearWidget()
{
    for(unsigned int i=0;i<liste.size();i++)
    {
        delete liste[i];
    }
    liste.clear();
}
