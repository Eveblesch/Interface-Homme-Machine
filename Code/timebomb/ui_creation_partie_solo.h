/********************************************************************************
** Form generated from reading UI file 'creation_partie_solo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATION_PARTIE_SOLO_H
#define UI_CREATION_PARTIE_SOLO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Creation_partie_solo
{
public:
    QGridLayout *gridLayout;
    QWidget *creation_salon_widget;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QPushButton *button_retour;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *nbrJoueurs;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *button_create;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QLineEdit *pseudoJoueur;

    void setupUi(QWidget *Creation_partie_solo)
    {
        if (Creation_partie_solo->objectName().isEmpty())
            Creation_partie_solo->setObjectName(QString::fromUtf8("Creation_partie_solo"));
        Creation_partie_solo->resize(1920, 1080);
        Creation_partie_solo->setContextMenuPolicy(Qt::NoContextMenu);
        Creation_partie_solo->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Creation_partie_solo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        creation_salon_widget = new QWidget(Creation_partie_solo);
        creation_salon_widget->setObjectName(QString::fromUtf8("creation_salon_widget"));
        gridLayout_2 = new QGridLayout(creation_salon_widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(creation_salon_widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 7, 1, 1, 1);

        label = new QLabel(creation_salon_widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Merriweather Black"));
        font1.setPointSize(24);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 2, 1, 1, 1);

        button_retour = new QPushButton(creation_salon_widget);
        button_retour->setObjectName(QString::fromUtf8("button_retour"));
        button_retour->setMinimumSize(QSize(350, 0));
        button_retour->setMaximumSize(QSize(350, 70));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Merriweather"));
        button_retour->setFont(font2);
        button_retour->setCursor(QCursor(Qt::PointingHandCursor));
        button_retour->setAutoRepeatDelay(311);

        gridLayout_2->addWidget(button_retour, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(618, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 7, 2, 1, 1);

        nbrJoueurs = new QSpinBox(creation_salon_widget);
        nbrJoueurs->setObjectName(QString::fromUtf8("nbrJoueurs"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nbrJoueurs->sizePolicy().hasHeightForWidth());
        nbrJoueurs->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Merriweather"));
        font3.setPointSize(10);
        nbrJoueurs->setFont(font3);
        nbrJoueurs->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        nbrJoueurs->setKeyboardTracking(true);
        nbrJoueurs->setMinimum(3);
        nbrJoueurs->setMaximum(7);
        nbrJoueurs->setStepType(QAbstractSpinBox::DefaultStepType);
        nbrJoueurs->setValue(3);

        gridLayout_2->addWidget(nbrJoueurs, 8, 1, 1, 1, Qt::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_4, 11, 1, 1, 1);

        label_3 = new QLabel(creation_salon_widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 4, 1, 1, 1, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 309, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 13, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_3, 6, 1, 1, 1);

        button_create = new QPushButton(creation_salon_widget);
        button_create->setObjectName(QString::fromUtf8("button_create"));
        button_create->setMaximumSize(QSize(1111111, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Merriweather"));
        font4.setPointSize(12);
        button_create->setFont(font4);
        button_create->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_create, 12, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(618, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 7, 0, 1, 1);

        pseudoJoueur = new QLineEdit(creation_salon_widget);
        pseudoJoueur->setObjectName(QString::fromUtf8("pseudoJoueur"));

        gridLayout_2->addWidget(pseudoJoueur, 5, 1, 1, 1);


        gridLayout->addWidget(creation_salon_widget, 0, 0, 1, 1);


        retranslateUi(Creation_partie_solo);

        QMetaObject::connectSlotsByName(Creation_partie_solo);
    } // setupUi

    void retranslateUi(QWidget *Creation_partie_solo)
    {
        Creation_partie_solo->setWindowTitle(QApplication::translate("Creation_partie_solo", "Form", nullptr));
        label_2->setText(QApplication::translate("Creation_partie_solo", "Nombre de bots", nullptr));
        label->setText(QApplication::translate("Creation_partie_solo", "Configuration de la partie", nullptr));
        button_retour->setText(QApplication::translate("Creation_partie_solo", "Retour", nullptr));
        label_3->setText(QApplication::translate("Creation_partie_solo", "Votre pseudo", nullptr));
        button_create->setText(QApplication::translate("Creation_partie_solo", "Cr\303\251er", nullptr));
        pseudoJoueur->setText(QApplication::translate("Creation_partie_solo", "VotrePseudo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Creation_partie_solo: public Ui_Creation_partie_solo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATION_PARTIE_SOLO_H
