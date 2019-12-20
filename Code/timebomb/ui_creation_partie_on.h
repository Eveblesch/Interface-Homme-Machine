/********************************************************************************
** Form generated from reading UI file 'creation_partie_on.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATION_PARTIE_ON_H
#define UI_CREATION_PARTIE_ON_H

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

class Ui_Creation_partie_on
{
public:
    QGridLayout *gridLayout;
    QWidget *creation_salon_widget;
    QGridLayout *gridLayout_2;
    QPushButton *button_retour;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox_2;
    QLabel *label_2;
    QSpinBox *nbrJoueurs;
    QCheckBox *checkBox;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *button_create;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Creation_partie_on)
    {
        if (Creation_partie_on->objectName().isEmpty())
            Creation_partie_on->setObjectName(QString::fromUtf8("Creation_partie_on"));
        Creation_partie_on->resize(1920, 1080);
        Creation_partie_on->setContextMenuPolicy(Qt::NoContextMenu);
        Creation_partie_on->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Creation_partie_on);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        creation_salon_widget = new QWidget(Creation_partie_on);
        creation_salon_widget->setObjectName(QString::fromUtf8("creation_salon_widget"));
        gridLayout_2 = new QGridLayout(creation_salon_widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        button_retour = new QPushButton(creation_salon_widget);
        button_retour->setObjectName(QString::fromUtf8("button_retour"));
        QFont font;
        font.setFamily(QString::fromUtf8("Merriweather"));
        button_retour->setFont(font);
        button_retour->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_retour, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 310, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        label = new QLabel(creation_salon_widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Merriweather Black"));
        font1.setPointSize(24);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 2, 1, 1, 1);

        label_3 = new QLabel(creation_salon_widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Merriweather"));
        font2.setPointSize(12);
        label_3->setFont(font2);

        gridLayout_2->addWidget(label_3, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(618, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 4, 0, 1, 1);

        lineEdit = new QLineEdit(creation_salon_widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);

        gridLayout_2->addWidget(lineEdit, 4, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(618, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        checkBox_2 = new QCheckBox(creation_salon_widget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setFont(font2);

        gridLayout_2->addWidget(checkBox_2, 5, 1, 1, 1);

        label_2 = new QLabel(creation_salon_widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        gridLayout_2->addWidget(label_2, 6, 1, 1, 2);

        nbrJoueurs = new QSpinBox(creation_salon_widget);
        nbrJoueurs->setObjectName(QString::fromUtf8("nbrJoueurs"));
        nbrJoueurs->setFont(font);
        nbrJoueurs->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        nbrJoueurs->setMinimum(4);
        nbrJoueurs->setMaximum(8);

        gridLayout_2->addWidget(nbrJoueurs, 7, 1, 1, 1);

        checkBox = new QCheckBox(creation_salon_widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setFont(font2);

        gridLayout_2->addWidget(checkBox, 8, 1, 1, 1);

        label_4 = new QLabel(creation_salon_widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        gridLayout_2->addWidget(label_4, 9, 1, 1, 1);

        lineEdit_2 = new QLineEdit(creation_salon_widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font);

        gridLayout_2->addWidget(lineEdit_2, 10, 1, 1, 1);

        button_create = new QPushButton(creation_salon_widget);
        button_create->setObjectName(QString::fromUtf8("button_create"));
        button_create->setFont(font2);
        button_create->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_create, 11, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 309, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 12, 1, 1, 1);


        gridLayout->addWidget(creation_salon_widget, 0, 0, 1, 1);


        retranslateUi(Creation_partie_on);

        QMetaObject::connectSlotsByName(Creation_partie_on);
    } // setupUi

    void retranslateUi(QWidget *Creation_partie_on)
    {
        Creation_partie_on->setWindowTitle(QApplication::translate("Creation_partie_on", "Form", nullptr));
        button_retour->setText(QApplication::translate("Creation_partie_on", "Retour", nullptr));
        label->setText(QApplication::translate("Creation_partie_on", "Cr\303\251er un salon", nullptr));
        label_3->setText(QApplication::translate("Creation_partie_on", "Nom du salon", nullptr));
        lineEdit->setText(QString());
        checkBox_2->setText(QApplication::translate("Creation_partie_on", "Nombre de joueurs max", nullptr));
        label_2->setText(QApplication::translate("Creation_partie_on", "Nombre de joueurs", nullptr));
        checkBox->setText(QApplication::translate("Creation_partie_on", "Partie priv\303\251", nullptr));
        label_4->setText(QApplication::translate("Creation_partie_on", "Mot de passe", nullptr));
        lineEdit_2->setText(QString());
        button_create->setText(QApplication::translate("Creation_partie_on", "Cr\303\251er", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Creation_partie_on: public Ui_Creation_partie_on {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATION_PARTIE_ON_H
