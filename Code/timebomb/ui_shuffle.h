/********************************************************************************
** Form generated from reading UI file 'shuffle.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHUFFLE_H
#define UI_SHUFFLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Shuffle
{
public:
    QGridLayout *gridLayout;
    QWidget *shuffle_widget;
    QGridLayout *gridLayout_2;
    QLabel *Melangationnnnnnnnn;
    QLabel *label;

    void setupUi(QWidget *Shuffle)
    {
        if (Shuffle->objectName().isEmpty())
            Shuffle->setObjectName(QString::fromUtf8("Shuffle"));
        Shuffle->resize(1920, 1080);
        gridLayout = new QGridLayout(Shuffle);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        shuffle_widget = new QWidget(Shuffle);
        shuffle_widget->setObjectName(QString::fromUtf8("shuffle_widget"));
        gridLayout_2 = new QGridLayout(shuffle_widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Melangationnnnnnnnn = new QLabel(shuffle_widget);
        Melangationnnnnnnnn->setObjectName(QString::fromUtf8("Melangationnnnnnnnn"));
        QFont font;
        font.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        Melangationnnnnnnnn->setFont(font);
        Melangationnnnnnnnn->setFrameShape(QFrame::NoFrame);
        Melangationnnnnnnnn->setPixmap(QPixmap(QString::fromUtf8(":/icones/images/shuffle.gif")));
        Melangationnnnnnnnn->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Melangationnnnnnnnn, 0, 0, 1, 1);

        label = new QLabel(shuffle_widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Merriweather"));
        font1.setPointSize(24);
        label->setFont(font1);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);


        gridLayout->addWidget(shuffle_widget, 0, 0, 1, 1);


        retranslateUi(Shuffle);

        QMetaObject::connectSlotsByName(Shuffle);
    } // setupUi

    void retranslateUi(QWidget *Shuffle)
    {
        Shuffle->setWindowTitle(QApplication::translate("Shuffle", "Form", nullptr));
        Melangationnnnnnnnn->setText(QString());
        label->setText(QApplication::translate("Shuffle", "M\303\251lange des cartes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Shuffle: public Ui_Shuffle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHUFFLE_H
