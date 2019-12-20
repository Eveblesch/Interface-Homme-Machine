/********************************************************************************
** Form generated from reading UI file 'plateau.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLATEAU_H
#define UI_PLATEAU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Plateau
{
public:
    QGridLayout *gridLayout;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_info_joueur;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_joueurs;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_jeu_milieu;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *stats_widget;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QGridLayout *gridLayout_info_manches;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_bouton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *Plateau)
    {
        if (Plateau->objectName().isEmpty())
            Plateau->setObjectName(QString::fromUtf8("Plateau"));
        Plateau->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Plateau->sizePolicy().hasHeightForWidth());
        Plateau->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Merriweather"));
        Plateau->setFont(font);
        Plateau->setStyleSheet(QString::fromUtf8("QGridLayout#gridLayout_cards QPushButton\n"
"{\n"
"    border-color : #ff0000;\n"
"	background-color: none;\n"
"}\n"
"\n"
""));
        gridLayout = new QGridLayout(Plateau);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        centralWidget = new QWidget(Plateau);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(530, 790, 391, 151));
        gridLayout_info_joueur = new QGridLayout(layoutWidget);
        gridLayout_info_joueur->setObjectName(QString::fromUtf8("gridLayout_info_joueur"));
        gridLayout_info_joueur->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 120, 1171, 121));
        gridLayout_joueurs = new QGridLayout(layoutWidget1);
        gridLayout_joueurs->setObjectName(QString::fromUtf8("gridLayout_joueurs"));
        gridLayout_joueurs->setContentsMargins(0, 0, 0, 0);
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(250, 320, 941, 321));
        gridLayout_jeu_milieu = new QGridLayout(layoutWidget2);
        gridLayout_jeu_milieu->setObjectName(QString::fromUtf8("gridLayout_jeu_milieu"));
        gridLayout_jeu_milieu->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 830, 141, 61));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(460, 80, 521, 51));
        QFont font2;
        font2.setPointSize(11);
        font2.setItalic(true);
        label_3->setFont(font2);
        stats_widget = new QWidget(centralWidget);
        stats_widget->setObjectName(QString::fromUtf8("stats_widget"));
        stats_widget->setGeometry(QRect(1360, 0, 561, 1081));
        gridLayout_3 = new QGridLayout(stats_widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(120, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_3->addItem(verticalSpacer, 6, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 5, 1, 1, 1);

        label = new QLabel(stats_widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 80));
        QFont font3;
        font3.setPointSize(12);
        label->setFont(font3);

        gridLayout_3->addWidget(label, 1, 0, 1, 2);

        gridLayout_info_manches = new QGridLayout();
        gridLayout_info_manches->setObjectName(QString::fromUtf8("gridLayout_info_manches"));

        gridLayout_3->addLayout(gridLayout_info_manches, 3, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_2, 4, 0, 1, 1);

        gridLayout_bouton = new QGridLayout();
        gridLayout_bouton->setObjectName(QString::fromUtf8("gridLayout_bouton"));

        gridLayout_3->addLayout(gridLayout_bouton, 5, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_3, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_4, 2, 0, 1, 1);


        gridLayout->addWidget(centralWidget, 0, 2, 1, 1);


        retranslateUi(Plateau);

        QMetaObject::connectSlotsByName(Plateau);
    } // setupUi

    void retranslateUi(QWidget *Plateau)
    {
        Plateau->setWindowTitle(QApplication::translate("Plateau", "Form", nullptr));
        label_2->setText(QApplication::translate("Plateau", "Au tour de", nullptr));
        label_3->setText(QApplication::translate("Plateau", "Cliquez sur un des joueurs pour choisir ses cartes", nullptr));
        label->setText(QApplication::translate("Plateau", "Composition de la partie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Plateau: public Ui_Plateau {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLATEAU_H
