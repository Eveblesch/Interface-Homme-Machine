#include "Defaite_on.h"
#include "mainwindow.h"
#include "ui_defaite_on.h"
#include "Plateau_on.h"


Defaite_on::Defaite_on(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Defaite_on)
{
    ui->setupUi(this);
}

Defaite_on::~Defaite_on()
{
    delete ui;

}

void Defaite_on::on_rejouer_bouton_pressed()
{
    Plateau* mv = dynamic_cast<Plateau*>(this->parent());
    if (mv!= nullptr)
    {
       mv->reafficherContenu();
    }

}

