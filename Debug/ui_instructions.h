/********************************************************************************
** Form generated from reading UI file 'instructions.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTIONS_H
#define UI_INSTRUCTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Instructions
{
public:
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_retour;
    QLabel *label_2;
    QLabel *label;
    QScrollBar *verticalScrollBar;

    void setupUi(QWidget *Instructions)
    {
        if (Instructions->objectName().isEmpty())
            Instructions->setObjectName(QString::fromUtf8("Instructions"));
        Instructions->resize(6369, 750);
        Instructions->setAutoFillBackground(true);
        menubar = new QMenuBar(Instructions);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        statusbar = new QStatusBar(Instructions);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setGeometry(QRect(0, 0, 3, 22));
        gridLayout_2 = new QGridLayout(Instructions);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_retour = new QPushButton(Instructions);
        pushButton_retour->setObjectName(QString::fromUtf8("pushButton_retour"));
        pushButton_retour->setCursor(QCursor(Qt::CrossCursor));

        gridLayout->addWidget(pushButton_retour, 0, 0, 1, 1);

        label_2 = new QLabel(Instructions);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        label = new QLabel(Instructions);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        verticalScrollBar = new QScrollBar(Instructions);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalScrollBar, 2, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Instructions);

        QMetaObject::connectSlotsByName(Instructions);
    } // setupUi

    void retranslateUi(QWidget *Instructions)
    {
        Instructions->setWindowTitle(QApplication::translate("Instructions", "Instructions", nullptr));
        pushButton_retour->setText(QApplication::translate("Instructions", "retour", nullptr));
        label_2->setText(QApplication::translate("Instructions", "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum faucibus volutpat augue, eget mollis neque ultricies vitae. Nam placerat finibus odio id ultricies. Phasellus sed urna ex. Aliquam tellus nunc, auctor eu justo sed, maximus eleifend sapien. Nam turpis enim, suscipit vel egestas ut, bibendum a ligula. In condimentum libero nec libero blandit, non imperdiet magna cursus. Proin maximus tempus velit, vel laoreet leo suscipit ut. Duis quis leo id ex egestas malesuada vel eu mi. Etiam ac scelerisque dui. Nulla ac tempor leo, sed feugiat ligula.\n"
"\n"
"Aliquam eros odio, mollis quis scelerisque ut, rutrum vitae diam. Donec accumsan, mi ut rhoncus commodo, lectus purus posuere dui, non tincidunt lacus leo non purus. Vestibulum fringilla augue dui, in sodales metus laoreet ac. Vivamus sit amet nunc dui. Nunc dolor sapien, placerat non tincidunt fermentum, tristique non nulla. Praesent blandit euismod sodales. Donec odio velit, malesuada eget cursus quis, luctus sit amet augue. Quisque pulvinar est da"
                        "pibus, dignissim ante in, commodo nibh.\n"
"\n"
"Sed sed felis nec lectus consectetur placerat. Curabitur felis ligula, mattis blandit nisl eget, bibendum rutrum dui. Sed et erat arcu. Praesent et massa ut leo euismod ullamcorper. Sed tempor rutrum suscipit. Pellentesque at quam justo. Nam quis posuere magna, vitae aliquet erat. Aenean porta, lorem vitae iaculis ullamcorper, nunc ante sollicitudin libero, et porttitor velit ipsum ut arcu. Quisque ut augue dui. Phasellus et eleifend enim. Vivamus tellus orci, tempor egestas faucibus et, molestie non mi. Vivamus id leo quam. Vivamus ullamcorper mi ac sollicitudin fringilla. Donec auctor massa sapien, in finibus nunc elementum vel. Fusce vel metus ipsum.\n"
"\n"
"Vivamus varius elit consequat augue sollicitudin condimentum. Aenean imperdiet lorem sem, sit amet viverra felis feugiat id. Aliquam laoreet pharetra quam at imperdiet. Pellentesque blandit ipsum sed eros auctor sollicitudin. Cras sed nulla vitae nunc blandit pellentesque a quis magna. Donec condimentum "
                        "aliquet justo, nec eleifend turpis vestibulum sit amet. Donec at odio at est venenatis malesuada. Quisque vehicula vehicula arcu a lacinia. Nam vulputate urna nisl, vel efficitur nibh efficitur eu. Fusce vestibulum justo ullamcorper, blandit risus id, aliquam felis. Integer rutrum magna ut quam varius euismod. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Nulla mauris felis, pulvinar ac mi sed, vehicula placerat mauris. Suspendisse potenti. Vivamus turpis diam, auctor ac porttitor id, lobortis eget ante. Quisque ornare odio at felis rhoncus, nec consectetur tellus maximus.\n"
"\n"
"Duis tristique molestie orci, ac viverra metus condimentum vitae. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Donec dapibus mauris urna, in suscipit ex blandit vel. Sed gravida neque posuere, molestie neque eget, aliquam libero. Phasellus sollicitudin tellus eu eleifend tincidunt. Nam quis diam a lacus iaculis tempor sodales eu lorem. Curabit"
                        "ur vitae ultrices sem, ac eleifend felis.", nullptr));
        label->setText(QApplication::translate("Instructions", "Instructions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Instructions: public Ui_Instructions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTIONS_H
