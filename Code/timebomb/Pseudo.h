#ifndef PSEUDO_H
#define PSEUDO_H
#include <QWidget>
#include <QList>
#include <QTextEdit>
#include <QLineEdit>
namespace Ui {
class Pseudo;
}

class Pseudo : public QWidget {
    Q_OBJECT

public:
    explicit Pseudo(QWidget *parent = nullptr);
    ~Pseudo();

private:
    Ui::Pseudo *ui;
    unsigned int nbrjoueur;
    QList<QLineEdit*> liste;

public slots:
    void affichageZoneTexte(unsigned int nbrjoueur);

private slots:
    void on_button_retour_pressed();
    void on_button_create_pressed();
    void clearWidget();
};

#endif // PSEUDO_H

