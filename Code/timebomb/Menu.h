#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "options.h"
#include "creation_partie.h"
#include "instructions.h"
#include "choix_partie.h"
#include "Carte.h"
#include "Joueur.h"
#include "Jeu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void display_contenu();

    void display_creation_partie();

    void display_choix_partie();

private slots:
    void on_bouton_quitter_clicked();

    void on_pushButton_options_pressed();

    void on_button_instructions_pressed();

    void on_button_jouer_pressed();



private:
    Ui::MainWindow *ui;
    Options *options;
    Instructions *instructions;
    Choix_partie *choix_partie;
    Creation_partie *creation_partie;
};

#endif // MAINWINDOW_H
