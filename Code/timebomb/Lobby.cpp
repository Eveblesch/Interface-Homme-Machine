#include "Lobby.h"
#include "mainwindow.h"
#include "ui_lobby.h"
#include "baptiste.h"$

Lobby::Lobby(QWidget *parent,QString nom) :
    QWidget(parent),
    ui(new Ui::Lobby)
{
    ui->setupUi(this);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr) {
        connect(&mv->c,SIGNAL(newPlayerInRoom(QString,bool)),this,SLOT(refreshOnlineClient(QString,bool)));
        connect(&mv->c,SIGNAL(allPlayersInRoom(QStringList)),this,SLOT(initOnlineClient(QStringList)));
        connect(&mv->c,SIGNAL(gotChat(QStringList)),this,SLOT(upChat(QStringList)));
        connect(&mv->c,SIGNAL(gotFirstStart()),this,SLOT(start()));
        connect(&mv->c,SIGNAL(gotCanStart()),this,SLOT(canStart()));
        ui->label_salon->setText(nom);
        chatLabels.append(ui->message0);
        chatLabels.append(ui->message1);
        chatLabels.append(ui->message2);
        chatLabels.append(ui->message3);
        chatLabels.append(ui->message4);
        chatLabels.append(ui->message5);
        chatLabels.append(ui->message6);
        chatLabels.append(ui->message7);
        chatLabels.append(ui->message8);
        chatLabels.append(ui->message9);
        chatLabels.append(ui->message10);
        lEmptyMsgLab = 10;
    }
    notenoughppltostart = new QLabel;
    notenoughppltostart->setText("Pas assez de joueurs pour lancer le jeu");
    ui->canstartlayout->addWidget(notenoughppltostart);
}

Lobby::~Lobby()
{
    delete ui;
}

void Lobby::on_bouton_retour_pressed()
{
    this->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        emit mv->c.quitRoom();
        emit mv->c.asklobby();
        QEventLoop* loop = new QEventLoop;
        connect(&mv->c,SIGNAL(gotLobby()),loop,SLOT(quit()));
        loop->exec();
        mv->display_choix_partie();
    }
}

void Lobby::refreshOnlineClient(QString pseudo,bool inOrOut) {
    qDebug() << "[client] refreshing for " << pseudo << "who got " << (inOrOut ? "in":"out") << endl;
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr){
        if (inOrOut) {
            int n = players.size();
            players.append(new QLabel);
            playersPseudos.append(pseudo);
            players[n]->setText(pseudo);
            ui->playerList->addWidget(players[n]);
            qDebug() << playersPseudos[n] << endl;
        } else {
            int n = playersPseudos.indexOf(pseudo);
            playersPseudos.removeAt(n);
            ui->playerList->removeWidget(players[n]);
            delete players[n];
            players.removeAt(n);
        }
    }
}

void Lobby::initOnlineClient(QStringList s) {
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr){
        int n;
        for (int i = 0; i < s[1].toInt(); i++){
            n = players.size();
            players.append(new QLabel);
            playersPseudos.append(s[2+i]);
            players[n]->setText(s[2+i]);
            ui->playerList->addWidget(players[n]);
        }

    }
}

void Lobby::upChat(QStringList msg) {
    QString chatTmp1, chatTmp2;
    const QString nvmsg = msg[1]+" # "+msg[2]+" # "+msg[3];
    for (int i = 10; i >= static_cast<int>(lEmptyMsgLab); i--) {
        chatTmp1 = chatLabels[i]->text();
        if (i == 10)
            chatLabels[i]->setText(nvmsg);
        else
            chatLabels[i]->setText(chatTmp2);
        chatTmp2 = QString(chatTmp1);
    }
    if (lEmptyMsgLab != 0)
        lEmptyMsgLab--;
}

void Lobby::on_button_envoi_pressed()
{
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr) {
        qDebug() << ui->envoi_msg->toPlainText() << endl;
        emit mv->c.chat(ui->envoi_msg->toPlainText());
    }
    ui->envoi_msg->clear();
}

void Lobby::start() {
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr) {
        qDebug() << playersPseudos << endl;
        mv->display_plateau_on(playersPseudos);
    }
}

void Lobby::canStart() {
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr) {
        QPushButton* ownerstart = new QPushButton;
        ownerstart->setText("Lancer le jeu");
        connect(ownerstart,SIGNAL(pressed()),this,SLOT(launchGame()));
        ui->canstartlayout->removeWidget(notenoughppltostart);
        ui->canstartlayout->addWidget(ownerstart);
    }
}

void Lobby::launchGame() {
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr) {
        emit mv->c.startGame();
    }
}
