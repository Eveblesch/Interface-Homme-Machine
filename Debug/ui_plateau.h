/********************************************************************************
** Form generated from reading UI file 'plateau.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLATEAU_H
#define UI_PLATEAU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Plateau
{
public:
    QGridLayout *gridLayout;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_jeu_milieu;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_joueurs;
    QPlainTextEdit *plainTextEdit;
    QGridLayout *gridLayout_info_joueur;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_info_manches;
    QGridLayout *gridLayout_cards;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Plateau)
    {
        if (Plateau->objectName().isEmpty())
            Plateau->setObjectName(QString::fromUtf8("Plateau"));
        Plateau->resize(1280, 750);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Plateau->sizePolicy().hasHeightForWidth());
        Plateau->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Plateau);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        centralWidget = new QWidget(Plateau);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        gridLayout_jeu_milieu = new QGridLayout();
        gridLayout_jeu_milieu->setObjectName(QString::fromUtf8("gridLayout_jeu_milieu"));

        gridLayout_2->addLayout(gridLayout_jeu_milieu, 3, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        gridLayout_joueurs = new QGridLayout();
        gridLayout_joueurs->setObjectName(QString::fromUtf8("gridLayout_joueurs"));

        gridLayout_2->addLayout(gridLayout_joueurs, 0, 1, 1, 3);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_2->addWidget(plainTextEdit, 2, 5, 4, 1);

        gridLayout_info_joueur = new QGridLayout();
        gridLayout_info_joueur->setObjectName(QString::fromUtf8("gridLayout_info_joueur"));

        gridLayout_2->addLayout(gridLayout_info_joueur, 5, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 6, 3, 1, 1);

        gridLayout_info_manches = new QGridLayout();
        gridLayout_info_manches->setObjectName(QString::fromUtf8("gridLayout_info_manches"));

        gridLayout_2->addLayout(gridLayout_info_manches, 0, 5, 1, 1);

        gridLayout_cards = new QGridLayout();
        gridLayout_cards->setObjectName(QString::fromUtf8("gridLayout_cards"));

        gridLayout_2->addLayout(gridLayout_cards, 5, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 1, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 5, 2, 1, 1);


        gridLayout->addWidget(centralWidget, 0, 3, 1, 1);


        retranslateUi(Plateau);

        QMetaObject::connectSlotsByName(Plateau);
    } // setupUi

    void retranslateUi(QWidget *Plateau)
    {
        Plateau->setWindowTitle(QApplication::translate("Plateau", "Form", nullptr));
        plainTextEdit->setPlainText(QString());
    } // retranslateUi

};

namespace Ui {
    class Plateau: public Ui_Plateau {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLATEAU_H
