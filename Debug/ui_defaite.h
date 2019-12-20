/********************************************************************************
** Form generated from reading UI file 'defaite.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFAITE_H
#define UI_DEFAITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Defaite
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Defaite)
    {
        if (Defaite->objectName().isEmpty())
            Defaite->setObjectName(QString::fromUtf8("Defaite"));
        Defaite->resize(1280, 750);
        gridLayout = new QGridLayout(Defaite);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        label = new QLabel(Defaite);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);


        retranslateUi(Defaite);

        QMetaObject::connectSlotsByName(Defaite);
    } // setupUi

    void retranslateUi(QWidget *Defaite)
    {
        Defaite->setWindowTitle(QApplication::translate("Defaite", "Form", nullptr));
        label->setText(QApplication::translate("Defaite", "Perdu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Defaite: public Ui_Defaite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFAITE_H
