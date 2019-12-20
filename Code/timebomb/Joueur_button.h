#include <QString>
#include <string>
#include <QPushButton>

#ifndef JOUEUR_BUTTON_H
#define JOUEUR_BUTTON_H


class Joueur_button : public QPushButton
{
    Q_OBJECT

public:
    Joueur_button(QWidget *parent, unsigned int joueurdId, QString nom);

    unsigned cardPosition() const;
    unsigned m_cardPosition;

    unsigned Joueur_position() const;
    QString Joueur_nom() const;

    unsigned int joueur_position;
    QString joueur_nom;

private:
};

#endif // JOUEUR_BUTTON_H
