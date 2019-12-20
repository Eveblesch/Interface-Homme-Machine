/********************************************************************************
** Form generated from reading UI file 'victoire_on.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VICTOIRE_ON_H
#define UI_VICTOIRE_ON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Victoire_on
{
public:
    QGridLayout *gridLayout_2;
    QWidget *victoire_widget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_pseudo;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *resultatpartie;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Victoire_on)
    {
        if (Victoire_on->objectName().isEmpty())
            Victoire_on->setObjectName(QString::fromUtf8("Victoire_on"));
        Victoire_on->resize(1920, 1080);
        gridLayout_2 = new QGridLayout(Victoire_on);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        victoire_widget = new QWidget(Victoire_on);
        victoire_widget->setObjectName(QString::fromUtf8("victoire_widget"));
        gridLayout = new QGridLayout(victoire_widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_pseudo = new QGridLayout();
        gridLayout_pseudo->setObjectName(QString::fromUtf8("gridLayout_pseudo"));

        gridLayout->addLayout(gridLayout_pseudo, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(837, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        resultatpartie = new QLabel(victoire_widget);
        resultatpartie->setObjectName(QString::fromUtf8("resultatpartie"));
        QFont font;
        font.setFamily(QString::fromUtf8("Merriweather Black"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        resultatpartie->setFont(font);

        gridLayout->addWidget(resultatpartie, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(837, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 395, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 394, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 2, 1, 1);


        gridLayout_2->addWidget(victoire_widget, 0, 0, 1, 1);


        retranslateUi(Victoire_on);

        QMetaObject::connectSlotsByName(Victoire_on);
    } // setupUi

    void retranslateUi(QWidget *Victoire_on)
    {
        Victoire_on->setWindowTitle(QApplication::translate("Victoire_on", "Form", nullptr));
        resultatpartie->setText(QApplication::translate("Victoire_on", "Les bleus ont gagn\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Victoire_on: public Ui_Victoire_on {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VICTOIRE_ON_H
