/********************************************************************************
** Form generated from reading UI file 'choix_partie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOIX_PARTIE_H
#define UI_CHOIX_PARTIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Choix_partie
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *bouton_salon;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_3;
    QPushButton *button_creer_partie;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *button_retour;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Choix_partie)
    {
        if (Choix_partie->objectName().isEmpty())
            Choix_partie->setObjectName(QString::fromUtf8("Choix_partie"));
        Choix_partie->setWindowModality(Qt::ApplicationModal);
        Choix_partie->resize(1280, 750);
        Choix_partie->setContextMenuPolicy(Qt::NoContextMenu);
        Choix_partie->setAutoFillBackground(true);
        gridLayout = new QGridLayout(Choix_partie);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bouton_salon = new QPushButton(Choix_partie);
        bouton_salon->setObjectName(QString::fromUtf8("bouton_salon"));

        verticalLayout->addWidget(bouton_salon);

        pushButton_4 = new QPushButton(Choix_partie);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        button_creer_partie = new QPushButton(Choix_partie);
        button_creer_partie->setObjectName(QString::fromUtf8("button_creer_partie"));

        verticalLayout->addWidget(button_creer_partie);


        gridLayout->addLayout(verticalLayout, 4, 1, 1, 1);

        label = new QLabel(Choix_partie);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 1);

        button_retour = new QPushButton(Choix_partie);
        button_retour->setObjectName(QString::fromUtf8("button_retour"));

        gridLayout->addWidget(button_retour, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);


        retranslateUi(Choix_partie);

        QMetaObject::connectSlotsByName(Choix_partie);
    } // setupUi

    void retranslateUi(QWidget *Choix_partie)
    {
        Choix_partie->setWindowTitle(QApplication::translate("Choix_partie", "Form", nullptr));
        bouton_salon->setText(QApplication::translate("Choix_partie", "Salon 1", nullptr));
        pushButton_4->setText(QApplication::translate("Choix_partie", "PushButton", nullptr));
        button_creer_partie->setText(QApplication::translate("Choix_partie", "cr\303\251er une partie", nullptr));
        label->setText(QApplication::translate("Choix_partie", "Choix de la partie", nullptr));
        button_retour->setText(QApplication::translate("Choix_partie", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Choix_partie: public Ui_Choix_partie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOIX_PARTIE_H
