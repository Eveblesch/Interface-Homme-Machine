/********************************************************************************
** Form generated from reading UI file 'vue_cartes_on.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUE_CARTES_ON_H
#define UI_VUE_CARTES_ON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vue_cartes_on
{
public:
    QGridLayout *gridLayout;
    QWidget *vues_cartes_widget;
    QWidget *layoutWidget_2;
    QGridLayout *Layout_cartes;
    QWidget *layoutWidget_3;
    QGridLayout *Layout_joueurs;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QPushButton *validation;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *Layout_retour;
    QPushButton *retour;
    QGridLayout *gridLayout_retour;
    QGridLayout *gridLayout_ok;

    void setupUi(QWidget *Vue_cartes_on)
    {
        if (Vue_cartes_on->objectName().isEmpty())
            Vue_cartes_on->setObjectName(QString::fromUtf8("Vue_cartes_on"));
        Vue_cartes_on->resize(1920, 1080);
        gridLayout = new QGridLayout(Vue_cartes_on);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        vues_cartes_widget = new QWidget(Vue_cartes_on);
        vues_cartes_widget->setObjectName(QString::fromUtf8("vues_cartes_widget"));
        layoutWidget_2 = new QWidget(vues_cartes_widget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(1220, 80, 2, 2));
        Layout_cartes = new QGridLayout(layoutWidget_2);
        Layout_cartes->setObjectName(QString::fromUtf8("Layout_cartes"));
        Layout_cartes->setContentsMargins(0, 0, 0, 0);
        layoutWidget_3 = new QWidget(vues_cartes_widget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(1220, 80, 2, 2));
        Layout_joueurs = new QGridLayout(layoutWidget_3);
        Layout_joueurs->setObjectName(QString::fromUtf8("Layout_joueurs"));
        Layout_joueurs->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout(vues_cartes_widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(800, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        validation = new QPushButton(vues_cartes_widget);
        validation->setObjectName(QString::fromUtf8("validation"));

        gridLayout_2->addWidget(validation, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(800, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        Layout_retour = new QGridLayout();
        Layout_retour->setObjectName(QString::fromUtf8("Layout_retour"));
        retour = new QPushButton(vues_cartes_widget);
        retour->setObjectName(QString::fromUtf8("retour"));

        Layout_retour->addWidget(retour, 0, 0, 1, 1);

        gridLayout_retour = new QGridLayout();
        gridLayout_retour->setObjectName(QString::fromUtf8("gridLayout_retour"));

        Layout_retour->addLayout(gridLayout_retour, 1, 0, 1, 1);


        gridLayout_2->addLayout(Layout_retour, 0, 0, 1, 1);

        gridLayout_ok = new QGridLayout();
        gridLayout_ok->setObjectName(QString::fromUtf8("gridLayout_ok"));

        gridLayout_2->addLayout(gridLayout_ok, 0, 1, 1, 1);


        gridLayout->addWidget(vues_cartes_widget, 0, 0, 1, 1);


        retranslateUi(Vue_cartes_on);

        QMetaObject::connectSlotsByName(Vue_cartes_on);
    } // setupUi

    void retranslateUi(QWidget *Vue_cartes_on)
    {
        Vue_cartes_on->setWindowTitle(QApplication::translate("Vue_cartes_on", "Form", nullptr));
        validation->setText(QApplication::translate("Vue_cartes_on", "Ok", nullptr));
        retour->setText(QApplication::translate("Vue_cartes_on", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vue_cartes_on: public Ui_Vue_cartes_on {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUE_CARTES_ON_H
