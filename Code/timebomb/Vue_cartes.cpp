#include "Vue_cartes.h"
#include "mainwindow.h"
#include "ui_vue_cartes.h"
#include "Plateau.h"
#include <QSignalMapper>
Vue_cartes::Vue_cartes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Vue_cartes)
{
    ui->setupUi(this);
}

Vue_cartes::~Vue_cartes()
{
    delete ui;
}



void Vue_cartes::affichage_pseudo_joueurs()
{
    Plateau* mv = dynamic_cast<Plateau*>(this->parent());
    int a=0;

    for(unsigned int i=0; i<mv->m_jeu.nbJoueur; ++i)
    {
            Joueur_button* &joueur_bouton = mv->m_joueur_buttons[i];
            joueur_bouton = new Joueur_button(this,i,mv->m_jeu.listeJoueur[i].pseudo);
            joueur_bouton->setText(joueur_bouton->joueur_nom);
            joueur_bouton->setCursor(Qt::PointingHandCursor);
            ui->Layout_joueurs->addWidget(joueur_bouton, a, 0);
            a+=1;
            QObject::connect(joueur_bouton, SIGNAL(released()), this , SLOT(affichage_cartes_joueur()));
     }

    bouton_retour= new QPushButton(tr("Retour"), this);

    bouton_retour->setMaximumWidth(400);
    bouton_retour->setCursor(Qt::PointingHandCursor);
    ui->gridLayout_retour->addWidget(bouton_retour,0,0);
    QObject::connect(bouton_retour, SIGNAL(released()), this, SLOT(retour()));

    bouton_ok= new QPushButton(tr("Cacher cartes"), this);
    bouton_ok->setCursor(Qt::PointingHandCursor);
    ui->gridLayout_ok->addWidget(bouton_ok,0,0);
    QObject::connect(bouton_ok, SIGNAL(released()), this , SLOT(clear_cartes()));
}

void Vue_cartes::retour()
{
    Plateau* mv = dynamic_cast<Plateau*>(this->parent());
    mv->clearLayout(ui->Layout_joueurs);
    mv->clearLayout(ui->Layout_cartes);
    if (mv!= nullptr)
    {
       mv->reafficherContenu();
    }
}

void Vue_cartes::clear_cartes()
{
    Plateau* mv = dynamic_cast<Plateau*>(this->parent());
    mv->clearLayout(ui->Layout_cartes);

}

void Vue_cartes::affichage_cartes_joueur()
{

        Plateau* mv = dynamic_cast<Plateau*>(this->parent());
        QPushButton* pushButtonSender = qobject_cast<QPushButton*>(sender());
        Joueur_button* joueurButtonSender = dynamic_cast<Joueur_button*>(pushButtonSender);
        mv->clearLayout(ui->Layout_cartes);
        int position=1;
        int taille = mv->m_jeu.listeJoueur[joueurButtonSender->joueur_position].paquetJoueur.size();

       QLabel * nomJoueur=new QLabel(this);
       nomJoueur->setText(mv->m_jeu.listeJoueur[joueurButtonSender->joueur_position].pseudo);
       ui->Layout_cartes->addWidget(nomJoueur, 1, 0);


        Joueur_button * joueur_button = new Joueur_button(this,joueurButtonSender->joueur_position,mv->m_jeu.listeJoueur[joueurButtonSender->joueur_position].pseudo);
        joueur_button->setFixedSize(140,250);
        joueur_button->setCursor(Qt::PointingHandCursor);
        QObject::connect(joueur_button, SIGNAL(released()), this , SLOT(affichage_profil()));
        QIcon icon;
        const QString imageP = ":/icones/persoJoueur"+QString::number(joueurButtonSender->joueur_position+1);
        icon.addFile(imageP);
        joueur_button->setIcon(icon);
        joueur_button->setIconSize(QSize(350,250));
        ui->Layout_cartes->addWidget(joueur_button, 1, 1);

        for(unsigned int i=0; i<(static_cast<unsigned int>(taille)); ++i)
        {
            const Carte &carte = mv->m_jeu.listeJoueur[joueurButtonSender->joueur_position].paquetJoueur[i];
            if(carte.trouver==false)
            {
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
                ui->Layout_cartes->addWidget(label_carte, 1, position);

            }
       }
}



void Vue_cartes::on_validation_pressed()
{
    Plateau* mv = dynamic_cast<Plateau*>(this->parent());
    mv->clearLayout(ui->Layout_cartes);

}


void Vue_cartes::affichage_profil()
{
    Plateau* mv = dynamic_cast<Plateau*>(this->parent());
    QPushButton* pushButtonSender = qobject_cast<QPushButton*>(sender());
    Joueur_button* joueurButtonSender = dynamic_cast<Joueur_button*>(pushButtonSender);

    if(mv->m_jeu.listeJoueur[joueurButtonSender->joueur_position].equipe=="Rouge")
        {
            this->setHidden(true);
            mv->clearLayout(ui->Layout_cartes);
            mv->profil->setHidden(false);
            mv->profil->affichageHorsLigne(1,joueurButtonSender->joueur_position);
        }

        else
        {
            this->setHidden(true);
            mv->clearLayout(ui->Layout_cartes);

            mv->profil->setHidden(false);
            mv->profil->affichageHorsLigne(2,joueurButtonSender->joueur_position);
        }
}



