#include "Victoire.h"
#include "mainwindow.h"
#include "ui_victoire.h"

Victoire::Victoire(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Victoire)
{
    ui->setupUi(this);

}

Victoire::~Victoire()
{
    delete ui;

}


