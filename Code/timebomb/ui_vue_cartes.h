/********************************************************************************
** Form generated from reading UI file 'vue_cartes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUE_CARTES_H
#define UI_VUE_CARTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vue_cartes
{
public:
    QWidget *vues_cartes_widget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_retour;
    QWidget *gridLayoutWidget_3;
    QGridLayout *Layout_cartes;
    QWidget *gridLayoutWidget_2;
    QGridLayout *Layout_joueurs;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_ok;

    void setupUi(QWidget *Vue_cartes)
    {
        if (Vue_cartes->objectName().isEmpty())
            Vue_cartes->setObjectName(QString::fromUtf8("Vue_cartes"));
        Vue_cartes->resize(1920, 1080);
        vues_cartes_widget = new QWidget(Vue_cartes);
        vues_cartes_widget->setObjectName(QString::fromUtf8("vues_cartes_widget"));
        vues_cartes_widget->setGeometry(QRect(0, -10, 1941, 1141));
        gridLayoutWidget = new QWidget(vues_cartes_widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 371, 80));
        gridLayout_retour = new QGridLayout(gridLayoutWidget);
        gridLayout_retour->setObjectName(QString::fromUtf8("gridLayout_retour"));
        gridLayout_retour->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_3 = new QWidget(vues_cartes_widget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(380, 500, 1061, 341));
        Layout_cartes = new QGridLayout(gridLayoutWidget_3);
        Layout_cartes->setObjectName(QString::fromUtf8("Layout_cartes"));
        Layout_cartes->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_2 = new QWidget(Vue_cartes);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(630, 80, 561, 391));
        Layout_joueurs = new QGridLayout(gridLayoutWidget_2);
        Layout_joueurs->setObjectName(QString::fromUtf8("Layout_joueurs"));
        Layout_joueurs->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_4 = new QWidget(Vue_cartes);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(800, 890, 221, 80));
        gridLayout_ok = new QGridLayout(gridLayoutWidget_4);
        gridLayout_ok->setObjectName(QString::fromUtf8("gridLayout_ok"));
        gridLayout_ok->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Vue_cartes);

        QMetaObject::connectSlotsByName(Vue_cartes);
    } // setupUi

    void retranslateUi(QWidget *Vue_cartes)
    {
        Vue_cartes->setWindowTitle(QApplication::translate("Vue_cartes", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vue_cartes: public Ui_Vue_cartes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUE_CARTES_H
