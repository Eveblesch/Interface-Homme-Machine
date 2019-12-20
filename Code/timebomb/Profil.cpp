#include "Profil.h"
#include "mainwindow.h"
#include "ui_profil.h"
#include "Plateau.h"
#include "Plateau_on.h"

#include "Plateau_solo.h"

Profil::Profil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Profil)
{
    ui->setupUi(this);
}

Profil::~Profil()
{
    delete ui;

}

void Profil::on_pushButton_retour_pressed2()
{
//    Plateau* mv = dynamic_cast<Plateau*>(this->parent());
//    if (mv!= nullptr)
//    {
//        mv->reafficherContenu();
//    }
}

void Profil::on_pushButton_retour_pressed()
{
    this->setHidden(true);
    Plateau* mv = dynamic_cast<Plateau*>(this->parent());
    if (mv!= nullptr)
    {
        mv->voirCarteJoueurs();
    }
}


void Profil::affichage(unsigned int equipe)
{
        Plateau* mv = dynamic_cast<Plateau*>(this->parent());
        mv->clearLayout(ui->gridLayout_infos);

        QLabel * label_carte=new QLabel(this);
        label_carte->setGeometry(0, 0, 300, 370);

        if(equipe==2)//bleue
        {
            QLabel *label = new QLabel;
            const QString sTexte = tr("Vous êtes l'équipe de Sherlock ! \nVotre rôle est de couper tous les câbles de désamorçage.");
            label->setText(sTexte);
            label->setWordWrap(true);
            ui->gridLayout_infos->addWidget(label,1,2);

            QIcon icon;
            QPixmap *pix=new QPixmap(":/icones/persoJoueur"+QString::number(mv->m_jeu.joueurCourant+1));
            int l = label_carte->width();
            int h = label_carte->height();
            label_carte->setPixmap(pix->scaled(l,h,Qt::KeepAspectRatio));
            ui->gridLayout_infos->addWidget(label_carte,1,1);

        }

        else
        {
            QLabel *label = new QLabel;
            const QString sTexte = tr("Vous êtes l'équipe de Moriarty ! \nVotre rôle est de couper la bombe.");
            label->setText(sTexte);
            label->setWordWrap(true);
            ui->gridLayout_infos->addWidget(label,1,2);

            QIcon icon;
            QPixmap *pix=new QPixmap(":/icones/persoJoueur"+QString::number(mv->m_jeu.joueurCourant+1));
            int l = label_carte->width();
            int h = label_carte->height();
            label_carte->setPixmap(pix->scaled(l,h,Qt::KeepAspectRatio));
            ui->gridLayout_infos->addWidget(label_carte,1,1);
        }
}

void Profil::affichageHorsLigne(unsigned int equipe,unsigned int idJoueur)
{
        Plateau* mv = dynamic_cast<Plateau*>(this->parent());
        mv->clearLayout(ui->gridLayout_infos);

        QLabel * label_carte=new QLabel(this);
        label_carte->setGeometry(0, 0, 300, 370);

        if(equipe==2)//bleue
        {
            QLabel *label = new QLabel;
            const QString sTexte = tr("Vous êtes l'équipe de Sherlock ! \nVotre rôle est de couper tous les fils de désamorçage.");
            label->setText(sTexte);
            ui->gridLayout_infos->addWidget(label,1,2);

            QIcon icon;
            QPixmap *pix=new QPixmap(":/icones/persoJoueur"+QString::number(idJoueur+1));
            int l = label_carte->width();
            int h = label_carte->height();
            label_carte->setPixmap(pix->scaled(l,h,Qt::KeepAspectRatio));
            ui->gridLayout_infos->addWidget(label_carte,1,1);

        }

        else
        {
            QLabel *label = new QLabel;
            const QString sTexte = tr("Vous êtes l'équipe de Moriarty ! \nVotre rôle est de couper la bombe.");
            label->setText(sTexte);
            ui->gridLayout_infos->addWidget(label,1,2);

            QIcon icon;
            QPixmap *pix=new QPixmap(":/icones/persoJoueur"+QString::number(idJoueur+1));
            int l = label_carte->width();
            int h = label_carte->height();
            label_carte->setPixmap(pix->scaled(l,h,Qt::KeepAspectRatio));
            ui->gridLayout_infos->addWidget(label_carte,1,1);
        }
}

void Profil::affichageSolo(unsigned int equipe)
{
    ui->pushButton_retour->setVisible(false);
    ui->info->setText(tr("Veuillez attendre 3 secondes et vous retournerez sur le plateau"));
    Plateau_solo* mv = dynamic_cast<Plateau_solo*>(this->parent());
    mv->clearLayout(ui->gridLayout_infos);

    QLabel * label_carte=new QLabel(this);
    label_carte->setGeometry(0, 0, 300, 370);

    if(equipe==2)//bleue
    {
        QLabel *label = new QLabel;
        const QString sTexte = tr("Vous êtes l'équipe de Sherlock ! \nVotre rôle est de couper tous les câbles de désamorçage.");
        label->setText(sTexte);
        label->setWordWrap(true);
        ui->gridLayout_infos->addWidget(label,1,2);

        QIcon icon;
        QPixmap *pix=new QPixmap(":/icones/persoJoueur"+QString::number(mv->m_jeu.joueurCourant+1));
        int l = label_carte->width();
        int h = label_carte->height();
        label_carte->setPixmap(pix->scaled(l,h,Qt::KeepAspectRatio));
        ui->gridLayout_infos->addWidget(label_carte,1,1);

    }

    else
    {
        QLabel *label = new QLabel;
        const QString sTexte = tr("Vous êtes l'équipe de Moriarty ! \nVotre rôle est de couper la bombe.");
        label->setText(sTexte);
        label->setWordWrap(true);
        ui->gridLayout_infos->addWidget(label,1,2);

        QIcon icon;
        QPixmap *pix=new QPixmap(":/icones/persoJoueur"+QString::number(mv->m_jeu.joueurCourant+1));
        int l = label_carte->width();
        int h = label_carte->height();
        label_carte->setPixmap(pix->scaled(l,h,Qt::KeepAspectRatio));
        ui->gridLayout_infos->addWidget(label_carte,1,1);
    }

    QEventLoop loop;
    QTimer::singleShot(3000, &loop, SLOT(quit()));
    loop.exec();
    ui->info->setText("");
    ui->pushButton_retour->setVisible(true);

    this->setHidden(true);
    if (mv!= nullptr)
    {
        mv->reafficherContenu();
    }
}
