/********************************************************************************
** Form generated from reading UI file 'choix_partie.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOIX_PARTIE_H
#define UI_CHOIX_PARTIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Choix_partie
{
public:
    QGridLayout *gridLayout;
    QWidget *choix_partie_widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *button_creer_partie;
    QPushButton *button_retour;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Choix_partie)
    {
        if (Choix_partie->objectName().isEmpty())
            Choix_partie->setObjectName(QString::fromUtf8("Choix_partie"));
        Choix_partie->setWindowModality(Qt::ApplicationModal);
        Choix_partie->resize(1920, 1080);
        Choix_partie->setContextMenuPolicy(Qt::NoContextMenu);
        gridLayout = new QGridLayout(Choix_partie);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        choix_partie_widget = new QWidget(Choix_partie);
        choix_partie_widget->setObjectName(QString::fromUtf8("choix_partie_widget"));
        gridLayout_2 = new QGridLayout(choix_partie_widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(754, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 7, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(754, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 7, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_4, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 381, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 6, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        button_creer_partie = new QPushButton(choix_partie_widget);
        button_creer_partie->setObjectName(QString::fromUtf8("button_creer_partie"));
        QFont font;
        font.setPointSize(12);
        button_creer_partie->setFont(font);
        button_creer_partie->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(button_creer_partie);


        gridLayout_2->addLayout(verticalLayout, 5, 2, 1, 1);

        button_retour = new QPushButton(choix_partie_widget);
        button_retour->setObjectName(QString::fromUtf8("button_retour"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_retour->sizePolicy().hasHeightForWidth());
        button_retour->setSizePolicy(sizePolicy);
        button_retour->setMaximumSize(QSize(350, 60));
        button_retour->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(button_retour, 0, 1, 2, 1);

        label = new QLabel(choix_partie_widget);
        label->setObjectName(QString::fromUtf8("label"));
        QPalette palette;
        label->setPalette(palette);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Merriweather Black"));
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setFrameShape(QFrame::NoFrame);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer, 4, 2, 1, 1);


        gridLayout->addWidget(choix_partie_widget, 0, 0, 1, 1);


        retranslateUi(Choix_partie);

        QMetaObject::connectSlotsByName(Choix_partie);
    } // setupUi

    void retranslateUi(QWidget *Choix_partie)
    {
        Choix_partie->setWindowTitle(QApplication::translate("Choix_partie", "Form", nullptr));
        button_creer_partie->setText(QApplication::translate("Choix_partie", "Cr\303\251er une partie", nullptr));
        button_retour->setText(QApplication::translate("Choix_partie", "Retour", nullptr));
        label->setText(QApplication::translate("Choix_partie", "Choix de la partie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Choix_partie: public Ui_Choix_partie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOIX_PARTIE_H
