#include "Shuffle.h"
#include "mainwindow.h"
#include "Plateau.h"
#include "ui_shuffle.h"
#include <thread>
#include <chrono>
#include <QMovie>

Shuffle::Shuffle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Shuffle)
{
    ui->setupUi(this);

    QMovie *movie = new QMovie(":/icones/images/shuffle.gif");
    ui->Melangationnnnnnnnn->setMovie(movie);
    movie->start();
}

Shuffle::~Shuffle()
{
    delete ui;
}

void Shuffle::retourMainWindow()
{
    Plateau* mv = dynamic_cast<Plateau*>(this->parent());
    if (mv!= nullptr)
    {
       mv->reafficherContenu();
    }
}
