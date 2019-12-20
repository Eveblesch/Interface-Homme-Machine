#include "Vue_cartes_on.h"
#include "mainwindow.h"
#include "ui_vue_cartes_on.h"
#include "Plateau_on.h"

Vue_cartes_on::Vue_cartes_on(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Vue_cartes_on)
{
    ui->setupUi(this);
}

Vue_cartes_on::~Vue_cartes_on()
{
    delete ui;
}



void Vue_cartes_on::affichage_pseudo_joueurs()
{
    Plateau_on* mv = dynamic_cast<Plateau_on*>(this->parent());

    int a=0;

    for(unsigned int i=0; i<mv->nbjoueurs; ++i)
    {
            Joueur_button* &joueur_bouton = mv->m_joueur_buttons[i];
            joueur_bouton = new Joueur_button(this,i,mv->pseudos[static_cast<int>(i)]);
            joueur_bouton->setText(joueur_bouton->joueur_nom);
            joueur_bouton->setCursor(Qt::PointingHandCursor);
            ui->Layout_joueurs->addWidget(joueur_bouton, a, 0);
            a+=1;
            QObject::connect(joueur_bouton, SIGNAL(released()), this , SLOT(affichage_cartes_joueur()));
     }

    bouton_retour= new QPushButton("Retour", this);
    ui->gridLayout_retour->addWidget(bouton_retour,0,0);
    QObject::connect(bouton_retour, SIGNAL(released()), this, SLOT(retour()));

    bouton_ok= new QPushButton("Ok", this);
    ui->gridLayout_ok->addWidget(bouton_ok,0,0);
    QObject::connect(bouton_ok, SIGNAL(released()), this , SLOT(clear_cartes()));
}

void Vue_cartes_on::retour()
{
    Plateau_on* mv = dynamic_cast<Plateau_on*>(this->parent());
    mv->clearLayout(ui->Layout_joueurs);
    mv->clearLayout(ui->Layout_cartes);
    if (mv!= nullptr)
    {
       mv->reafficherContenu();
    }
}

void Vue_cartes_on::clear_cartes()
{
    Plateau_on* mv = dynamic_cast<Plateau_on*>(this->parent());
    mv->clearLayout(ui->Layout_cartes);

}


void Vue_cartes_on::affichage_cartes_joueur()
{
        Plateau_on* mv = dynamic_cast<Plateau_on*>(this->parent());
        QPushButton* pushButtonSender = qobject_cast<QPushButton*>(sender());
        Joueur_button* joueurButtonSender = dynamic_cast<Joueur_button*>(pushButtonSender);
        mv->clearLayout(ui->Layout_cartes);
        unsigned int position=1;
        unsigned int taille = static_cast<unsigned int>(mv->cartesParJoueur[static_cast<unsigned long>(joueurButtonSender->joueur_position)].size());

       //Affichage nom du joueur
       QLabel * nomJoueur=new QLabel(this);
       nomJoueur->setText(mv->pseudos[static_cast<int>(joueurButtonSender->joueur_position)]);
       ui->Layout_cartes->addWidget(nomJoueur, 1, 0);



       //Affichage carte profil
       QPushButton *carte_info=new QPushButton;
       carte_info->setFixedSize(140,250);
       carte_info->setCursor(Qt::PointingHandCursor);
       QObject::connect(carte_info, SIGNAL(released()), this , SLOT(affichage_profil()));

       QIcon icon;
       const QString imageP = ":/icones/persoJoueur"+QString::number(joueurButtonSender->joueur_position+1);
       icon.addFile(imageP);
       carte_info->setIcon(icon);
       carte_info->setIconSize(QSize(350,250));
       ui->Layout_cartes->addWidget(carte_info, 1, 1);
       mv->m_cartes_milieu.resize(taille);


        //Affichage des cartes
        for(unsigned int i=0; i<(static_cast<unsigned int>(taille)); ++i)
        {
            const Carte &carte = mv->cartesParJoueur[joueurButtonSender->joueur_position][i];
            QLabel * label_carte=new QLabel(this);
            label_carte->setGeometry(0, 0, 200, 250);

            QIcon icon;
            if(carte.typeCarte=="bombe")
            {
                QPixmap *pix=new QPixmap(":/icones/bombe");
                int l = label_carte->width();
                int h = label_carte->height();
                label_carte->setPixmap(pix->scaled(l,h,Qt::KeepAspectRatio));
            }
            else if (carte.typeCarte=="filSecurise")
            {
                QPixmap *pix=new QPixmap(":/icones/filNormal");
                int l = label_carte->width();
                int h = label_carte->height();
                label_carte->setPixmap(pix->scaled(l,h,Qt::KeepAspectRatio));
            }
            else if (carte.typeCarte=="filDesamorce")
            {
                QPixmap *pix=new QPixmap(":/icones/fils_desamorcage");
                int l = label_carte->width();
                int h = label_carte->height();
                label_carte->setPixmap(pix->scaled(l,h,Qt::KeepAspectRatio));
            }
            position+=1;
            ui->Layout_cartes->addWidget(label_carte, 1, static_cast<int>(position));

       }
}


void Vue_cartes_on::on_validation_pressed()
{
    Plateau_on* mv = dynamic_cast<Plateau_on*>(this->parent());
    mv->clearLayout(ui->Layout_cartes);

}


void Vue_cartes_on::affichage_profil()
{
    Plateau_on* mv = dynamic_cast<Plateau_on*>(this->parent());

    if(mv->allroles[mv->joueurCourant] =="rouge")
        {
            this->setHidden(true);
            mv->clearLayout(ui->Layout_cartes);
            mv->profil->setHidden(false);
            mv->profil->affichage(1);
        }

        else
        {
            this->setHidden(true);
            mv->clearLayout(ui->Layout_cartes);

            mv->profil->setHidden(false);
            mv->profil->affichage(2);
        }
}



