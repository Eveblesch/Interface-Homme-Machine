/********************************************************************************
** Form generated from reading UI file 'victoire.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VICTOIRE_H
#define UI_VICTOIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Victoire
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_pseudo;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Victoire)
    {
        if (Victoire->objectName().isEmpty())
            Victoire->setObjectName(QString::fromUtf8("Victoire"));
        Victoire->resize(1280, 750);
        gridLayout_2 = new QGridLayout(Victoire);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        label = new QLabel(Victoire);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout_pseudo = new QGridLayout();
        gridLayout_pseudo->setObjectName(QString::fromUtf8("gridLayout_pseudo"));

        gridLayout_2->addLayout(gridLayout_pseudo, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 2, 1, 1);


        retranslateUi(Victoire);

        QMetaObject::connectSlotsByName(Victoire);
    } // setupUi

    void retranslateUi(QWidget *Victoire)
    {
        Victoire->setWindowTitle(QApplication::translate("Victoire", "Form", nullptr));
        label->setText(QApplication::translate("Victoire", "Victoire", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Victoire: public Ui_Victoire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VICTOIRE_H
