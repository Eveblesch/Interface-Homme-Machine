/********************************************************************************
** Form generated from reading UI file 'finpartie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINPARTIE_H
#define UI_FINPARTIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FinPartie
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QPushButton *bouton_rejouer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Quitter;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_finPartie;

    void setupUi(QWidget *FinPartie)
    {
        if (FinPartie->objectName().isEmpty())
            FinPartie->setObjectName(QString::fromUtf8("FinPartie"));
        FinPartie->resize(1280, 750);
        gridLayout_2 = new QGridLayout(FinPartie);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 0, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 6, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 9, 3, 1, 1);

        bouton_rejouer = new QPushButton(FinPartie);
        bouton_rejouer->setObjectName(QString::fromUtf8("bouton_rejouer"));

        gridLayout_2->addWidget(bouton_rejouer, 5, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 4, 1, 1);

        Quitter = new QPushButton(FinPartie);
        Quitter->setObjectName(QString::fromUtf8("Quitter"));

        gridLayout_2->addWidget(Quitter, 7, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 4, 3, 1, 1);

        gridLayout_finPartie = new QGridLayout();
        gridLayout_finPartie->setObjectName(QString::fromUtf8("gridLayout_finPartie"));

        gridLayout_2->addLayout(gridLayout_finPartie, 3, 3, 1, 1);


        retranslateUi(FinPartie);

        QMetaObject::connectSlotsByName(FinPartie);
    } // setupUi

    void retranslateUi(QWidget *FinPartie)
    {
        FinPartie->setWindowTitle(QApplication::translate("FinPartie", "Form", nullptr));
        bouton_rejouer->setText(QApplication::translate("FinPartie", "Rejouer", nullptr));
        Quitter->setText(QApplication::translate("FinPartie", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinPartie: public Ui_FinPartie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINPARTIE_H
