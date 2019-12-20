#ifndef VUE_CARTES_ON_H
#define VUE_CARTES_ON_H
#include <QWidget>
#include <QPushButton>

namespace Ui {
class Vue_cartes_on;
}

class Vue_cartes_on : public QWidget {
    Q_OBJECT

public:
    explicit Vue_cartes_on(QWidget *parent = nullptr);
    ~Vue_cartes_on();

private:
    Ui::Vue_cartes_on *ui;
    QPushButton *bouton_retour;
    QPushButton *bouton_ok;



public slots :
    void affichage_pseudo_joueurs();

private slots:
    void retour();
    void affichage_cartes_joueur();
    void on_validation_pressed();
    void affichage_profil();
    void clear_cartes();


};


#endif // VUE_CARTES_H
