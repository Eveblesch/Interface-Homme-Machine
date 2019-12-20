#include "Carte_button.h"
#include "mainwindow.h"


Carte_button::Carte_button(QWidget *parent, unsigned cardId) :
    QPushButton(parent),
    m_cardPosition(cardId)
{}

unsigned Carte_button::cardPosition() const
{
    return m_cardPosition;
}
