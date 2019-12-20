/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Options
{
public:
    QGridLayout *gridLayout_2;
    QWidget *options_widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label;
    QCheckBox *fullScreenOn;
    QLabel *label_3;
    QSlider *horizontalSlider_2;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_4;
    QComboBox *comboBox;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_retour;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Options)
    {
        if (Options->objectName().isEmpty())
            Options->setObjectName(QString::fromUtf8("Options"));
        Options->setWindowModality(Qt::NonModal);
        Options->setEnabled(true);
        Options->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Options->sizePolicy().hasHeightForWidth());
        Options->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(Options);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        options_widget = new QWidget(Options);
        options_widget->setObjectName(QString::fromUtf8("options_widget"));
        gridLayout_3 = new QGridLayout(options_widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_4 = new QLabel(options_widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(12);
        label_4->setFont(font);

        gridLayout_4->addWidget(label_4, 8, 0, 1, 1);

        label_7 = new QLabel(options_widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_4->addWidget(label_7, 7, 2, 1, 1);

        label = new QLabel(options_widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Merriweather Black"));
        font1.setPointSize(24);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 1, 0, 1, 3);

        fullScreenOn = new QCheckBox(options_widget);
        fullScreenOn->setObjectName(QString::fromUtf8("fullScreenOn"));

        gridLayout_4->addWidget(fullScreenOn, 8, 2, 1, 1);

        label_3 = new QLabel(options_widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout_4->addWidget(label_3, 5, 0, 1, 1);

        horizontalSlider_2 = new QSlider(options_widget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMaximumSize(QSize(200, 16777215));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_2, 6, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer_6, 6, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer, 0, 0, 1, 3);

        label_6 = new QLabel(options_widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_4->addWidget(label_6, 4, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer_4, 7, 0, 1, 1);

        comboBox = new QComboBox(options_widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_4->addWidget(comboBox, 5, 2, 1, 1);

        label_2 = new QLabel(options_widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout_4->addWidget(label_2, 4, 0, 1, 1);

        horizontalSlider = new QSlider(options_widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(20);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setMaximumSize(QSize(200, 16777215));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider, 11, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_4->addItem(verticalSpacer_2, 12, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_4->addItem(verticalSpacer_3, 2, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 8, 1, 1, 1);


        gridLayout->addLayout(gridLayout_4, 2, 1, 1, 1);

        pushButton_retour = new QPushButton(options_widget);
        pushButton_retour->setObjectName(QString::fromUtf8("pushButton_retour"));
        pushButton_retour->setMinimumSize(QSize(350, 0));
        pushButton_retour->setMaximumSize(QSize(200, 50));
        pushButton_retour->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_retour->setAutoFillBackground(true);

        gridLayout->addWidget(pushButton_retour, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(options_widget, 0, 0, 1, 1);


        retranslateUi(Options);

        QMetaObject::connectSlotsByName(Options);
    } // setupUi

    void retranslateUi(QWidget *Options)
    {
        Options->setWindowTitle(QApplication::translate("Options", "MainWindow", nullptr));
        label_4->setText(QApplication::translate("Options", "Effets sonors", nullptr));
        label_7->setText(QApplication::translate("Options", "Mode plein \303\251cran", nullptr));
        label->setText(QApplication::translate("Options", "Options", nullptr));
        fullScreenOn->setText(QString());
        label_3->setText(QApplication::translate("Options", "Musique", nullptr));
        label_6->setText(QApplication::translate("Options", "Th\303\250me", nullptr));
        comboBox->setItemText(0, QApplication::translate("Options", "Classique", nullptr));
        comboBox->setItemText(1, QApplication::translate("Options", "Jacky", nullptr));
        comboBox->setItemText(2, QApplication::translate("Options", "Daltonien", nullptr));

        label_2->setText(QApplication::translate("Options", "Son", nullptr));
        pushButton_retour->setText(QApplication::translate("Options", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Options: public Ui_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
