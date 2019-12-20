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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Instructions
{
public:
    QGridLayout *gridLayout_2;
    QWidget *instruction_widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer1;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *pushButton_retour;
    QSpacerItem *verticalSpacer_21;
    QScrollArea *rules_scrollArea;
    QWidget *rules_scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QLabel *label_10;
    QLabel *label_16;
    QLabel *label_26;
    QLabel *label_15;
    QLabel *label_20;
    QLabel *label_12;
    QLabel *label_29;
    QLabel *label_3;
    QLabel *label_22;
    QLabel *carte1_3;
    QLabel *label_11;
    QLabel *label_4;
    QLabel *gif;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_7;
    QLabel *label_21;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *carte1_4;
    QLabel *label_17;
    QLabel *label_25;
    QLabel *label_23;
    QLabel *label_14;
    QLabel *label_24;
    QLabel *label_6;
    QLabel *label_27;
    QLabel *label_13;
    QLabel *label_5;

    void setupUi(QWidget *Instructions)
    {
        if (Instructions->objectName().isEmpty())
            Instructions->setObjectName(QString::fromUtf8("Instructions"));
        Instructions->resize(1920, 1080);
        Instructions->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(Instructions);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        instruction_widget = new QWidget(Instructions);
        instruction_widget->setObjectName(QString::fromUtf8("instruction_widget"));
        gridLayout_3 = new QGridLayout(instruction_widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        label = new QLabel(instruction_widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 2, 1, 1);

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer1, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_21, 5, 2, 1, 1);

        pushButton_retour = new QPushButton(instruction_widget);
        pushButton_retour->setObjectName(QString::fromUtf8("pushButton_retour"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_retour->sizePolicy().hasHeightForWidth());
        pushButton_retour->setSizePolicy(sizePolicy);
        pushButton_retour->setMinimumSize(QSize(350, 0));
        pushButton_retour->setMaximumSize(QSize(350, 70));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Merriweather"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        pushButton_retour->setFont(font1);
        pushButton_retour->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_retour->setContextMenuPolicy(Qt::NoContextMenu);
        pushButton_retour->setFlat(false);

        gridLayout->addWidget(pushButton_retour, 0, 0, 1, 1);

        verticalSpacer_21 = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_21, 2, 1, 1, 1);

        rules_scrollArea = new QScrollArea(instruction_widget);
        rules_scrollArea->setObjectName(QString::fromUtf8("rules_scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rules_scrollArea->sizePolicy().hasHeightForWidth());
        rules_scrollArea->setSizePolicy(sizePolicy1);
        rules_scrollArea->setAutoFillBackground(false);
        rules_scrollArea->setStyleSheet(QString::fromUtf8(""));
        rules_scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        rules_scrollArea->setWidgetResizable(true);
        rules_scrollAreaWidgetContents = new QWidget();
        rules_scrollAreaWidgetContents->setObjectName(QString::fromUtf8("rules_scrollAreaWidgetContents"));
        rules_scrollAreaWidgetContents->setGeometry(QRect(0, -1140, 614, 1917));
        rules_scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("#rules_scrollAreaWidgetContents {background-color: rgba(0,0,0,0);}"));
        gridLayout_4 = new QGridLayout(rules_scrollAreaWidgetContents);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_10 = new QLabel(rules_scrollAreaWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 6, 1, 1, 1);

        label_16 = new QLabel(rules_scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        QFont font2;
        font2.setPointSize(10);
        label_16->setFont(font2);
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_4->addWidget(label_16, 13, 1, 1, 1);

        label_26 = new QLabel(rules_scrollAreaWidgetContents);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        QFont font3;
        font3.setPointSize(12);
        label_26->setFont(font3);

        gridLayout_4->addWidget(label_26, 26, 1, 1, 3);

        label_15 = new QLabel(rules_scrollAreaWidgetContents);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font2);
        label_15->setWordWrap(true);

        gridLayout_4->addWidget(label_15, 16, 1, 1, 4);

        label_20 = new QLabel(rules_scrollAreaWidgetContents);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMaximumSize(QSize(120, 206));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/icones/filNormal")));
        label_20->setScaledContents(true);

        gridLayout_4->addWidget(label_20, 12, 1, 1, 1);

        label_12 = new QLabel(rules_scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font2);
        label_12->setTextFormat(Qt::RichText);
        label_12->setScaledContents(false);
        label_12->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_12->setWordWrap(true);

        gridLayout_4->addWidget(label_12, 5, 1, 1, 2);

        label_29 = new QLabel(rules_scrollAreaWidgetContents);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setFont(font2);

        gridLayout_4->addWidget(label_29, 28, 1, 1, 3);

        label_3 = new QLabel(rules_scrollAreaWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setTextFormat(Qt::RichText);
        label_3->setWordWrap(true);

        gridLayout_4->addWidget(label_3, 9, 1, 1, 4);

        label_22 = new QLabel(rules_scrollAreaWidgetContents);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font2);
        label_22->setWordWrap(true);

        gridLayout_4->addWidget(label_22, 14, 1, 1, 4);

        carte1_3 = new QLabel(rules_scrollAreaWidgetContents);
        carte1_3->setObjectName(QString::fromUtf8("carte1_3"));
        carte1_3->setMaximumSize(QSize(120, 206));
        carte1_3->setSizeIncrement(QSize(0, 0));
        carte1_3->setBaseSize(QSize(0, 0));
        carte1_3->setFrameShape(QFrame::NoFrame);
        carte1_3->setTextFormat(Qt::AutoText);
        carte1_3->setPixmap(QPixmap(QString::fromUtf8(":/icones/persoJoueur7")));
        carte1_3->setScaledContents(true);
        carte1_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(carte1_3, 3, 2, 1, 1);

        label_11 = new QLabel(rules_scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);
        label_11->setTextFormat(Qt::RichText);
        label_11->setScaledContents(false);
        label_11->setAlignment(Qt::AlignJustify|Qt::AlignTop);
        label_11->setWordWrap(true);

        gridLayout_4->addWidget(label_11, 5, 3, 2, 2);

        label_4 = new QLabel(rules_scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font3);
        label_4->setTextFormat(Qt::RichText);

        gridLayout_4->addWidget(label_4, 24, 1, 1, 3);

        gif = new QLabel(rules_scrollAreaWidgetContents);
        gif->setObjectName(QString::fromUtf8("gif"));
        gif->setMaximumSize(QSize(200, 200));
        gif->setPixmap(QPixmap(QString::fromUtf8(":/icones/images/carte.gif")));
        gif->setScaledContents(true);
        gif->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(gif, 10, 2, 1, 2);

        label_19 = new QLabel(rules_scrollAreaWidgetContents);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMaximumSize(QSize(120, 206));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/icones/fils_desamorcage")));
        label_19->setScaledContents(true);

        gridLayout_4->addWidget(label_19, 12, 2, 1, 1);

        label_18 = new QLabel(rules_scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font2);
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_4->addWidget(label_18, 13, 3, 1, 1);

        label_7 = new QLabel(rules_scrollAreaWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);
        label_7->setWordWrap(true);

        gridLayout_4->addWidget(label_7, 11, 1, 1, 4);

        label_21 = new QLabel(rules_scrollAreaWidgetContents);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMaximumSize(QSize(120, 206));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/icones/bombe")));
        label_21->setScaledContents(true);

        gridLayout_4->addWidget(label_21, 12, 3, 1, 1);

        label_9 = new QLabel(rules_scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);
        label_9->setLineWidth(1);
        label_9->setTextFormat(Qt::RichText);
        label_9->setWordWrap(true);
        label_9->setMargin(0);

        gridLayout_4->addWidget(label_9, 20, 1, 1, 4);

        label_2 = new QLabel(rules_scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font4;
        font4.setPointSize(16);
        label_2->setFont(font4);

        gridLayout_4->addWidget(label_2, 8, 1, 1, 4);

        label_8 = new QLabel(rules_scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font4);
        label_8->setTextFormat(Qt::RichText);
        label_8->setWordWrap(true);

        gridLayout_4->addWidget(label_8, 19, 1, 1, 4);

        carte1_4 = new QLabel(rules_scrollAreaWidgetContents);
        carte1_4->setObjectName(QString::fromUtf8("carte1_4"));
        carte1_4->setMaximumSize(QSize(120, 206));
        carte1_4->setSizeIncrement(QSize(0, 0));
        carte1_4->setBaseSize(QSize(0, 0));
        carte1_4->setFrameShape(QFrame::NoFrame);
        carte1_4->setTextFormat(Qt::AutoText);
        carte1_4->setPixmap(QPixmap(QString::fromUtf8(":/icones/persoJoueur3")));
        carte1_4->setScaledContents(true);
        carte1_4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(carte1_4, 3, 3, 1, 1);

        label_17 = new QLabel(rules_scrollAreaWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font2);
        label_17->setWordWrap(true);

        gridLayout_4->addWidget(label_17, 13, 2, 1, 1);

        label_25 = new QLabel(rules_scrollAreaWidgetContents);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font2);
        label_25->setWordWrap(true);

        gridLayout_4->addWidget(label_25, 27, 1, 1, 4);

        label_23 = new QLabel(rules_scrollAreaWidgetContents);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font4);
        label_23->setWordWrap(true);

        gridLayout_4->addWidget(label_23, 23, 1, 1, 3);

        label_14 = new QLabel(rules_scrollAreaWidgetContents);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font4);

        gridLayout_4->addWidget(label_14, 15, 1, 1, 4);

        label_24 = new QLabel(rules_scrollAreaWidgetContents);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font2);
        label_24->setWordWrap(true);

        gridLayout_4->addWidget(label_24, 25, 1, 1, 4);

        label_6 = new QLabel(rules_scrollAreaWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font4);
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QString::fromUtf8(""));
#endif // QT_NO_TOOLTIP
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_6, 0, 1, 1, 4);

        label_27 = new QLabel(rules_scrollAreaWidgetContents);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/icones/images/separator.png")));

        gridLayout_4->addWidget(label_27, 21, 2, 1, 2);

        label_13 = new QLabel(rules_scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);
        label_13->setTextFormat(Qt::RichText);
        label_13->setScaledContents(false);
        label_13->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_13->setWordWrap(true);

        gridLayout_4->addWidget(label_13, 7, 1, 1, 4);

        label_5 = new QLabel(rules_scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setTextFormat(Qt::RichText);
        label_5->setScaledContents(false);
        label_5->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label_5->setWordWrap(true);

        gridLayout_4->addWidget(label_5, 1, 1, 2, 4);

        rules_scrollArea->setWidget(rules_scrollAreaWidgetContents);

        gridLayout->addWidget(rules_scrollArea, 5, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);


        gridLayout_2->addWidget(instruction_widget, 1, 1, 1, 1);


        retranslateUi(Instructions);

        QMetaObject::connectSlotsByName(Instructions);
    } // setupUi

    void retranslateUi(QWidget *Instructions)
    {
        Instructions->setWindowTitle(QApplication::translate("Instructions", "Instructions", nullptr));
        label->setText(QApplication::translate("Instructions", "Instructions", nullptr));
        pushButton_retour->setText(QApplication::translate("Instructions", "Retour", nullptr));
        label_10->setText(QString());
        label_16->setText(QApplication::translate("Instructions", "Cable s\303\251curis\303\251", nullptr));
        label_26->setText(QApplication::translate("Instructions", "<html><head/><body><p><span style=\" font-weight:600;\">Version Online</span></p></body></html>", nullptr));
        label_15->setText(QApplication::translate("Instructions", "<p  style = \"line-height : 1.2;\">L'\303\251quipe de Sherlock gagne si la bombe est d\303\251samorc\303\251e. \n"
"L\342\200\231\303\251quipe de  Moriarty gagne si la bombe explose ou si \303\240 la fin des 4 manches, aucune des deux conditions pr\303\251c\303\251dentes n\342\200\231est atteinte.\n"
"</p>", nullptr));
        label_20->setText(QString());
        label_12->setText(QApplication::translate("Instructions", "<p  style = \"line-height : 1.2;\">L\342\200\231\303\251quipe bleue de Sherlock cherche \303\240 d\303\251samorcer la bombe. </p>\n"
"", nullptr));
        label_29->setText(QApplication::translate("Instructions", "<p style = \"line-height : 1.2;\">Pour plus d'informations, veuillez consulter le <b>manuel utilisateur</b> disponible \303\240 la racine du projet</p>", nullptr));
        label_3->setText(QApplication::translate("Instructions", "<p  style = \"line-height : 1.2;\">Il y a 4 manches, chaque manche comporte autant de tours qu\342\200\231il n\342\200\231y a de joueurs. Lors de la premi\303\250re manche chaque joueur poss\303\250de 5 cartes. Le joueur peut voir ses cartes mais il ne doit pas les montrer aux autres. Les joueurs peuvent discuter entre eux et dire les cartes qui sont dans leur jeu. Attention, ils peuvent mentir. Le joueur \303\240 qui c\342\200\231est le tour de jouer choisit un paquet d\342\200\231un autre joueur afin de couper une carte. </p>", nullptr));
        label_22->setText(QApplication::translate("Instructions", "<p  style = \"line-height : 1.2;\">C\342\200\231est ensuite au joueur chez qui une carte a \303\251t\303\251 coup\303\251e de jouer, c\342\200\231est un nouveau tour.  Au bout de 7 tours, toutes les cartes non coup\303\251es sont r\303\251cup\303\251r\303\251es, m\303\251lang\303\251es puis redistribu\303\251es. Ainsi, chaque joueur aura le m\303\252me nombre de cartes. Cette \303\251tape marque le d\303\251but de la manche suivante. </p>\n"
"", nullptr));
        carte1_3->setText(QString());
        label_11->setText(QApplication::translate("Instructions", "<p style = \"line-height : 1.2;\">L\342\200\231\303\251quipe rouge de Moriarty cherche \303\240 faire exploser la bombe.</p>", nullptr));
        label_4->setText(QApplication::translate("Instructions", "<html><head/><body><p><span style=\" font-weight:600;\">Version offline</span></p></body></html>", nullptr));
        gif->setText(QString());
        label_19->setText(QString());
        label_18->setText(QApplication::translate("Instructions", "Bombe", nullptr));
        label_7->setText(QApplication::translate("Instructions", "<p  style = \"line-height : 1.2;\">Son but est de couper la bombe s\342\200\231il fait partie de l\342\200\231\303\251quipe rouge ou un c\303\242ble de d\303\251samor\303\247age s\342\200\231il fait partie de l\342\200\231\303\251quipe bleue. Ainsi, il doit \303\251couter ce que disent les autres par rapport aux cartes qu\342\200\231ils poss\303\250dent. La carte choisie sera retourn\303\251e \303\240 la vue de tous afin de voir quel cable a \303\251t\303\251 coup\303\251.</p>", nullptr));
        label_21->setText(QString());
        label_9->setText(QApplication::translate("Instructions", "<p  style = \"line-height : 1.2;\">L'\303\251quipe de Sherlock gagne si bombe d\303\251samorc\303\251e. \n"
"L\342\200\231\303\251quipe de  Moriarty gagne si la bombe explose ou si \303\240 la fin des 4 manches, aucune des deux conditions pr\303\251c\303\251dentes n\342\200\231est atteinte.\n"
"</p>", nullptr));
        label_2->setText(QApplication::translate("Instructions", "Comment se d\303\251roule une partie?", nullptr));
        label_8->setText(QApplication::translate("Instructions", "Fin de la partie", nullptr));
        carte1_4->setText(QString());
        label_17->setText(QApplication::translate("Instructions", "Cable de d\303\251samor\303\247age", nullptr));
        label_25->setText(QApplication::translate("Instructions", "<p  style = \"line-height : 1.2;\">Sur cette version, chaque joueur joue sur son propre \303\251cran. Comme pour la version Offline, en haut se situent les paquets des joueurs, au milieu les cartes affich\303\251es lorsqu\342\200\231on clique un joueur et en haut \303\240 droite les informations du jeu. La partie inf\303\251rieure correspond au jeu du joueur. En bas \303\240 gauche se trouve la carte r\303\264le du joueur. En cliquant dessus sont affich\303\251es des explications relatives \303\240 l\342\200\231\303\251quipe. Au milieu en bas se trouvent les cartes du joueur. Enfin, \303\240 droite se trouve un chat qui permet de communiquer avec les autres joueurs. Chaque joueur a 30 secondes pour choisir une carte, aussi non une carte au hasard sera coup\303\251e.</p>\n"
"", nullptr));
        label_23->setText(QApplication::translate("Instructions", "Comment jouer sur l\342\200\231ordinateur?", nullptr));
        label_14->setText(QApplication::translate("Instructions", "Comment gagner une partie?\n"
"", nullptr));
        label_24->setText(QApplication::translate("Instructions", "<html><head/><body><p  style = \"line-height : 1.2;\">Sur cette version, tous les joueurs jouent sur le m\303\252me \303\251cran. Sur la partie sup\303\251rieure se trouvent les pseudos de chaque joueurs qui repr\303\251sentent leur paquet de carte. Cliquer sur le pseudo d\342\200\231un joueur affiche son jeu retourn\303\251 au centre du plateau. Pour couper une carte, il faudra cliquer sur une des cartes du milieu. En bas, se retrouve le nom du joueur \303\240 qui c\342\200\231est le tour de jouer. A droite se trouve les informations relatives \303\240 la partie. Au d\303\251but de chaque manche ou quand les joueurs le souhaitent, il est possible de cliquer sur le bouton \342\200\234voir les cartes\342\200\235. Sur l\342\200\231\303\251cran sont alors affich\303\251s les pseudos des joueurs. Cliquer sur nom va afficher les cartes ainsi que le r\303\264le du joueur. Cliquer sur \342\200\234ok\342\200\235 va les effacer. En cliquant sur la carte r\303\264le, des explications relatives \303\240 l\342\200\231\303"
                        "\251quipe sont donn\303\251es. Chaque joueur l\342\200\231un apr\303\250s l\342\200\231autre peut voir ses informations pendant que les autres ne regardent pas - <span style=\" font-weight:600;\">tricher, c\342\200\231est mal</span> ! Il est \303\251galement possible de quitter la partie en cliquant sur le bouton \342\200\234quitter\342\200\235.</p><p><br/></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("Instructions", "Initialisation", nullptr));
        label_27->setText(QString());
        label_13->setText(QApplication::translate("Instructions", "<p  style = \"line-height : 1.2;\">Au d\303\251but du jeu chaque joueur est assign\303\251 \303\240 un r\303\264le repr\303\251sent\303\251 par des cartes de personnages avec un fond de couleur bleue ou rouge. Cette couleur d\303\251finie l\342\200\231\303\251quipe dont le joueur fait partie, information qui doit rester secr\303\250te. Le ratio bleu/rouge varie en fonction du nombre de joueurs : Pour 4 et 5 joueurs il est de 3/2, pour 6 joueurs il est de 4/2 et enfin pour 7 et 8 joueurs il est de 5/3. Dans les cas de 5 et 8 joueurs, un des r\303\264les de sera pas assign\303\251. Il y a autant de cartes de d\303\251samor\303\247age que de joueurs.</p>\n"
"", nullptr));
        label_5->setText(QApplication::translate("Instructions", "<html><head/><body><p style = \"line-height : 1.2;\">Timebomb est un jeu de soci\303\251t\303\251 pouvant \303\252tre jou\303\251 \303\240 partir de 4 jusqu'\303\240 8 joueurs.</p><p>Le jeu s\303\251pare les joueurs en deux \303\251quipes : </p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Instructions: public Ui_Instructions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTIONS_H
