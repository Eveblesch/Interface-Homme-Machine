#ifndef PROFIL_H
#define PROFIL_H
#include <QWidget>

namespace Ui {
class Profil;
}

class Profil : public QWidget {
    Q_OBJECT

public:
    explicit Profil(QWidget *parent = nullptr);
    ~Profil();
    void affichage(unsigned int equipe);
    void affichageHorsLigne(unsigned int equipe,unsigned int idJoueur);
    void affichageSolo(unsigned int equipe);


private:
    Ui::Profil *ui;

private slots:
    void on_pushButton_retour_pressed();
    void on_pushButton_retour_pressed2();

};

#endif // PROFIL_H
