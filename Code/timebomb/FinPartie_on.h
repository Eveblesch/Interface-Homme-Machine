#ifndef FINPARTIE_ON_H
#define FINPARTIE_ON_H

#include <QWidget>
#include "Joueur.h"
namespace Ui {
class FinPartie_on;
}

class FinPartie_on : public QWidget {
    Q_OBJECT

public:
    explicit FinPartie_on(QWidget *parent = nullptr);
    ~FinPartie_on();
    void tableau_de_scores(QStringList stats);

private slots:
    void on_bouton_rejouer_pressed();
    void on_bouton_quitter_pressed();

private:
    Ui::FinPartie_on *ui;

};

#endif // FINPARTIE_H
