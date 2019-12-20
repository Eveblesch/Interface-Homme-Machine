#include "Creation_partie_solo.h"
#include "ui_creation_partie_solo.h"
#include "mainwindow.h"

Creation_partie_solo::Creation_partie_solo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Creation_partie_solo)
{
    ui->setupUi(this);

}

Creation_partie_solo::~Creation_partie_solo()
{
    delete ui;
}


void Creation_partie_solo::on_button_retour_pressed()
{
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        mv->display_contenu();
    }
}

void Creation_partie_solo::on_button_create_pressed()
{
    int nombreBots=ui->nbrJoueurs->value();
    QString pseudo = ui->pseudoJoueur->text();
    QStringList listePseudos,finale;
    listePseudos.append(pseudo);
    listePseudos.append(QString("Jim Moriarty"));
    listePseudos.append(QString("Milverton"));
    listePseudos.append(QString("Hooper"));
    listePseudos.append(QString("Milverton"));
    listePseudos.append(QString("Charles "));
    listePseudos.append(QString("Watson"));
    listePseudos.append(QString("Holmes"));
    listePseudos.append(QString("Morly "));

    for(int i=0;i<nombreBots+1;i++)
    {
        finale.append(listePseudos[i]);
    }

    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        mv->display_plateau_solo(finale);
    }

}

