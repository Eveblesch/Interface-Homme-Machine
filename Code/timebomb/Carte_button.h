#ifndef CARTE_BUTTON_H
#define CARTE_BUTTON_H

#include "Jeu.h"

class Carte_button : public QPushButton
{
    Q_OBJECT

public:
    Carte_button(QWidget *parent, unsigned cardPosition);

    unsigned cardPosition() const;
    unsigned m_cardPosition;

private:
};

#endif // CARTE_BUTTON_H
