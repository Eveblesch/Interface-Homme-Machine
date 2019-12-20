#include "Instructions.h"
#include "ui_instructions.h"
#include "mainwindow.h"

Instructions::Instructions(QWidget *parent) :
    QWidget(parent),

    ui(new Ui::Instructions)
{
    ui->setupUi(this);

    QMovie *movie = new QMovie(":/icones/images/carte.gif");
    ui->gif->setMovie(movie);
    movie->start();


}

Instructions::~Instructions()
{
    delete ui;
}

void Instructions::on_pushButton_retour_pressed()
{
    this->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        mv->display_contenu();
    }


}
