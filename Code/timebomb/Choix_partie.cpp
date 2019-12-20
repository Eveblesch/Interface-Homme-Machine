#include "Choix_partie.h"
#include "ui_choix_partie.h"
#include "mainwindow.h"
#include "Creation_partie_on.h"

Choix_partie::Choix_partie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Choix_partie)
{
    ui->setupUi(this);

    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        //connect(&mv->c,SIGNAL(gotAuthRoom(int)),this,[=](){QStringemit prepRoom()});

        QStringList p = mv->c.packet;
        QString full = mv->c.bufferIn;
        int nbsalons = p[1].toInt();
        QList<QPushButton*> salons_buttons_list;

        salons = Baptiste::baptiste_toLobby(full);
        qDebug() << "[client] " << full;
        connect(&mv->c,&Client::gotAuthRoom,this,&Choix_partie::fwdGotAuthRoom);
        connect(this,&Choix_partie::gotAuthRoom,this,&Choix_partie::enterRoom);
        connect(&mv->c,&Client::refreshlobby,this,&Choix_partie::hRefreshRooms);
        if (nbsalons == 0) {
            QLabel* norooms = new QLabel;
            norooms->setText("Aucun salon disponible actuellement");
            ui->verticalLayout->addWidget(norooms);
        } else {

            for (int i = 0; i < nbsalons; i++) {
                if (salons[i].visibility) {
                    salons_buttons_list.append(new QPushButton);
                    salons_buttons_list[i]->setText(salons[i].name);
                    ui->verticalLayout->addWidget(salons_buttons_list[i]);
                    QStringList salonAttribs = p[i].split("#");
                    connect(salons_buttons_list[i],&QPushButton::pressed,mv,[=](){joinRoom(salons[i]);});
                    //définir un signal pour chaque signal, qui renvoie au displaylobby
                }
            }
        }
    }
}

Choix_partie::~Choix_partie()
{
    delete ui;
}

void Choix_partie::on_button_retour_pressed()
{
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        emit mv->c.quit();
        mv->display_contenu();
    }
}

void Choix_partie::on_button_creer_partie_pressed()
{
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        mv->display_creation_partie_on();
    }
}

void Choix_partie::joinRoom(struct salon s) {
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr){
        emit mv->c.joinRoom(s.id,s.name/*,s.passwd*/); //password pas implémenté

    }
}

void Choix_partie::enterRoom(QString name){
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr){
        mv->display_lobby(name);
    }
}

void Choix_partie::fwdGotAuthRoom(int n){
    emit gotAuthRoom(salons[n].name);
}

//void Choix_partie::on_bouton_salon_pressed()
//{
//    //std::cout << "print" << std::endl;
//    //this->setHidden(true);
//    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
//    if (mv!= nullptr){
//        mv->display_lobby();
//    }
//}

void Choix_partie::hRefreshRooms()
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
