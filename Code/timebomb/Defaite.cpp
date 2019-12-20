#include "Defaite.h"
#include "mainwindow.h"
#include "ui_defaite.h"
#include "Plateau.h"


Defaite::Defaite(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Defaite)
{
    ui->setupUi(this);
}

Defaite::~Defaite()
{
    delete ui;

}

void Defaite::on_rejouer_bouton_pressed()
{
    Plateau* mv = dynamic_cast<Plateau*>(this->parent());
    if (mv!= nullptr)
    {
       mv->reafficherContenu();
    }

}

