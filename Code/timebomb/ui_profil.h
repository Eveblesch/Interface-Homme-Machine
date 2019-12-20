/********************************************************************************
** Form generated from reading UI file 'profil.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFIL_H
#define UI_PROFIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profil
{
public:
    QGridLayout *gridLayout_2;
    QWidget *profil_widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_infos;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_retour;
    QLabel *info;

    void setupUi(QWidget *Profil)
    {
        if (Profil->objectName().isEmpty())
            Profil->setObjectName(QString::fromUtf8("Profil"));
        Profil->setWindowModality(Qt::ApplicationModal);
        Profil->resize(1920, 1080);
        Profil->setContextMenuPolicy(Qt::PreventContextMenu);
        gridLayout_2 = new QGridLayout(Profil);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        profil_widget = new QWidget(Profil);
        profil_widget->setObjectName(QString::fromUtf8("profil_widget"));
        layoutWidget = new QWidget(profil_widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(520, 110, 801, 691));
        gridLayout_infos = new QGridLayout(layoutWidget);
        gridLayout_infos->setObjectName(QString::fromUtf8("gridLayout_infos"));
        gridLayout_infos->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget = new QWidget(profil_widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 431, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_retour = new QPushButton(gridLayoutWidget);
        pushButton_retour->setObjectName(QString::fromUtf8("pushButton_retour"));
        pushButton_retour->setMinimumSize(QSize(350, 0));
        pushButton_retour->setMaximumSize(QSize(350, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Merriweather"));
        pushButton_retour->setFont(font);
        pushButton_retour->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(pushButton_retour, 0, 0, 1, 1);

        info = new QLabel(profil_widget);
        info->setObjectName(QString::fromUtf8("info"));
        info->setEnabled(true);
        info->setGeometry(QRect(580, 820, 691, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        info->setFont(font1);

        gridLayout_2->addWidget(profil_widget, 0, 0, 1, 1);


        retranslateUi(Profil);

        QMetaObject::connectSlotsByName(Profil);
    } // setupUi

    void retranslateUi(QWidget *Profil)
    {
        Profil->setWindowTitle(QApplication::translate("Profil", "Form", nullptr));
        pushButton_retour->setText(QApplication::translate("Profil", "Retour", nullptr));
        info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Profil: public Ui_Profil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFIL_H
