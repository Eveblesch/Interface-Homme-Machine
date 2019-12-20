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
    QLabel *Melangationnnnnnnnn;

    void setupUi(QWidget *Shuffle)
    {
        if (Shuffle->objectName().isEmpty())
            Shuffle->setObjectName(QString::fromUtf8("Shuffle"));
        Shuffle->resize(1289, 750);
        gridLayout = new QGridLayout(Shuffle);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Melangationnnnnnnnn = new QLabel(Shuffle);
        Melangationnnnnnnnn->setObjectName(QString::fromUtf8("Melangationnnnnnnnn"));

        gridLayout->addWidget(Melangationnnnnnnnn, 0, 0, 1, 1);


        retranslateUi(Shuffle);

        QMetaObject::connectSlotsByName(Shuffle);
    } // setupUi

    void retranslateUi(QWidget *Shuffle)
    {
        Shuffle->setWindowTitle(QApplication::translate("Shuffle", "Form", nullptr));
        Melangationnnnnnnnn->setText(QApplication::translate("Shuffle", "Shuffle...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Shuffle: public Ui_Shuffle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHUFFLE_H
