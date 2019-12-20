/********************************************************************************
** Form generated from reading UI file 'creation_partie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATION_PARTIE_H
#define UI_CREATION_PARTIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Creation_partie
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *button_create;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QSpinBox *nbrJoueurs;
    QSpacerItem *verticalSpacer_2;
    QPushButton *button_retour;

    void setupUi(QWidget *Creation_partie)
    {
        if (Creation_partie->objectName().isEmpty())
            Creation_partie->setObjectName(QString::fromUtf8("Creation_partie"));
        Creation_partie->resize(1250, 750);
        Creation_partie->setAutoFillBackground(true);
        gridLayout = new QGridLayout(Creation_partie);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(Creation_partie);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 3, 1, 1, 1);

        label = new QLabel(Creation_partie);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        button_create = new QPushButton(Creation_partie);
        button_create->setObjectName(QString::fromUtf8("button_create"));
        button_create->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_create, 10, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        label_3 = new QLabel(Creation_partie);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_4 = new QLabel(Creation_partie);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 8, 1, 1, 1);

        checkBox_2 = new QCheckBox(Creation_partie);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 4, 1, 1, 1);

        lineEdit_2 = new QLineEdit(Creation_partie);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 9, 1, 1, 1);

        checkBox = new QCheckBox(Creation_partie);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 7, 1, 1, 1);

        label_2 = new QLabel(Creation_partie);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        nbrJoueurs = new QSpinBox(Creation_partie);
        nbrJoueurs->setObjectName(QString::fromUtf8("nbrJoueurs"));
        nbrJoueurs->setMinimum(4);
        nbrJoueurs->setMaximum(8);

        gridLayout->addWidget(nbrJoueurs, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 11, 1, 1, 1);

        button_retour = new QPushButton(Creation_partie);
        button_retour->setObjectName(QString::fromUtf8("button_retour"));
        button_retour->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(button_retour, 0, 0, 1, 1);


        retranslateUi(Creation_partie);

        QMetaObject::connectSlotsByName(Creation_partie);
    } // setupUi

    void retranslateUi(QWidget *Creation_partie)
    {
        Creation_partie->setWindowTitle(QApplication::translate("Creation_partie", "Form", nullptr));
        lineEdit->setText(QApplication::translate("Creation_partie", "Ecrire ici ...", nullptr));
        label->setText(QApplication::translate("Creation_partie", "Cr\303\251er un salon", nullptr));
        button_create->setText(QApplication::translate("Creation_partie", "Cr\303\251er", nullptr));
        label_3->setText(QApplication::translate("Creation_partie", "Nom du salon", nullptr));
        label_4->setText(QApplication::translate("Creation_partie", "Mot de passe", nullptr));
        checkBox_2->setText(QApplication::translate("Creation_partie", "Nombre de joueurs max", nullptr));
        lineEdit_2->setText(QApplication::translate("Creation_partie", "Ecrire ici ...", nullptr));
        checkBox->setText(QApplication::translate("Creation_partie", "Partie priv\303\251", nullptr));
        label_2->setText(QApplication::translate("Creation_partie", "Nombre de joueurs", nullptr));
        button_retour->setText(QApplication::translate("Creation_partie", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Creation_partie: public Ui_Creation_partie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATION_PARTIE_H
