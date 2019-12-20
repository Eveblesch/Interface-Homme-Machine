#include "Creation_partie_on.h"
#include "ui_creation_partie_on.h"
#include "mainwindow.h"

Creation_partie_on::Creation_partie_on(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Creation_partie_on)
{
    ui->setupUi(this);

}

Creation_partie_on::~Creation_partie_on()
{
    delete ui;
}


void Creation_partie_on::on_button_retour_pressed()
{

    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        emit mv->c.asklobby();
        QEventLoop* loop = new QEventLoop;
        connect(&mv->c,SIGNAL(gotLobby()),loop,SLOT(quit()));
        loop->exec();
        mv->display_choix_partie();
    }
}

void Creation_partie_on::on_button_create_pressed()
{
    //this->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if ((mv!= nullptr)&&(!ui->lineEdit->text().isEmpty())){
        //qDebug() << ui->lineEdit->text().isEmpty() << ui->lineEdit_2->text().isEmpty();
        emit mv->c.createRoom(ui->nbrJoueurs->value(),ui->checkBox_2->isChecked(),(ui->lineEdit_2->text().isEmpty() ? "" : ui->lineEdit_2->text()),(ui->lineEdit->text().isEmpty() ? "" : ui->lineEdit->text()));
        emit mv->c.asklobby();
        QEventLoop* loop = new QEventLoop;
        connect(&mv->c,SIGNAL(gotLobby()),loop,SLOT(quit()));
        loop->exec();
        mv->display_choix_partie();
        //mv->display_lobby(ui->nbrJoueurs->value());
        //peut-être petite attente ?
    }
}

