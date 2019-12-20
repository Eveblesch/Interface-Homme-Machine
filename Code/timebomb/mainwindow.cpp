#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent,Client* c) :
    QMainWindow(parent),
    c(c),
    ui(new Ui::MainWindow),
    options(nullptr),
    instructions(nullptr),
    choix_partie(nullptr),
    creation_partie(nullptr),
    creation_partie_on(nullptr),
    creation_partie_solo(nullptr),
    plateau(nullptr),
    plateau_on(nullptr)
{

   MainWindow::showMaximized();

    ui->setupUi(this);
    QWidget::setWindowTitle("Time Bomb");
    QWidget::setWindowIcon(QIcon(":/icones/images/clock.png"));

    accueil = new Accueil(this);
    setCentralWidget(accueil);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::trad(QString str)
{
    std::cout << QString("traduction_").toStdString() + str.toStdString()+QString(".qm").toStdString() << std::endl;
    langageTranslate.load(QString("traduction_") + str+QString(".qm"));
    qApp->installTranslator(&langageTranslate);
}

void MainWindow::display_contenu(){
    accueil = new Accueil(this);
    setCentralWidget(accueil);
}

void MainWindow::display_creation_partie(){
    creation_partie = new Creation_partie(this);
    setCentralWidget(creation_partie);
}

void MainWindow::display_creation_partie_on(){
    creation_partie_on = new Creation_partie_on(this);
    setCentralWidget(creation_partie_on);
}

void MainWindow::display_creation_partie_solo(){
    creation_partie_solo = new Creation_partie_solo(this);
    setCentralWidget(creation_partie_solo);
}

void MainWindow::display_pseudo(unsigned int nbrjoueur){
    pseudo = new Pseudo(this);
    plateau = new Plateau(this);
    setCentralWidget(pseudo);
    pseudo->affichageZoneTexte(nbrjoueur);
}

void MainWindow::display_plateau(QStringList listePseudos){
    plateau = new Plateau(this);
    setCentralWidget(plateau);
    plateau->on_bouton_play_pressed(listePseudos);
}

void MainWindow::display_plateau_on(QStringList listePseudos){
    plateau_on = new Plateau_on(this);
    setCentralWidget(plateau_on);
}

void MainWindow::display_plateau_solo(QStringList listePseudos){
    plateau_solo = new Plateau_solo(this);
    setCentralWidget(plateau_solo);
    plateau_solo->on_bouton_play_pressed(listePseudos);
}


void MainWindow::display_choix_partie(){
    choix_partie = new Choix_partie(this);
    setCentralWidget(choix_partie);
}

void MainWindow::display_options(){
    options = new Options(this);
    setCentralWidget(options);
}

void MainWindow::display_instructions(){
    instructions = new Instructions(this);
    setCentralWidget(instructions);
}

void MainWindow::display_defaite(){
    defaite = new Defaite(this);
    setCentralWidget(defaite);
}

void MainWindow::display_shuffle(){
    shuffle = new Shuffle(this);
    setCentralWidget(shuffle);
}

void MainWindow::display_victoire(){
    victoire = new Victoire(this);
    setCentralWidget(victoire);
}

void MainWindow::display_finpartie(){
    finpartie = new FinPartie(this);
    setCentralWidget(finpartie);
}

void MainWindow::display_profile(){
    profil = new Profil(this);
    setCentralWidget(profil);
}

void MainWindow::close_app(){
    close();
}

void MainWindow::display_lobby(QString name)
{
    lobby = new Lobby(this,name);
    setCentralWidget(lobby);
}

