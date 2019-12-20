#ifndef Plateau_solo_H
#define Plateau_solo_H

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


#include "Carte.h"
#include "Joueur.h"
#include "Jeu.h"
#include "Carte_button.h"
#include "Joueur_button.h"
#include "Defaite.h"
#include "Shuffle.h"
#include "Victoire.h"
#include "FinPartie.h"
#include "Profil.h"
#include "Options.h"
#include "Vue_cartes.h"


namespace Ui {
class Plateau_solo;
}

class Plateau_solo : public QWidget {
    Q_OBJECT

public:

    explicit Plateau_solo(QWidget *parent = nullptr);
    ~Plateau_solo();
    static QSize s_cardFixedSize;
    Ui::Plateau_solo *ui;
    Jeu m_jeu;
    std::vector<Joueur_button*> m_joueur_buttons;
    std::vector<Carte_button*> m_cartes_milieu;
    Profil * profil;



private:

    std::vector<Carte> m_carte;
    std::vector<Carte_button*> m_carte_buttons;
    Carte_button* m_selection_carte[1];

    Defaite * defaite;
    Victoire * victoire;
    Shuffle * shuffle;
    FinPartie * finPartie;
    Options * options;
    QPushButton *bouton_voirCarte;
    QPushButton *bouton_quitter;



public:
    Vue_cartes * vue_cartes;

public slots:
    void on_bouton_play_pressed(QStringList listePseudos);
    void reafficherContenu();
    void clearLayout(QLayout *layout);
    void recommencer();



private slots:
    void creation_joueurs();
    void on_joueur_button_pushed();  
    void AuTourDe(unsigned int a);
    void on_carte_button_milieu_pushed();
    void infos_jeu();
    void evolution_tour();
    void melanger();
    void resultats();
    void fin_partie(int numero);
    void initFJ(unsigned int numero);
    void quitterPartie();
    void retour_accueil();
    void afficherCarteCoupee(unsigned idCarte);
    void affichageCarteJoueurUnique();
    void on_profilJoueur_pressed();
};


#endif
