/********************************************************************************
** Form generated from reading UI file 'finpartie_on.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINPARTIE_ON_H
#define UI_FINPARTIE_ON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FinPartie_on
{
public:
    QGridLayout *gridLayout_2;
    QWidget *fin_partie_widget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_finPartie;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *bouton_rejouer;
    QSpacerItem *verticalSpacer_3;
    QPushButton *bouton_quitter;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FinPartie_on)
    {
        if (FinPartie_on->objectName().isEmpty())
            FinPartie_on->setObjectName(QString::fromUtf8("FinPartie_on"));
        FinPartie_on->resize(1920, 1080);
        gridLayout_2 = new QGridLayout(FinPartie_on);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        fin_partie_widget = new QWidget(FinPartie_on);
        fin_partie_widget->setObjectName(QString::fromUtf8("fin_partie_widget"));
        gridLayout = new QGridLayout(fin_partie_widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_finPartie = new QGridLayout();
        gridLayout_finPartie->setObjectName(QString::fromUtf8("gridLayout_finPartie"));

        gridLayout->addLayout(gridLayout_finPartie, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(877, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(877, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 3, 2, 1, 1);

        bouton_rejouer = new QPushButton(fin_partie_widget);
        bouton_rejouer->setObjectName(QString::fromUtf8("bouton_rejouer"));
        QFont font;
        font.setPointSize(12);
        bouton_rejouer->setFont(font);
        bouton_rejouer->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(bouton_rejouer, 4, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 5, 2, 1, 1);

        bouton_quitter = new QPushButton(fin_partie_widget);
        bouton_quitter->setObjectName(QString::fromUtf8("bouton_quitter"));
        bouton_quitter->setFont(font);
        bouton_quitter->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(bouton_quitter, 6, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 604, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 2, 1, 1);


        gridLayout_2->addWidget(fin_partie_widget, 0, 0, 1, 1);


        retranslateUi(FinPartie_on);

        QMetaObject::connectSlotsByName(FinPartie_on);
    } // setupUi

    void retranslateUi(QWidget *FinPartie_on)
    {
        FinPartie_on->setWindowTitle(QApplication::translate("FinPartie_on", "Form", nullptr));
        bouton_rejouer->setText(QApplication::translate("FinPartie_on", "Rejouer", nullptr));
        bouton_quitter->setText(QApplication::translate("FinPartie_on", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinPartie_on: public Ui_FinPartie_on {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINPARTIE_ON_H
