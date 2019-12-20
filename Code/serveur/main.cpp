#include "jeu.h"
#include <QApplication>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <thread>
#include <chrono>
#include <QFile>
#include <QDebug>
#include <QTranslator>
#include "server.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Server server;

    return a.exec();

//    Jeu partie;
//    partie.creationPartie(4);
//    //partie.annonceStat();
//    partie.creationPaquet();
//    //partie.afficherPaquet();

//    partie.melangerPaquet(0);
//    //printf("#######-APRES MELANGE-#######\n");
//    //partie.afficherPaquet();
//    //partie.taillePaquet();

//    //printf("#######-ON RETIRE LA CARTE QUI POSSE l'ID 15-#######\n");
//    //partie.retirerCarte(15);
//    //partie.afficherPaquet();
//    //partie.taillePaquet();

//    printf("#######-DISTRIBUTION DES CARTES-#######\n");
//    //partie.annonceStat();
//    partie.distributionCartesJoueurs();
//    //partie.annonceStat();

//    Joueur &tomtom = partie.listeJoueur[0];
//    Joueur &baptiste = partie.listeJoueur[1];
//    Joueur &sophie = partie.listeJoueur[2];
//    Joueur &marco = partie.listeJoueur[3];


//    unsigned int idCarteACouper;
//    std::chrono::milliseconds timespan(1000);

//    while(partie.finPartie()==0)
//    {
//        //printf("\nMANCHE %d | TOUR %d\n\n",partie.manche+1,partie.tour+1);

//        //partie.afficherCarteTrouver();
//        if(partie.tour<partie.listeJoueur.size())
//        {
//            partie.afficherPaquetJoueur(tomtom);
//            //tomtom.paquetJoueur.erase(tomtom.paquetJoueur.begin()+1);
//            partie.afficherPaquetJoueur(baptiste);
//            partie.afficherPaquetJoueur(sophie);
//            partie.afficherPaquetJoueur(marco);
//            printf("Veuillez saisir un id de carte à couper \n");
//            std::cin >> idCarteACouper;
//            printf("Vous avez décidé de couper la carte : %d\n\n",idCarteACouper);
//            partie.retirerCarte(idCarteACouper);
//            partie.tour++;
//        }
//        else
//        {
//            printf("^^^^MELANGE DES CARTES^^^^\n");
//            std::this_thread::sleep_for(timespan);
//            printf(".\n");
//            std::this_thread::sleep_for(timespan);
//            printf("..\n");
//            std::this_thread::sleep_for(timespan);
//            printf("...\n");
//            partie.melangerPaquet(1);
//            partie.tour=0;
//            partie.manche++;
//        }
//    }
//    return 0;

}
