/********************************************************************************
** Form generated from reading UI file 'pseudo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PSEUDO_H
#define UI_PSEUDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pseudo
{
public:
    QGridLayout *gridLayout;
    QWidget *pseudo_widget;
    QGridLayout *gridLayout_2;
    QPushButton *button_create;
    QLabel *label;
    QGridLayout *gridPseudo;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *button_retour;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Pseudo)
    {
        if (Pseudo->objectName().isEmpty())
            Pseudo->setObjectName(QString::fromUtf8("Pseudo"));
        Pseudo->resize(1920, 1080);
        gridLayout = new QGridLayout(Pseudo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pseudo_widget = new QWidget(Pseudo);
        pseudo_widget->setObjectName(QString::fromUtf8("pseudo_widget"));
        gridLayout_2 = new QGridLayout(pseudo_widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        button_create = new QPushButton(pseudo_widget);
        button_create->setObjectName(QString::fromUtf8("button_create"));
        QFont font;
        font.setFamily(QString::fromUtf8("Merriweather"));
        font.setPointSize(12);
        button_create->setFont(font);
        button_create->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_create, 6, 1, 1, 1);

        label = new QLabel(pseudo_widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Merriweather Black"));
        font1.setPointSize(24);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 2, 1, 1, 1);

        gridPseudo = new QGridLayout();
        gridPseudo->setObjectName(QString::fromUtf8("gridPseudo"));

        gridLayout_2->addLayout(gridPseudo, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 865, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer, 7, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(844, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_2, 1, 1, 1, 1);

        button_retour = new QPushButton(pseudo_widget);
        button_retour->setObjectName(QString::fromUtf8("button_retour"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_retour->sizePolicy().hasHeightForWidth());
        button_retour->setSizePolicy(sizePolicy);
        button_retour->setMinimumSize(QSize(350, 0));
        button_retour->setMaximumSize(QSize(200, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Merriweather"));
        button_retour->setFont(font2);
        button_retour->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_retour, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(844, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 5, 2, 1, 1);

        label_2 = new QLabel(pseudo_widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setPointSize(10);
        label_2->setFont(font3);
        label_2->setWordWrap(true);

        gridLayout_2->addWidget(label_2, 4, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_3, 3, 1, 1, 1);


        gridLayout->addWidget(pseudo_widget, 0, 0, 1, 1);


        retranslateUi(Pseudo);

        QMetaObject::connectSlotsByName(Pseudo);
    } // setupUi

    void retranslateUi(QWidget *Pseudo)
    {
        Pseudo->setWindowTitle(QApplication::translate("Pseudo", "Form", nullptr));
        button_create->setText(QApplication::translate("Pseudo", "Cr\303\251er", nullptr));
        label->setText(QApplication::translate("Pseudo", "Pseudos", nullptr));
        button_retour->setText(QApplication::translate("Pseudo", "Retour", nullptr));
        label_2->setText(QApplication::translate("Pseudo", "Choisissez un pseudo pour chaque joueur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pseudo: public Ui_Pseudo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PSEUDO_H
