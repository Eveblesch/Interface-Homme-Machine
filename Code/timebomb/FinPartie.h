#ifndef FINPARTIE_H
#define FINPARTIE_H

#include <QWidget>
#include "Joueur.h"
namespace Ui {
class FinPartie;
}

class FinPartie : public QWidget {
    Q_OBJECT

public:
    explicit FinPartie(QWidget *parent = nullptr);
    ~FinPartie();
    void tableau_de_scores(unsigned int number, std::vector<Joueur> listeJoueur);

private slots:
    void on_bouton_rejouer_pressed();
    void on_bouton_quitter_pressed();

private:
    Ui::FinPartie *ui;

};

#endif // FINPARTIE_H
