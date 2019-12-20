/********************************************************************************
** Form generated from reading UI file 'lobby.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOBBY_H
#define UI_LOBBY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lobby
{
public:
    QLabel *label_salon;
    QLabel *label_joupre;
    QLabel *label_joueur4;
    QLabel *label_joueur7;
    QTextEdit *textEdit;
    QLabel *message5;
    QLabel *message8;
    QPushButton *button_envoi;
    QLabel *message3;
    QTextEdit *envoi_msg;
    QLabel *message4;
    QLabel *message6;
    QLabel *message0;
    QLabel *message10;
    QLabel *message2;
    QLabel *message9;
    QLabel *message1;
    QLabel *message7;
    QPushButton *bouton_retour;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *playerList;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *canstartlayout;

    void setupUi(QWidget *Lobby)
    {
        if (Lobby->objectName().isEmpty())
            Lobby->setObjectName(QString::fromUtf8("Lobby"));
        Lobby->resize(1920, 1080);
        label_salon = new QLabel(Lobby);
        label_salon->setObjectName(QString::fromUtf8("label_salon"));
        label_salon->setGeometry(QRect(420, 200, 630, 38));
        QFont font;
        font.setFamily(QString::fromUtf8("Merriweather Black"));
        font.setPointSize(24);
        label_salon->setFont(font);
        label_salon->setAlignment(Qt::AlignCenter);
        label_joupre = new QLabel(Lobby);
        label_joupre->setObjectName(QString::fromUtf8("label_joupre"));
        label_joupre->setGeometry(QRect(420, 250, 630, 38));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Merriweather Black"));
        font1.setPointSize(16);
        label_joupre->setFont(font1);
        label_joupre->setAlignment(Qt::AlignCenter);
        label_joueur4 = new QLabel(Lobby);
        label_joueur4->setObjectName(QString::fromUtf8("label_joueur4"));
        label_joueur4->setGeometry(QRect(420, 530, 611, 38));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Merriweather Black"));
        font2.setPointSize(13);
        label_joueur4->setFont(font2);
        label_joueur4->setAlignment(Qt::AlignCenter);
        label_joueur7 = new QLabel(Lobby);
        label_joueur7->setObjectName(QString::fromUtf8("label_joueur7"));
        label_joueur7->setGeometry(QRect(420, 680, 611, 38));
        label_joueur7->setFont(font2);
        label_joueur7->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(Lobby);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(1350, 416, 431, 541));
        textEdit->setMaximumSize(QSize(500, 600));
        message5 = new QLabel(Lobby);
        message5->setObjectName(QString::fromUtf8("message5"));
        message5->setGeometry(QRect(1380, 630, 401, 41));
        message8 = new QLabel(Lobby);
        message8->setObjectName(QString::fromUtf8("message8"));
        message8->setGeometry(QRect(1380, 746, 401, 41));
        button_envoi = new QPushButton(Lobby);
        button_envoi->setObjectName(QString::fromUtf8("button_envoi"));
        button_envoi->setGeometry(QRect(1690, 866, 81, 71));
        message3 = new QLabel(Lobby);
        message3->setObjectName(QString::fromUtf8("message3"));
        message3->setGeometry(QRect(1380, 560, 401, 31));
        envoi_msg = new QTextEdit(Lobby);
        envoi_msg->setObjectName(QString::fromUtf8("envoi_msg"));
        envoi_msg->setGeometry(QRect(1360, 866, 321, 70));
        message4 = new QLabel(Lobby);
        message4->setObjectName(QString::fromUtf8("message4"));
        message4->setGeometry(QRect(1380, 600, 401, 31));
        message6 = new QLabel(Lobby);
        message6->setObjectName(QString::fromUtf8("message6"));
        message6->setGeometry(QRect(1380, 670, 401, 41));
        message0 = new QLabel(Lobby);
        message0->setObjectName(QString::fromUtf8("message0"));
        message0->setGeometry(QRect(1380, 429, 401, 41));
        message10 = new QLabel(Lobby);
        message10->setObjectName(QString::fromUtf8("message10"));
        message10->setGeometry(QRect(1380, 826, 401, 31));
        message2 = new QLabel(Lobby);
        message2->setObjectName(QString::fromUtf8("message2"));
        message2->setGeometry(QRect(1380, 520, 401, 31));
        message9 = new QLabel(Lobby);
        message9->setObjectName(QString::fromUtf8("message9"));
        message9->setGeometry(QRect(1380, 786, 401, 41));
        message1 = new QLabel(Lobby);
        message1->setObjectName(QString::fromUtf8("message1"));
        message1->setGeometry(QRect(1380, 470, 401, 41));
        message7 = new QLabel(Lobby);
        message7->setObjectName(QString::fromUtf8("message7"));
        message7->setGeometry(QRect(1380, 710, 401, 41));
        bouton_retour = new QPushButton(Lobby);
        bouton_retour->setObjectName(QString::fromUtf8("bouton_retour"));
        bouton_retour->setGeometry(QRect(70, 50, 350, 41));
        bouton_retour->setMinimumSize(QSize(350, 0));
        bouton_retour->setMaximumSize(QSize(350, 70));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Merriweather"));
        bouton_retour->setFont(font3);
        bouton_retour->setCursor(QCursor(Qt::PointingHandCursor));
        verticalLayoutWidget = new QWidget(Lobby);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(650, 320, 160, 156));
        playerList = new QVBoxLayout(verticalLayoutWidget);
        playerList->setObjectName(QString::fromUtf8("playerList"));
        playerList->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget = new QWidget(Lobby);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(1350, 210, 431, 80));
        canstartlayout = new QHBoxLayout(horizontalLayoutWidget);
        canstartlayout->setObjectName(QString::fromUtf8("canstartlayout"));
        canstartlayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Lobby);

        QMetaObject::connectSlotsByName(Lobby);
    } // setupUi

    void retranslateUi(QWidget *Lobby)
    {
        Lobby->setWindowTitle(QApplication::translate("Lobby", "Form", nullptr));
        label_salon->setText(QApplication::translate("Lobby", "Salon", nullptr));
        label_joupre->setText(QApplication::translate("Lobby", "Joueur(s) pr\303\251sent(s) :", nullptr));
        label_joueur4->setText(QString());
        label_joueur7->setText(QString());
        message5->setText(QString());
        message8->setText(QString());
        button_envoi->setText(QApplication::translate("Lobby", "OK", nullptr));
        message3->setText(QString());
        message4->setText(QString());
        message6->setText(QString());
        message0->setText(QString());
        message10->setText(QString());
        message2->setText(QString());
        message9->setText(QString());
        message1->setText(QString());
        message7->setText(QString());
        bouton_retour->setText(QApplication::translate("Lobby", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lobby: public Ui_Lobby {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOBBY_H
