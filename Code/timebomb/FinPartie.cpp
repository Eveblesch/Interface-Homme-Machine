#include "FinPartie.h"
#include "mainwindow.h"
#include "ui_finpartie.h"
#include "Plateau.h"


FinPartie::FinPartie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FinPartie)
{
    ui->setupUi(this);
}

FinPartie::~FinPartie()
{
    delete ui;
}

void FinPartie::tableau_de_scores(unsigned int number, std::vector<Joueur> listeJoueur)
{
    QLabel *label=new QLabel;
    QString sTexte;
    QString resultat;
    if(number==1)
    {
        for(unsigned int i=0;i<listeJoueur.size();i++)
        {

            if(listeJoueur[i].equipe=="Rouge")
            {
                sTexte = listeJoueur[i].pseudo;
                resultat=resultat + "\n" + sTexte;
            }

        }
        label->setText(resultat);
        ui->gridLayout_finPartie->addWidget(label, 0,1);
     }

    if(number==2)
    {
        for(unsigned int i=0;i<listeJoueur.size();i++)
        {

            if(listeJoueur[i].equipe=="Bleues")
            {
                sTexte = listeJoueur[i].pseudo;
                resultat=resultat + "\n" +sTexte;
            }

        }
        label->setText(resultat);
        ui->gridLayout_finPartie->addWidget(label, 0,0);
     }
}


void FinPartie::on_bouton_rejouer_pressed()
{
    this->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr)
    {
       mv->display_creation_partie();
    }
}

void FinPartie::on_bouton_quitter_pressed()
{
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr)
    {
       mv->display_contenu();
    }
}
