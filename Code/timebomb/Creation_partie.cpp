#include "Creation_partie.h"
#include "ui_creation_partie.h"
#include "mainwindow.h"

Creation_partie::Creation_partie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Creation_partie)
{
    ui->setupUi(this);

}

Creation_partie::~Creation_partie()
{
    delete ui;
}


void Creation_partie::on_button_retour_pressed()
{

    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        mv->display_contenu();
    }
}

void Creation_partie::on_button_create_pressed()
{
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        mv->display_pseudo(ui->nbrJoueurs->value());
    }
}

