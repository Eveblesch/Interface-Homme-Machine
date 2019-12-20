/********************************************************************************
** Form generated from reading UI file 'profil.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFIL_H
#define UI_PROFIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profil
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_retour;
    QGridLayout *gridLayout_infos;

    void setupUi(QWidget *Profil)
    {
        if (Profil->objectName().isEmpty())
            Profil->setObjectName(QString::fromUtf8("Profil"));
        Profil->resize(1280, 739);
        gridLayout_2 = new QGridLayout(Profil);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_retour = new QPushButton(Profil);
        pushButton_retour->setObjectName(QString::fromUtf8("pushButton_retour"));

        verticalLayout->addWidget(pushButton_retour);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayout_infos = new QGridLayout();
        gridLayout_infos->setObjectName(QString::fromUtf8("gridLayout_infos"));

        gridLayout_2->addLayout(gridLayout_infos, 1, 0, 1, 1);


        retranslateUi(Profil);

        QMetaObject::connectSlotsByName(Profil);
    } // setupUi

    void retranslateUi(QWidget *Profil)
    {
        Profil->setWindowTitle(QApplication::translate("Profil", "Form", nullptr));
        pushButton_retour->setText(QApplication::translate("Profil", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profil: public Ui_Profil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFIL_H
