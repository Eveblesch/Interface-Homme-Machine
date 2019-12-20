#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSize>
#include <QWidget>
#include <QTimer>
#include <QLayout>
#include <QTextEdit>
#include <string>
#include <QPushButton>
#include <QLabel>
#include <QString>
#include <QThread>
#include <QSpinBox>
#include <QCheckBox>
#include <thread>
#include <chrono>
#include <QFile>
#include <QDebug>
#include <QList>
#include <QTranslator>
#include <QApplication>
#include <QLibraryInfo>
#include <QMovie>


#include "Carte.h"
#include "Joueur.h"
#include "Jeu.h"
#include "Carte_button.h"
#include "Joueur_button.h"
#include "Accueil.h"
#include "Defaite.h"
#include "Defaite_on.h"
#include "Shuffle.h"
#include "Victoire.h"
#include "Victoire_on.h"
#include "FinPartie.h"
#include "FinPartie_on.h"
#include "Profil.h"
#include "Options.h"
#include "Instructions.h"
#include "Choix_partie.h"
#include "Creation_partie.h"
#include "Plateau.h"
#include "Plateau_solo.h"
#include "Plateau_on.h"
#include "Pseudo.h"
#include "Lobby.h"
#include "Creation_partie_on.h"
#include "client.h"
#include "Vue_cartes_on.h"
#include "Vue_cartes_on.h"
#include "Creation_partie_solo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent =0,Client* c=0);
    ~MainWindow();

    void display_contenu();
    void display_creation_partie();
    void display_creation_partie_on();
    void display_creation_partie_solo();
    void display_choix_partie();
    void display_plateau(QStringList listePseudos);
    void display_plateau_on(QStringList listePseudos);
    void display_plateau_solo(QStringList listePseudos);
    void display_pseudo(unsigned int nbrjoueur);
    void display_options();
    void display_instructions();
    void display_defaite();
    void display_defaite_on();
    void display_shuffle();
    void display_victoire();
    void display_victoire_on();
    void display_finpartie();
    void display_finpartie_on();
    void display_profile();
    void close_app();
    void display_lobby(QString name);
    void trad(QString str);

    Client c;

private:
    Ui::MainWindow *ui;
    Accueil *accueil;
    Options *options;
    Instructions *instructions;
    Choix_partie *choix_partie;
    Creation_partie *creation_partie;
    Creation_partie_on* creation_partie_on;
    Creation_partie_solo* creation_partie_solo;
    Plateau * plateau;
    Plateau_solo * plateau_solo;
    Plateau_on * plateau_on;
    Pseudo * pseudo;
    Defaite * defaite;
    Defaite_on* defaite_on;
    Victoire * victoire;
    Victoire_on* victoire_on;
    Shuffle * shuffle;
    FinPartie * finpartie;
    FinPartie_on* finpartie_on;
    Profil * profil;
    Lobby * lobby;
    QTranslator langageTranslate;
};

#endif // MAINWINDOW_H
