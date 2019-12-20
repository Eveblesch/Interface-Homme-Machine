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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Creation_partie
{
public:
    QGridLayout *gridLayout;
    QWidget *creation_salon_widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *button_retour;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QSpinBox *nbrJoueurs;
    QPushButton *button_create;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *Creation_partie)
    {
        if (Creation_partie->objectName().isEmpty())
            Creation_partie->setObjectName(QString::fromUtf8("Creation_partie"));
        Creation_partie->resize(1920, 1080);
        Creation_partie->setContextMenuPolicy(Qt::NoContextMenu);
        Creation_partie->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Creation_partie);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        creation_salon_widget = new QWidget(Creation_partie);
        creation_salon_widget->setObjectName(QString::fromUtf8("creation_salon_widget"));
        gridLayout_2 = new QGridLayout(creation_salon_widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 309, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 9, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(618, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_3, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(618, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 4, 0, 1, 1);

        button_retour = new QPushButton(creation_salon_widget);
        button_retour->setObjectName(QString::fromUtf8("button_retour"));
        button_retour->setMinimumSize(QSize(350, 0));
        button_retour->setMaximumSize(QSize(350, 70));
        QFont font;
        font.setFamily(QString::fromUtf8("Merriweather"));
        button_retour->setFont(font);
        button_retour->setCursor(QCursor(Qt::PointingHandCursor));
        button_retour->setAutoRepeatDelay(311);

        gridLayout_2->addWidget(button_retour, 0, 0, 1, 1);

        label = new QLabel(creation_salon_widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Merriweather Black"));
        font1.setPointSize(24);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        nbrJoueurs = new QSpinBox(creation_salon_widget);
        nbrJoueurs->setObjectName(QString::fromUtf8("nbrJoueurs"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nbrJoueurs->sizePolicy().hasHeightForWidth());
        nbrJoueurs->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Merriweather"));
        font2.setPointSize(10);
        nbrJoueurs->setFont(font2);
        nbrJoueurs->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        nbrJoueurs->setKeyboardTracking(true);
        nbrJoueurs->setMinimum(4);
        nbrJoueurs->setMaximum(8);
        nbrJoueurs->setStepType(QAbstractSpinBox::DefaultStepType);

        gridLayout_2->addWidget(nbrJoueurs, 6, 1, 1, 1, Qt::AlignHCenter);

        button_create = new QPushButton(creation_salon_widget);
        button_create->setObjectName(QString::fromUtf8("button_create"));
        button_create->setMaximumSize(QSize(1111111, 16777215));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Merriweather"));
        font3.setPointSize(12);
        button_create->setFont(font3);
        button_create->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_create, 8, 1, 1, 1);

        label_2 = new QLabel(creation_salon_widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font4;
        font4.setPointSize(14);
        label_2->setFont(font4);

        gridLayout_2->addWidget(label_2, 5, 1, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_4, 7, 1, 1, 1);


        gridLayout->addWidget(creation_salon_widget, 0, 0, 1, 1);


        retranslateUi(Creation_partie);

        QMetaObject::connectSlotsByName(Creation_partie);
    } // setupUi

    void retranslateUi(QWidget *Creation_partie)
    {
        Creation_partie->setWindowTitle(QApplication::translate("Creation_partie", "Form", nullptr));
        button_retour->setText(QApplication::translate("Creation_partie", "Retour", nullptr));
        label->setText(QApplication::translate("Creation_partie", "Cr\303\251er un salon", nullptr));
        button_create->setText(QApplication::translate("Creation_partie", "Cr\303\251er", nullptr));
        label_2->setText(QApplication::translate("Creation_partie", "     Nombre de joueurs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Creation_partie: public Ui_Creation_partie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATION_PARTIE_H
