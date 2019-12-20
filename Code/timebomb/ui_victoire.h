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
    QWidget *victoire_widget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_pseudo;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *resultatpartie;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Victoire)
    {
        if (Victoire->objectName().isEmpty())
            Victoire->setObjectName(QString::fromUtf8("Victoire"));
        Victoire->resize(1920, 1080);
        gridLayout_2 = new QGridLayout(Victoire);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        victoire_widget = new QWidget(Victoire);
        victoire_widget->setObjectName(QString::fromUtf8("victoire_widget"));
        gridLayout = new QGridLayout(victoire_widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 394, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 2, 1, 1);

        gridLayout_pseudo = new QGridLayout();
        gridLayout_pseudo->setObjectName(QString::fromUtf8("gridLayout_pseudo"));

        gridLayout->addLayout(gridLayout_pseudo, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(837, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(837, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        resultatpartie = new QLabel(victoire_widget);
        resultatpartie->setObjectName(QString::fromUtf8("resultatpartie"));
        QFont font;
        font.setFamily(QString::fromUtf8("Merriweather Black"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        resultatpartie->setFont(font);

        gridLayout->addWidget(resultatpartie, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 395, QSizePolicy::Minimum, QSizePolicy::Ignored);

        gridLayout->addItem(verticalSpacer_3, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);


        gridLayout_2->addWidget(victoire_widget, 0, 0, 1, 1);


        retranslateUi(Victoire);

        QMetaObject::connectSlotsByName(Victoire);
    } // setupUi

    void retranslateUi(QWidget *Victoire)
    {
        Victoire->setWindowTitle(QApplication::translate("Victoire", "Form", nullptr));
        resultatpartie->setText(QApplication::translate("Victoire", "Les bleus ont gagn\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Victoire: public Ui_Victoire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VICTOIRE_H
