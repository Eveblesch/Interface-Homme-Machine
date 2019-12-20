#include "jeu.h"
#include <assert.h>

Jeu::Jeu():
  nbJoueur(0),
  listeJoueur(),


  paquetPrincipal(),
  nbrCarteSecurise(),
  nbrCarteDesamorce(),


  bombe(1),
  tour(0),
  manche(0),
  nbrouge(),
  nbbleu(),
  joueurCourant()

{}


void Jeu::creationPartie(QList<User*> users)
{
    qDebug() << "[jeu] creationPartie"<<endl;
    unsigned int nombre = static_cast<unsigned int>(users.size());
    QStringList persos;

    persos.append("Irene Adler");
    persos.append("Jim Moriarty");
    persos.append("Charles Milverton");
    persos.append("Sherlock Holmes");
    persos.append("John Watson");
    persos.append("Gregory Lestrade");
    persos.append("Mary Watson");
    persos.append("Molly Hooper");

    qDebug() << "[jeu] personnages initialisés"<<endl;

    switch (nombre)
    {
        case 4:
        {
            nbrouge=2;
            nbbleu=2;
            int i = 0;
            for (unsigned int j = 0; j < nbrouge; j++,i++) {
                users[static_cast<int>(i)]->gamePlayer.equipe = "rouge";
                users[static_cast<int>(i)]->gamePlayer.personnage = persos[static_cast<int>(j)];
                AjoutJoueur(&users[static_cast<int>(i)]->gamePlayer);
            }
            for (unsigned int j = 7; j > (7-nbbleu); j--,i++) {
                users[static_cast<int>(i)]->gamePlayer.equipe = "bleu";
                users[static_cast<int>(i)]->gamePlayer.personnage = persos[static_cast<int>(j)];
                AjoutJoueur(&users[static_cast<int>(i)]->gamePlayer);
            }
            qDebug() << "[jeu] partie initialisée avec 4 joueurs "<<endl;
            break;
        }
        case 5:
        {
            nbrouge=2;
            nbbleu=3;
            int i = 0;
            for (unsigned int j = 0; j < nbrouge; j++,i++) {
                users[static_cast<int>(i)]->gamePlayer.equipe = "rouge";
                users[static_cast<int>(i)]->gamePlayer.personnage = persos[static_cast<int>(j)];
                AjoutJoueur(&users[static_cast<int>(i)]->gamePlayer);
            }
            for (unsigned int j = 7; j > (7-nbbleu); j--,i++) {
                users[static_cast<int>(i)]->gamePlayer.equipe = "bleu";
                users[static_cast<int>(i)]->gamePlayer.personnage = persos[static_cast<int>(j)];
                AjoutJoueur(&users[static_cast<int>(i)]->gamePlayer);
            }
            qDebug() << "[jeu] partie initialisée avec 5 joueurs "<<endl;
            break;
        }
        case 6:
        {
            nbrouge=2;
            nbbleu=4;
            int i=0;
            for (unsigned int j = 0; j < nbrouge; j++,i++) {
                users[static_cast<int>(i)]->gamePlayer.equipe = "rouge";
                users[static_cast<int>(i)]->gamePlayer.personnage = persos[static_cast<int>(j)];
                AjoutJoueur(&users[static_cast<int>(i)]->gamePlayer);
            }
            for (unsigned int j = 7; j > (7-nbbleu); j--,i++) {
                users[static_cast<int>(i)]->gamePlayer.equipe = "bleu";
                users[static_cast<int>(i)]->gamePlayer.personnage = persos[static_cast<int>(j)];
                AjoutJoueur(&users[static_cast<int>(i)]->gamePlayer);
            }
            qDebug() << "[jeu] partie initialisée avec 6 joueurs "<<endl;
            break;
        }
        case 7:
        {
            nbrouge=2;
            nbbleu=5;
            int i=0;
            for (unsigned int j = 0; j < nbrouge; j++,i++) {
                users[static_cast<int>(i)]->gamePlayer.equipe = "rouge";
                users[static_cast<int>(i)]->gamePlayer.personnage = persos[static_cast<int>(j)];
                AjoutJoueur(&users[static_cast<int>(i)]->gamePlayer);
            }
            for (unsigned int j = 7; j > (7-nbbleu); j--,i++) {
                users[static_cast<int>(i)]->gamePlayer.equipe = "bleu";
                users[static_cast<int>(i)]->gamePlayer.personnage = persos[static_cast<int>(j)];
                AjoutJoueur(&users[static_cast<int>(i)]->gamePlayer);
            }
            qDebug() << "[jeu] partie initialisée avec 7 joueurs "<<endl;
            break;
        }
        case 8:
        {
            nbrouge=3;
            nbbleu=5;
            int i=0;
            for (unsigned int j = 0; j < nbrouge; j++,i++) {
                users[static_cast<int>(i)]->gamePlayer.equipe = "rouge";
                users[static_cast<int>(i)]->gamePlayer.personnage = persos[static_cast<int>(j)];
                AjoutJoueur(&users[static_cast<int>(i)]->gamePlayer);
            }
            for (unsigned int j = 7; j > (7-nbbleu); j--,i++) {
                users[static_cast<int>(i)]->gamePlayer.equipe = "bleu";
                users[static_cast<int>(i)]->gamePlayer.personnage = persos[static_cast<int>(j)];
                AjoutJoueur(&users[static_cast<int>(i)]->gamePlayer);
            }
            qDebug() << "[jeu] partie initialisée avec 8 joueurs "<<endl;
            break;
        }
    }
    nbJoueur = nbrouge + nbbleu;
}


void Jeu::AjoutJoueur(Joueur* j)
{
    qDebug() << "[jeu] AjoutJoueur "<<endl;
    qDebug() << j->equipe << " " << j->personnage << endl;
    listeJoueur.push_back(j);
    nbJoueur++;
    qDebug() << "[jeu] Jouer ajouté "<< listeJoueur.size() <<endl;
}

void Jeu::annonceStat()
{
  /*  std::cout << "####################-DEBUT DE PARTIE-####################" << std::endl;
    for(unsigned int i=0;i<listeJoueur.size();i++)
    {

        std::cout << "Joueur numéro " << i+1 << " : "<<  listeJoueur[i].pseudo  << " de l'equipe -> " << listeJoueur[i].equipe  << std::endl;
    }
    std::cout << "########################################################" << std::endl;*/
}

void Jeu::creationPaquet()
{
    qDebug() << "[jeu] creationPaquet "<<endl;
    unsigned int indiceCarte=0;

    switch (nbJoueur)
    {
        //4 fils desam + 15 normales + bombe = 20 cartes
        case 4:
        {
            for(unsigned int i=0;i<4;i++)
            {
                Carte c(indiceCarte,"filDesamorce");
                paquetPrincipal.push_back(c);
                indiceCarte++;
            }

            for(unsigned int i=0;i<15;i++)
            {
                Carte c(indiceCarte,"filSecurise");
                paquetPrincipal.push_back(c);
                indiceCarte++;
            }

            Carte c(indiceCarte,"bombe");
            paquetPrincipal.push_back(c);
            nbrCarteSecurise=15;
            nbrCarteDesamorce=4;
            qDebug() << "[jeu] paquet crée avec 4 joueurs "<<endl;
            break;
        }

        //5 fils desam + 19 normals + bombe = 25 cartes
        case 5:
        {
            for(unsigned int i=0;i<5;i++)
            {
                Carte c(indiceCarte,"filDesamorce");
                paquetPrincipal.push_back(c);
                indiceCarte++;
            }

            for(unsigned int i=0;i<19;i++)
            {
                Carte c(indiceCarte,"filSecurise");
                paquetPrincipal.push_back(c);
                indiceCarte++;
            }
            Carte c(indiceCarte,"bombe");
            paquetPrincipal.push_back(c);

            nbrCarteSecurise=19;
            nbrCarteDesamorce=5;
            qDebug() << "[jeu] paquet crée avec 5 joueurs "<<endl;
            break;
        }

        //6 fils desam + 23 normals + bombe = 30 cartes
        case 6:
        {
            for(unsigned int i=0;i<6;i++)
            {
                Carte c(indiceCarte,"filDesamorce");
                paquetPrincipal.push_back(c);
                indiceCarte++;
            }

            for(unsigned int i=0;i<23;i++)
            {
                Carte c(indiceCarte,"filSecurise");
                paquetPrincipal.push_back(c);
                indiceCarte++;
            }
            Carte c(indiceCarte,"bombe");
            paquetPrincipal.push_back(c);
            nbrCarteSecurise=23;
            nbrCarteDesamorce=6;
            qDebug() << "[jeu] paquet distribué avec 6 joueurs "<<endl;
            break;
        }

        //7 fils desam + 27 normaux + bombe = 35 cartes
        case 7:
        {
            for(unsigned int i=0;i<7;i++)
            {
                Carte c(indiceCarte,"filDesamorce");
                paquetPrincipal.push_back(c);
                indiceCarte++;
            }

            for(unsigned int i=0;i<27;i++)
            {
                Carte c(indiceCarte,"filSecurise");
                paquetPrincipal.push_back(c);
                indiceCarte++;
            }
            Carte c(indiceCarte,"bombe");
            paquetPrincipal.push_back(c);
            nbrCarteSecurise=27;
            nbrCarteDesamorce=7;
            qDebug() << "[jeu] paquet crée avec 7 joueurs "<<endl;
            break;
        }

        //8 fils desam + 31 normals + bombe = 40 cartes
        case 8:
        {
            for(unsigned int i=0;i<8;i++)
            {
                Carte c(indiceCarte,"filDesamorce");
                paquetPrincipal.push_back(c);
                indiceCarte++;
            }

            for(unsigned int i=0;i<31;i++)
            {
                Carte c(indiceCarte,"filSecurise");
                paquetPrincipal.push_back(c);
                indiceCarte++;
            }
            Carte c(indiceCarte,"bombe");
            paquetPrincipal.push_back(c);
            nbrCarteSecurise=31;
            nbrCarteDesamorce=8;
            qDebug() << "[jeu] paquet crée avec 8 joueurs "<<endl;
            break;
        }

        default:
        {
            assert(nbJoueur>=4 && nbJoueur<=8);
        break;
        }
    }
}


void Jeu::melangerPaquet(unsigned int distribution)
{
    qDebug() << "[jeu] melangerPaquet "<< endl;
    for (unsigned int i=0;i<paquetPrincipal.size();i++)
    {
        if(paquetPrincipal[i].trouver==true)
        {
            paquetPrincipal.erase(paquetPrincipal.begin()+i);
            i--;
        }
    }
    qDebug() << "[jeu] cartes relevées enelevées "<<endl;
    std::random_shuffle(paquetPrincipal.begin(),paquetPrincipal.end());

    for(unsigned int i=0;i<paquetPrincipal.size();i++){
        paquetPrincipal[i].idCarte=i;
    }
    qDebug() << "[jeu] id cartes set "<<endl;

    if(distribution==1)
    {
        for(unsigned int a=0;a<listeJoueur.size();a++)
        {
            for(unsigned int b=0;b<listeJoueur[a]->paquetJoueur.size();b++)
            {
                listeJoueur[a]->paquetJoueur.clear();
            }
         }
        distributionCartesJoueurs();
        qDebug() << "[jeu] cartes distribuées "<<endl;
    }

}

unsigned int Jeu::retirerCarte(unsigned int idCarte)
{
    qDebug() << "[jeu] retirerCarte "<<endl;
    unsigned int ret = 999; //0 secu, 1 diffuse, 2 bombe

    for(unsigned int i=0;i<paquetPrincipal.size();i++)
    {
        if(idCarte==paquetPrincipal[i].idCarte)
        {
            if(paquetPrincipal[i].typeCarte=="filSecurise")
            {
                nbrCarteSecurise--;
                ret = 0;
                qDebug() << "[jeu] fil sécurisé retiré "<<endl;
            }
            else if(paquetPrincipal[i].typeCarte=="filDesamorce")
            {
                nbrCarteDesamorce--;
                ret = 1;
                qDebug() << "[jeu] fil désamorce retiré "<<endl;
            }
            else if(paquetPrincipal[i].typeCarte=="bombe")
            {
                bombe--;
                ret = 2;
                qDebug() << "[jeu] bombe retirée "<<endl;
            }
            paquetPrincipal[idCarte].revelerCarte();
            //paquetPrincipal.erase(paquetPrincipal.begin() + i);

            for(unsigned int a=0;a<listeJoueur.size();a++)
            {
                for(unsigned int b=0;b<listeJoueur[a]->paquetJoueur.size();b++)
                {
                    if(listeJoueur[a]->paquetJoueur[b]->idCarte==idCarte)
                    {
//                        listeJoueur[a].paquetJoueur.erase(listeJoueur[a].paquetJoueur.begin()+b);
                        listeJoueur[a]->paquetJoueur[b]->revelerCarte();
                    }
                }
            }
        }
    }
    qDebug() << "[jeu] cartes retirée "<< idCarte <<endl;
    return ret;
}

unsigned int Jeu::taillePaquet()
{
    qDebug() << "[jeu] taillePaquet "<<endl;
    std::cout << "====> Taille du paquet : " << paquetPrincipal.size() << " cartes" << std::endl;
    return static_cast<unsigned int>(paquetPrincipal.size());
}

void Jeu::distributionCartesJoueurs()
{
    qDebug() << "[jeu] distributionCartesJoueurs "<<endl;
    std::vector<Carte*> tmp;
    unsigned int nbrCartesParJ = (static_cast<unsigned int> (paquetPrincipal.size()))/nbJoueur;
    qDebug() <<"[jeu]"<< nbrCartesParJ <<" cartes par joueur "<<endl;
    unsigned i,j,compte=0;
    for(i=0;i<nbrCartesParJ;i++)
    {
        for(j=0;j<nbJoueur;j++)
        {
            listeJoueur[j]->paquetJoueur.reserve(sizeof (&paquetPrincipal[compte])*nbrCartesParJ);
            listeJoueur[j]->paquetJoueur.push_back(&paquetPrincipal[compte]);
            tmp.push_back(&paquetPrincipal[compte]);
            compte++;
        }
        cartesParJoueur.push_back(tmp);
    }
    qDebug() << "[jeu] distribution de paquet effectuée "<<endl;
}


void Jeu::afficherPaquetJoueur(const Joueur &player)
{
    qDebug() << "[jeu] afficherPaquetJoueur "<<endl;
    unsigned int i;
    //std::cout << "====> Joueur : " << player.pseudo << std::endl;
    for(i=0;i<player.paquetJoueur.size();i++)
    {
        if((player.paquetJoueur[i]->trouver)==false){
            qDebug() << "[jeu]"<< " Id carte "<< player.paquetJoueur[i]->idCarte <<endl;
          }

    }
}

void Jeu::afficherCarteTrouver(){
    qDebug() << "[jeu] afficherCarteTrouver "<<endl;
    //printf("on rentre dans affichage carte trouver\n");
    for(unsigned int i=0;i<paquetPrincipal.size();i++){
        if(paquetPrincipal[i].trouver==true){
//           std::cout<< "carte "<< i<< " est trouvée" <<std::endl;
            qDebug() << "[jeu] carte "<< i<<" est trouvée"<<endl;
            //printf("carte %d est trouvée\n",i);
        }

    }
}

unsigned int Jeu::finPartie()
{
    qDebug() << "[jeu] finPartie "<<endl;
    if(bombe==0 || (manche==4 && tour==listeJoueur.size()))
    {
        qDebug() << "[jeu] Victoire des ROUGES "<<endl;
        return 1;
    }
    else if(nbrCarteDesamorce==0)
    {
        qDebug() << "[jeu] Victoire des BLEUS "<<endl;
        return 2;
    }
    return 0;
}

unsigned int Jeu::quiAcetteCarte(unsigned int idKart)
{
    qDebug() << "[jeu] quiACetteCarte "<< idKart <<endl;
    for(unsigned int i=0;i<listeJoueur.size();i++)
    {
        for(unsigned int j=0;j<listeJoueur[i]->paquetJoueur.size();j++)
        {
            if(listeJoueur[i]->paquetJoueur[j]->idCarte==idKart)
            {
                 qDebug() << "[jeu] joueur "<<i<< "a cette carte" <<endl;
                 return i;
            }
        }
    }
    return 9;
}

void Jeu::suppressionPartie()
{
    qDebug() << "[jeu] suppressionPartie "<<endl;
    for(int i=0;i<(static_cast<int> (listeJoueur.size()));i++)
    {
        listeJoueur[(static_cast<unsigned int> (i))]->paquetJoueur.clear();
    }
    listeJoueur.clear();
    paquetPrincipal.clear();
    qDebug() << "[jeu] Partie supprimée " <<endl;
}
