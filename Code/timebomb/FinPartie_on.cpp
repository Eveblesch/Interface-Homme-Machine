#include "FinPartie_on.h"
#include "mainwindow.h"
#include "ui_finpartie_on.h"
#include "Plateau.h"


FinPartie_on::FinPartie_on(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FinPartie_on)
{
    ui->setupUi(this);
}

FinPartie_on::~FinPartie_on()
{
    delete ui;
}

void FinPartie_on::tableau_de_scores(QStringList stats)
{
    QLabel *label=new QLabel;
    QString sTexte;
    QString resultat;
    QStringList statsPlayer;

    for (int i = 0; i < stats.size(); i++) {
        statsPlayer = stats[i].split("#");
        sTexte = statsPlayer[0];
        resultat = resultat+"\n"+sTexte;
    }
    label->setText(resultat);
    ui->gridLayout_finPartie->addWidget(label, 0,1);
}


void FinPartie_on::on_bouton_rejouer_pressed()
{
    this->setHidden(true);
    Plateau* mv = dynamic_cast<Plateau*>(this->parent());
    if (mv!= nullptr)
    {
       mv->recommencer();
    }
}

void FinPartie_on::on_bouton_quitter_pressed()
{
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent()->parent());
    if (mv!= nullptr)
    {
       mv->display_contenu();
    }
}
