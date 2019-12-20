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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *titre;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *button_jouer;
    QPushButton *button_instructions;
    QPushButton *pushButton_options;
    QPushButton *bouton_quitter;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1085, 1284);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"/*	\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: #9a8083;\n"
"	box-shadow : 0 0 10px rgba(0, 0, 0, 0.2) ;\n"
"	cursor : pointer;\n"
"	padding : 10px 20px;\n"
"*/\n"
"}\n"
"\n"
"#MainWindow{\n"
"	border-image: url(:/new/prefix1/src/londres.jpg) 0 0 0 0 stretch stretch;\n"
"	/*background-image : url(:/new/prefix1/src/londres.jpg);\n"
"	background-repeat : no-repeat;\n"
"	background-size: 100vw;\n"
"background-position: center;*/\n"
"}\n"
"\n"
"#titre{\n"
"	/*width: 200px;\n"
"	height : 200px;*/\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        titre = new QLabel(centralWidget);
        titre->setObjectName(QString::fromUtf8("titre"));
        titre->setMaximumSize(QSize(16777, 16777));
        titre->setCursor(QCursor(Qt::ArrowCursor));
        titre->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/src/titre_light.png")));
        titre->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(titre);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        button_jouer = new QPushButton(centralWidget);
        button_jouer->setObjectName(QString::fromUtf8("button_jouer"));
        button_jouer->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(button_jouer);

        button_instructions = new QPushButton(centralWidget);
        button_instructions->setObjectName(QString::fromUtf8("button_instructions"));
        button_instructions->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(button_instructions);

        pushButton_options = new QPushButton(centralWidget);
        pushButton_options->setObjectName(QString::fromUtf8("pushButton_options"));
        pushButton_options->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(pushButton_options);

        bouton_quitter = new QPushButton(centralWidget);
        bouton_quitter->setObjectName(QString::fromUtf8("bouton_quitter"));
        bouton_quitter->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(bouton_quitter);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1085, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(bouton_quitter, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        titre->setText(QString());
        button_jouer->setText(QApplication::translate("MainWindow", "Jouer", nullptr));
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
