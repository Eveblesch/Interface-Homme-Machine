/********************************************************************************
** Form generated from reading UI file 'plateau_on.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLATEAU_ON_H
#define UI_PLATEAU_ON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Plateau_on
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_cards;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_info_joueur;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *desamspinBox;
    QCheckBox *bombcheckBox;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_jeu_milieu;
    QTextEdit *textEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_joueurs;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_info_manches;
    QLabel *label_diffuse;
    QLabel *label_tour;
    QLabel *label_round;
    QLabel *label_bleu;
    QLabel *label_rouge;
    QLabel *nbdiff;
    QLabel *nbmanche;
    QLabel *nbtour;
    QLabel *label_timer;
    QLabel *nbbleu;
    QLabel *nbrouge;
    QLabel *message0;
    QLabel *message1;
    QLabel *message2;
    QLabel *message3;
    QLabel *message4;
    QLabel *message5;
    QLabel *message6;
    QLabel *message7;
    QLabel *message8;
    QLabel *message9;
    QLabel *message10;
    QTextEdit *envoi_msg;
    QPushButton *button_envoi;

    void setupUi(QWidget *Plateau_on)
    {
        if (Plateau_on->objectName().isEmpty())
            Plateau_on->setObjectName(QString::fromUtf8("Plateau_on"));
        Plateau_on->resize(1933, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Plateau_on->sizePolicy().hasHeightForWidth());
        Plateau_on->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Merriweather"));
        Plateau_on->setFont(font);
        Plateau_on->setStyleSheet(QString::fromUtf8("QGridLayout#gridLayout_cards QPushButton\n"
"{\n"
"    border-color : #ff0000;\n"
"	background-color: none;\n"
"}\n"
"\n"
""));
        centralWidget = new QWidget(Plateau_on);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(10, -50, 2101, 1191));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(500, 760, 691, 261));
        gridLayout_cards = new QGridLayout(layoutWidget);
        gridLayout_cards->setObjectName(QString::fromUtf8("gridLayout_cards"));
        gridLayout_cards->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 740, 301, 281));
        gridLayout_info_joueur = new QGridLayout(layoutWidget1);
        gridLayout_info_joueur->setObjectName(QString::fromUtf8("gridLayout_info_joueur"));
        gridLayout_info_joueur->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_info_joueur->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_info_joueur->addWidget(label_2, 1, 0, 1, 1);

        desamspinBox = new QSpinBox(layoutWidget1);
        desamspinBox->setObjectName(QString::fromUtf8("desamspinBox"));

        gridLayout_info_joueur->addWidget(desamspinBox, 1, 1, 1, 1);

        bombcheckBox = new QCheckBox(layoutWidget1);
        bombcheckBox->setObjectName(QString::fromUtf8("bombcheckBox"));

        gridLayout_info_joueur->addWidget(bombcheckBox, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(250, 380, 1041, 331));
        gridLayout_jeu_milieu = new QGridLayout(layoutWidget2);
        gridLayout_jeu_milieu->setObjectName(QString::fromUtf8("gridLayout_jeu_milieu"));
        gridLayout_jeu_milieu->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(1400, 470, 431, 541));
        textEdit->setMaximumSize(QSize(500, 600));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(240, 140, 1041, 151));
        gridLayout_joueurs = new QGridLayout(gridLayoutWidget);
        gridLayout_joueurs->setObjectName(QString::fromUtf8("gridLayout_joueurs"));
        gridLayout_joueurs->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(1400, 110, 391, 341));
        gridLayout_info_manches = new QGridLayout(gridLayoutWidget_2);
        gridLayout_info_manches->setObjectName(QString::fromUtf8("gridLayout_info_manches"));
        gridLayout_info_manches->setContentsMargins(0, 0, 0, 0);
        label_diffuse = new QLabel(gridLayoutWidget_2);
        label_diffuse->setObjectName(QString::fromUtf8("label_diffuse"));

        gridLayout_info_manches->addWidget(label_diffuse, 2, 0, 1, 1);

        label_tour = new QLabel(gridLayoutWidget_2);
        label_tour->setObjectName(QString::fromUtf8("label_tour"));

        gridLayout_info_manches->addWidget(label_tour, 4, 0, 1, 1);

        label_round = new QLabel(gridLayoutWidget_2);
        label_round->setObjectName(QString::fromUtf8("label_round"));

        gridLayout_info_manches->addWidget(label_round, 3, 0, 1, 1);

        label_bleu = new QLabel(gridLayoutWidget_2);
        label_bleu->setObjectName(QString::fromUtf8("label_bleu"));

        gridLayout_info_manches->addWidget(label_bleu, 0, 0, 1, 1);

        label_rouge = new QLabel(gridLayoutWidget_2);
        label_rouge->setObjectName(QString::fromUtf8("label_rouge"));

        gridLayout_info_manches->addWidget(label_rouge, 1, 0, 1, 1);

        nbdiff = new QLabel(gridLayoutWidget_2);
        nbdiff->setObjectName(QString::fromUtf8("nbdiff"));

        gridLayout_info_manches->addWidget(nbdiff, 2, 1, 1, 1);

        nbmanche = new QLabel(gridLayoutWidget_2);
        nbmanche->setObjectName(QString::fromUtf8("nbmanche"));

        gridLayout_info_manches->addWidget(nbmanche, 3, 1, 1, 1);

        nbtour = new QLabel(gridLayoutWidget_2);
        nbtour->setObjectName(QString::fromUtf8("nbtour"));

        gridLayout_info_manches->addWidget(nbtour, 4, 1, 1, 1);

        label_timer = new QLabel(gridLayoutWidget_2);
        label_timer->setObjectName(QString::fromUtf8("label_timer"));
        QFont font1;
        font1.setPointSize(12);
        label_timer->setFont(font1);
        label_timer->setLayoutDirection(Qt::LeftToRight);

        gridLayout_info_manches->addWidget(label_timer, 5, 0, 1, 2);

        nbbleu = new QLabel(gridLayoutWidget_2);
        nbbleu->setObjectName(QString::fromUtf8("nbbleu"));

        gridLayout_info_manches->addWidget(nbbleu, 0, 1, 1, 1);

        nbrouge = new QLabel(gridLayoutWidget_2);
        nbrouge->setObjectName(QString::fromUtf8("nbrouge"));

        gridLayout_info_manches->addWidget(nbrouge, 1, 1, 1, 1);

        message0 = new QLabel(centralWidget);
        message0->setObjectName(QString::fromUtf8("message0"));
        message0->setGeometry(QRect(1430, 483, 401, 41));
        message1 = new QLabel(centralWidget);
        message1->setObjectName(QString::fromUtf8("message1"));
        message1->setGeometry(QRect(1430, 524, 401, 41));
        message2 = new QLabel(centralWidget);
        message2->setObjectName(QString::fromUtf8("message2"));
        message2->setGeometry(QRect(1430, 574, 401, 31));
        message3 = new QLabel(centralWidget);
        message3->setObjectName(QString::fromUtf8("message3"));
        message3->setGeometry(QRect(1430, 614, 401, 31));
        message4 = new QLabel(centralWidget);
        message4->setObjectName(QString::fromUtf8("message4"));
        message4->setGeometry(QRect(1430, 654, 401, 31));
        message5 = new QLabel(centralWidget);
        message5->setObjectName(QString::fromUtf8("message5"));
        message5->setGeometry(QRect(1430, 684, 401, 41));
        message6 = new QLabel(centralWidget);
        message6->setObjectName(QString::fromUtf8("message6"));
        message6->setGeometry(QRect(1430, 724, 401, 41));
        message7 = new QLabel(centralWidget);
        message7->setObjectName(QString::fromUtf8("message7"));
        message7->setGeometry(QRect(1430, 764, 401, 41));
        message8 = new QLabel(centralWidget);
        message8->setObjectName(QString::fromUtf8("message8"));
        message8->setGeometry(QRect(1430, 800, 401, 41));
        message9 = new QLabel(centralWidget);
        message9->setObjectName(QString::fromUtf8("message9"));
        message9->setGeometry(QRect(1430, 840, 401, 41));
        message10 = new QLabel(centralWidget);
        message10->setObjectName(QString::fromUtf8("message10"));
        message10->setGeometry(QRect(1430, 880, 401, 31));
        envoi_msg = new QTextEdit(centralWidget);
        envoi_msg->setObjectName(QString::fromUtf8("envoi_msg"));
        envoi_msg->setGeometry(QRect(1410, 920, 341, 70));
        button_envoi = new QPushButton(centralWidget);
        button_envoi->setObjectName(QString::fromUtf8("button_envoi"));
        button_envoi->setGeometry(QRect(1760, 920, 61, 61));
        textEdit->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        gridLayoutWidget->raise();
        gridLayoutWidget_2->raise();
        message0->raise();
        message1->raise();
        message2->raise();
        message3->raise();
        message4->raise();
        message5->raise();
        message6->raise();
        message7->raise();
        message8->raise();
        message9->raise();
        message10->raise();
        envoi_msg->raise();
        button_envoi->raise();

        retranslateUi(Plateau_on);

        QMetaObject::connectSlotsByName(Plateau_on);
    } // setupUi

    void retranslateUi(QWidget *Plateau_on)
    {
        Plateau_on->setWindowTitle(QApplication::translate("Plateau_on", "Form", nullptr));
        label->setText(QApplication::translate("Plateau_on", "Bombe", nullptr));
        label_2->setText(QApplication::translate("Plateau_on", "Cartes de d\303\251samor\303\247age", nullptr));
        bombcheckBox->setText(QString());
        label_diffuse->setText(QApplication::translate("Plateau_on", "Diffuses restantes : ", nullptr));
        label_tour->setText(QApplication::translate("Plateau_on", "Tour : ", nullptr));
        label_round->setText(QApplication::translate("Plateau_on", "Manche :", nullptr));
        label_bleu->setText(QApplication::translate("Plateau_on", "\303\211quipe bleue :", nullptr));
        label_rouge->setText(QApplication::translate("Plateau_on", "\303\211quipe rouge :", nullptr));
        nbdiff->setText(QString());
        nbmanche->setText(QString());
        nbtour->setText(QString());
        label_timer->setText(QApplication::translate("Plateau_on", "Timer : ", nullptr));
        nbbleu->setText(QString());
        nbrouge->setText(QString());
        message0->setText(QApplication::translate("Plateau_on", "TextLabel", nullptr));
        message1->setText(QApplication::translate("Plateau_on", "TextLabel", nullptr));
        message2->setText(QApplication::translate("Plateau_on", "TextLabel", nullptr));
        message3->setText(QApplication::translate("Plateau_on", "TextLabel", nullptr));
        message4->setText(QApplication::translate("Plateau_on", "TextLabel", nullptr));
        message5->setText(QApplication::translate("Plateau_on", "TextLabel", nullptr));
        message6->setText(QApplication::translate("Plateau_on", "TextLabel", nullptr));
        message7->setText(QApplication::translate("Plateau_on", "TextLabel", nullptr));
        message8->setText(QApplication::translate("Plateau_on", "TextLabel", nullptr));
        message9->setText(QApplication::translate("Plateau_on", "TextLabel", nullptr));
        message10->setText(QApplication::translate("Plateau_on", "TextLabel", nullptr));
        envoi_msg->setHtml(QApplication::translate("Plateau_on", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Merriweather'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Merriweather';\"><br /></p></body></html>", nullptr));
        button_envoi->setText(QApplication::translate("Plateau_on", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Plateau_on: public Ui_Plateau_on {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLATEAU_ON_H
