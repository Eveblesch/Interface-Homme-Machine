#-------------------------------------------------
#
# Project created by QtCreator 2019-10-16T08:11:34
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = timebomb
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
CONFIG += resources_big

SOURCES += \
    baptiste.cpp \
    client.cpp \
    main.cpp \
    mainwindow.cpp \
    Jeu.cpp \
    Joueur.cpp \
    Carte.cpp \
    Carte_button.cpp \
    Joueur_button.cpp \
    Accueil.cpp \
    Defaite.cpp \
    Shuffle.cpp \
    Victoire.cpp \
    FinPartie.cpp \
    Profil.cpp \
    Options.cpp \
    Plateau.cpp \
    Instructions.cpp \
    Choix_partie.cpp \
    Creation_partie.cpp \
    Vue_cartes.cpp \
    Pseudo.cpp \
    Plateau_on.cpp \
    Lobby.cpp \
    Creation_partie_on.cpp \
    FinPartie_on.cpp \
    Victoire_on.cpp \
    Defaite_on.cpp \
    Vue_cartes_on.cpp \
    Creation_partie_solo.cpp \
    Plateau_solo.cpp



HEADERS += \
    baptiste.h \
    client.h \
    mainwindow.h \
    Jeu.h \
    Joueur.h \
    Carte.h \
    Carte_button.h \
    Joueur_button.h \
    Accueil.h \
    Defaite.h \
    Shuffle.h \
    Victoire.h \
    FinPartie.h \
    Profil.h \
    Options.h \
    Plateau.h \
    Instructions.h \
    Choix_partie.h \
    Creation_partie.h \
    Vue_cartes.h \
    Pseudo.h \
    Plateau_on.h \
    Lobby.h \
    Creation_partie_on.h \
    FinPartie_on.h \
    Victoire_on.h \
    Defaite_on.h \
    Vue_cartes_on.h \
    Creation_partie_solo.h \
    Plateau_solo.h


FORMS += \
    Accueil.ui \
    mainwindow.ui \
    defaite.ui \
    shuffle.ui \
    victoire.ui \
    finpartie.ui \
    profil.ui \
    options.ui \
    instructions.ui \
    choix_partie.ui \
    creation_partie.ui \
    plateau.ui \
    vue_cartes.ui \
    pseudo.ui \
    plateau_on.ui \
    lobby.ui \
    creation_partie_on.ui \
    finpartie_on.ui \
    victoire_on.ui \
    defaite_on.ui \
    vue_cartes_on.ui \
    creation_partie_solo.ui \
    plateau_solo.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressources.qrc

TRANSLATIONS += \
    traduction_English.ts

DISTFILES +=
