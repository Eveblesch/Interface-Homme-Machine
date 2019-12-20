#ifndef Plateau_on_H
#define Plateau_on_H

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
#include <QBitmap>


#include "Carte.h"
#include "Carte_button.h"
#include "Joueur_button.h"
#include "Defaite_on.h"
#include "Shuffle.h"
#include "Victoire_on.h"
#include "FinPartie_on.h"
#include "Profil.h"
#include "Options.h"
#include "Vue_cartes_on.h"


namespace Ui {
class Plateau_on;
}

class Plateau_on : public QWidget {
    Q_OBJECT

public:

    explicit Plateau_on(QWidget *parent = nullptr);
    ~Plateau_on();
    static QSize s_cardFixedSize;
    Ui::Plateau_on *ui;
    std::vector<Joueur_button*> m_joueur_buttons;
    std::vector<Carte_button*> m_cartes_milieu;
    std::vector<std::vector<Carte>> cartesParJoueur;
    std::vector<QString> allroles;

    Profil * profil;


    QList<QLabel*> chatLabels;
    unsigned int lEmptyMsgLab;

    unsigned int nbjoueurs;
    QString equipe;
    QString perso;
    QStringList pseudos;
    QStringList endgamestats;
    unsigned int taillePaquetComplet;
    unsigned int nbbleu;
    unsigned int nbrouge;
    unsigned int nbdesam;
    unsigned int nbmanche;
    unsigned int nbtour;
    unsigned int indexjoueur;
    unsigned int nbcartes;
    unsigned int joueurCourant;
    QList<unsigned int> nbcartes_joueurs;

    unsigned int joueurCut;
private:

    std::vector<Carte> m_carte;
    std::vector<Carte> paquet_principal;
    std::vector<Carte_button*> m_carte_buttons;

    Carte_button* m_selection_carte[1];

    Defaite_on * defaite;
    Victoire_on * victoire;
    Shuffle * shuffle;
    FinPartie_on * finPartie;
    Options * options;
    QTimer * timer;
    Vue_cartes_on * vue_cartes;

    QList<QList<QLabel*>> listannonces;
    QList<QHBoxLayout*> annonceslayouts;

signals:
    void timeoutLocal();
    void readyToGo();

public slots:
    void on_bouton_play_pressed();
    void reafficherContenu();
    void clearLayout(QLayout *layout);
    void on_VoirCarte_pressed();
    void recommencer();
    void on_button_envoi_pressed();



private slots:

    void creation_joueurs();
    void on_joueur_button_pushed();
    void AuTourDe(QStringList l);
    void on_carte_button_milieu_pushed();
    void info_joueur();
    void infos_jeu();
    void melanger();
    void resultats();
    void fin_partie(bool winOrNot);
    void on_carte_info_pushed();
    void initFJ(unsigned int numero);
    void compter();

    void upChat(QStringList msg);
    void turnTimeout();
    void setupDeck(QStringList l);
    void refreshAnnonces();
    void refreshInfoRight();
    void nothandledyet();
    void fillEndgameStats(QStringList stats);
    void fillfulldeck(QStringList s);
    void fillallroles(QStringList s);
};


#endif
