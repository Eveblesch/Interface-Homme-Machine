/********************************************************************************
** Form generated from reading UI file 'Accueil.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCUEIL_H
#define UI_ACCUEIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Accueil
{
public:
    QGridLayout *gridLayout;
    QWidget *accueil_widget;
    QGridLayout *gridLayout_2;
    QLabel *titre;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *button_jouer;
    QPushButton *button_offline;
    QPushButton *button_solo;
    QPushButton *button_instructions;
    QPushButton *pushButton_options;
    QPushButton *bouton_quitter;
    QComboBox *langues_comboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Accueil)
    {
        if (Accueil->objectName().isEmpty())
            Accueil->setObjectName(QString::fromUtf8("Accueil"));
        Accueil->resize(1005, 807);
        Accueil->setMouseTracking(true);
        Accueil->setStyleSheet(QString::fromUtf8("\n"
"QWidget#centralWidget {\n"
"	background-image: url(:/icones/jacky/jacky.jpg);\n"
"}\n"
""));
        gridLayout = new QGridLayout(Accueil);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        accueil_widget = new QWidget(Accueil);
        accueil_widget->setObjectName(QString::fromUtf8("accueil_widget"));
        gridLayout_2 = new QGridLayout(accueil_widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        titre = new QLabel(accueil_widget);
        titre->setObjectName(QString::fromUtf8("titre"));
        titre->setMaximumSize(QSize(16777, 16777));
        titre->setCursor(QCursor(Qt::ArrowCursor));
        titre->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/src/titre_light.png")));
        titre->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(titre, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        button_jouer = new QPushButton(accueil_widget);
        button_jouer->setObjectName(QString::fromUtf8("button_jouer"));
        QFont font;
        font.setPointSize(12);
        font.setKerning(true);
        button_jouer->setFont(font);
        button_jouer->setCursor(QCursor(Qt::PointingHandCursor));
        button_jouer->setMouseTracking(true);

        verticalLayout_2->addWidget(button_jouer);

        button_offline = new QPushButton(accueil_widget);
        button_offline->setObjectName(QString::fromUtf8("button_offline"));
        QFont font1;
        font1.setPointSize(12);
        button_offline->setFont(font1);
        button_offline->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(button_offline);

        button_solo = new QPushButton(accueil_widget);
        button_solo->setObjectName(QString::fromUtf8("button_solo"));
        button_solo->setFont(font1);
        button_solo->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(button_solo);

        button_instructions = new QPushButton(accueil_widget);
        button_instructions->setObjectName(QString::fromUtf8("button_instructions"));
        button_instructions->setFont(font1);
        button_instructions->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(button_instructions);

        pushButton_options = new QPushButton(accueil_widget);
        pushButton_options->setObjectName(QString::fromUtf8("pushButton_options"));
        pushButton_options->setFont(font1);
        pushButton_options->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(pushButton_options);

        bouton_quitter = new QPushButton(accueil_widget);
        bouton_quitter->setObjectName(QString::fromUtf8("bouton_quitter"));
        bouton_quitter->setFont(font1);
        bouton_quitter->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(bouton_quitter);

        langues_comboBox = new QComboBox(accueil_widget);
        langues_comboBox->setObjectName(QString::fromUtf8("langues_comboBox"));

        verticalLayout_2->addWidget(langues_comboBox);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 2, 2);

        label = new QLabel(accueil_widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icones/images/titre.png")));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);


        gridLayout->addWidget(accueil_widget, 0, 0, 1, 1);


        retranslateUi(Accueil);

        QMetaObject::connectSlotsByName(Accueil);
    } // setupUi

    void retranslateUi(QWidget *Accueil)
    {
        Accueil->setWindowTitle(QApplication::translate("Accueil", "Form", nullptr));
        titre->setText(QString());
        button_jouer->setText(QApplication::translate("Accueil", "Jouer en ligne", nullptr));
        button_offline->setText(QApplication::translate("Accueil", "Jouer en local", nullptr));
        button_solo->setText(QApplication::translate("Accueil", "Jouer en solo", nullptr));
        button_instructions->setText(QApplication::translate("Accueil", "Instructions", nullptr));
        pushButton_options->setText(QApplication::translate("Accueil", "R\303\251glages", nullptr));
        bouton_quitter->setText(QApplication::translate("Accueil", "Quitter", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Accueil: public Ui_Accueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H
