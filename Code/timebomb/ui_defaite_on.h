/********************************************************************************
** Form generated from reading UI file 'defaite_on.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFAITE_ON_H
#define UI_DEFAITE_ON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Defaite_on
{
public:
    QGridLayout *gridLayout;
    QWidget *defaite_widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Defaite_on)
    {
        if (Defaite_on->objectName().isEmpty())
            Defaite_on->setObjectName(QString::fromUtf8("Defaite_on"));
        Defaite_on->resize(1920, 1080);
        gridLayout = new QGridLayout(Defaite_on);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        defaite_widget = new QWidget(Defaite_on);
        defaite_widget->setObjectName(QString::fromUtf8("defaite_widget"));
        gridLayout_2 = new QGridLayout(defaite_widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 455, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(810, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        label = new QLabel(defaite_widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Merriweather Black"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout_2->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(809, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 454, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);


        gridLayout->addWidget(defaite_widget, 0, 0, 1, 1);


        retranslateUi(Defaite_on);

        QMetaObject::connectSlotsByName(Defaite_on);
    } // setupUi

    void retranslateUi(QWidget *Defaite_on)
    {
        Defaite_on->setWindowTitle(QApplication::translate("Defaite_on", "Form", nullptr));
        label->setText(QApplication::translate("Defaite_on", "Les rouges ont gagn\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Defaite_on: public Ui_Defaite_on {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFAITE_ON_H
