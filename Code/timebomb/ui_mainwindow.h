/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidgetBis;
    QVBoxLayout *verticalLayout_3;
    QLabel *titre;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *button_online;
    QPushButton *button_offline;
    QPushButton *button_solo;
    QPushButton *button_instructions;
    QPushButton *pushButton_options;
    QPushButton *bouton_quitter;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidgetBis = new QWidget(MainWindow);
        centralWidgetBis->setObjectName(QString::fromUtf8("centralWidgetBis"));
        centralWidgetBis->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(centralWidgetBis);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        titre = new QLabel(centralWidgetBis);
        titre->setObjectName(QString::fromUtf8("titre"));
        titre->setMaximumSize(QSize(16777, 16777));
        titre->setCursor(QCursor(Qt::ArrowCursor));
        titre->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/src/titre_light.png")));
        titre->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(titre);

        label = new QLabel(centralWidgetBis);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icones/images/titre.png")));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        button_online = new QPushButton(centralWidgetBis);
        button_online->setObjectName(QString::fromUtf8("button_online"));
        QFont font;
        font.setPointSize(12);
        font.setKerning(true);
        button_online->setFont(font);
        button_online->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(button_online);

        button_offline = new QPushButton(centralWidgetBis);
        button_offline->setObjectName(QString::fromUtf8("button_offline"));
        QFont font1;
        font1.setPointSize(12);
        button_offline->setFont(font1);

        verticalLayout_2->addWidget(button_offline);

        button_solo = new QPushButton(centralWidgetBis);
        button_solo->setObjectName(QString::fromUtf8("button_solo"));
        button_solo->setFont(font1);
        button_solo->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(button_solo);

        button_instructions = new QPushButton(centralWidgetBis);
        button_instructions->setObjectName(QString::fromUtf8("button_instructions"));
        button_instructions->setFont(font1);
        button_instructions->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(button_instructions);

        pushButton_options = new QPushButton(centralWidgetBis);
        pushButton_options->setObjectName(QString::fromUtf8("pushButton_options"));
        pushButton_options->setFont(font1);
        pushButton_options->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(pushButton_options);

        bouton_quitter = new QPushButton(centralWidgetBis);
        bouton_quitter->setObjectName(QString::fromUtf8("bouton_quitter"));
        bouton_quitter->setFont(font1);
        bouton_quitter->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(bouton_quitter);

        comboBox = new QComboBox(centralWidgetBis);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_2->addWidget(comboBox);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidgetBis);

        retranslateUi(MainWindow);
        QObject::connect(bouton_quitter, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        titre->setText(QString());
        label->setText(QString());
        button_online->setText(QApplication::translate("MainWindow", "Online", nullptr));
        button_offline->setText(QApplication::translate("MainWindow", "Offline", nullptr));
        button_solo->setText(QApplication::translate("MainWindow", "Jouer en solo", nullptr));
        button_instructions->setText(QApplication::translate("MainWindow", "Instructions", nullptr));
        pushButton_options->setText(QApplication::translate("MainWindow", "R\303\251glages", nullptr));
        bouton_quitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
