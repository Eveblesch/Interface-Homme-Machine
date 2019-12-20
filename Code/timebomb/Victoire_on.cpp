#include "Victoire_on.h"
#include "mainwindow.h"
#include "ui_victoire_on.h"

Victoire_on::Victoire_on(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Victoire_on)
{
    ui->setupUi(this);
}

Victoire_on::~Victoire_on()
{
    delete ui;

}


