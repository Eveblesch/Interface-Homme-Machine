#include "Jeu.h"
#include "mainwindow.h"
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


void Jeu::creationPartie(QStringList listePseudos)
{
    int nombre=listePseudos.size();
    std::vector<Joueur> listeFictive;
    switch (nombre)
    {
        case 4:
        {
        listeFictive.push_back(Joueur(listePseudos[0],"Bleue",1));
        listeFictive.push_back(Joueur(listePseudos[1],"Rouge",2));
        listeFictive.push_back(Joueur(listePseudos[2],"Rouge",3));
        listeFictive.push_back(Joueur(listePseudos[3],"Bleue",4));
            for(int i=0;i<nombre;i++)
            {
                AjoutJoueur(listeFictive[(static_cast<unsigned int> (i))]);
            }
            nbrouge=2;
            nbbleu=2;
            break;
        }
        case 5:
        {
        listeFictive.push_back(Joueur(listePseudos[0],"Bleue",1));
        listeFictive.push_back(Joueur(listePseudos[1],"Rouge",2));
        listeFictive.push_back(Joueur(listePseudos[2],"Rouge",3));
        listeFictive.push_back(Joueur(listePseudos[3],"Bleue",4));
        listeFictive.push_back(Joueur(listePseudos[4],"Bleue",5));
            for(int i=0;i<nombre;i++)
            {
                AjoutJoueur(listeFictive[(static_cast<unsigned int> (i))]);
            }
            nbrouge=2;
            nbbleu=3;
            break;
        }
        case 6:
        {
        listeFictive.push_back(Joueur(listePseudos[0],"Bleue",1));
        listeFictive.push_back(Joueur(listePseudos[1],"Rouge",2));
        listeFictive.push_back(Joueur(listePseudos[2],"Rouge",3));
        listeFictive.push_back(Joueur(listePseudos[3],"Bleue",4));
        listeFictive.push_back(Joueur(listePseudos[4],"Bleue",5));
        listeFictive.push_back(Joueur(listePseudos[5],"Bleue",6));

            for(int i=0;i<nombre;i++)
            {
                AjoutJoueur(listeFictive[(static_cast<unsigned int> (i))]);
            }
            nbrouge=2;
            nbbleu=4;
            break;
        }
        case 7:
        {
        listeFictive.push_back(Joueur(listePseudos[0],"Bleue",1));
        listeFictive.push_back(Joueur(listePseudos[1],"Rouge",2));
        listeFictive.push_back(Joueur(listePseudos[2],"Rouge",3));
        listeFictive.push_back(Joueur(listePseudos[3],"Bleue",4));
        listeFictive.push_back(Joueur(listePseudos[4],"Bleue",5));
        listeFictive.push_back(Joueur(listePseudos[5],"Bleue",6));
        listeFictive.push_back(Joueur(listePseudos[6],"Bleue",7));

            for(int i=0;i<nombre;i++)
            {
                AjoutJoueur(listeFictive[(static_cast<unsigned int> (i))]);
            }
            nbrouge=2;
            nbbleu=5;
            break;
        }
        case 8:
        {
        listeFictive.push_back(Joueur(listePseudos[0],"Bleue",1));
        listeFictive.push_back(Joueur(listePseudos[1],"Rouge",2));
        listeFictive.push_back(Joueur(listePseudos[2],"Rouge",3));
        listeFictive.push_back(Joueur(listePseudos[3],"Bleue",4));
        listeFictive.push_back(Joueur(listePseudos[4],"Bleue",5));
        listeFictive.push_back(Joueur(listePseudos[5],"Bleue",6));
        listeFictive.push_back(Joueur(listePseudos[6],"Bleue",7));
        listeFictive.push_back(Joueur(listePseudos[7],"Rouge",8));
            for(int i=0;i<nombre;i++)
            {
                AjoutJoueur(listeFictive[(static_cast<unsigned int> (i))]);
            }
            nbrouge=3;
            nbbleu=5;
            break;
        }
    }
    listeFictive.clear();
}


void Jeu::AjoutJoueur(Joueur j)
{
    listeJoueur.push_back(j);
    nbJoueur++;
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
    for (unsigned int i=0;i<paquetPrincipal.size();i++)
    {
        if(paquetPrincipal[i].trouver==true)
        {
            paquetPrincipal.erase(paquetPrincipal.begin()+i);
            i--;
        }
    }

    std::random_shuffle(paquetPrincipal.begin(),paquetPrincipal.end());

    for(unsigned int i=0;i<paquetPrincipal.size();i++){
        paquetPrincipal[i].idCarte=i;
    }

    if(distribution==1)
    {
        for(unsigned int a=0;a<listeJoueur.size();a++)
        {
            for(unsigned int b=0;b<listeJoueur[a].paquetJoueur.size();b++)
            {
                listeJoueur[a].paquetJoueur.clear();
            }
         }
        distributionCartesJoueurs();
    }

}

void Jeu::retirerCarte(unsigned int idCarte)
{
    for(unsigned int i=0;i<paquetPrincipal.size();i++)
    {
        if(idCarte==paquetPrincipal[i].idCarte)
        {
            if(paquetPrincipal[i].typeCarte=="filSecurise")
            {
                nbrCarteSecurise--;
                printf("Vous avez retiré un fil securise\n");
            }
            else if(paquetPrincipal[i].typeCarte=="filDesamorce")
            {
                nbrCarteDesamorce--;
                printf("Vous avez retiré un fil Desamorce\n");
            }
            else if(paquetPrincipal[i].typeCarte=="bombe")
            {
                bombe--;
                printf("Vous avez retiré une bombe\n");
            }
            paquetPrincipal[idCarte].revelerCarte();
            for(unsigned int a=0;a<listeJoueur.size();a++)
            {
                for(unsigned int b=0;b<listeJoueur[a].paquetJoueur.size();b++)
                {
                    if(listeJoueur[a].paquetJoueur[b].idCarte==idCarte)
                    {
                        listeJoueur[a].paquetJoueur[b].revelerCarte();
                    }
                }
            }
        }
    }
}

unsigned int Jeu::taillePaquet()
{
    return static_cast<unsigned int>(paquetPrincipal.size());
}

void Jeu::distributionCartesJoueurs()
{
    unsigned int nbrCartesParJ = (static_cast<unsigned int> (paquetPrincipal.size()))/nbJoueur;
    printf("%d cartes par joueur à ce tour ci \n",nbrCartesParJ);
    unsigned i,j,compte=0;
    for(i=0;i<nbrCartesParJ;i++)
    {
        for(j=0;j<nbJoueur;j++)
        {
            Carte c=paquetPrincipal[compte];
            listeJoueur[j].paquetJoueur.push_back(paquetPrincipal[compte]);
            compte++;
        }
    }
}


void Jeu::afficherPaquetJoueur(const Joueur &player)
{
    unsigned int i;
    for(i=0;i<player.paquetJoueur.size();i++)
    {
        if((player.paquetJoueur[i].trouver)==false){
            printf("Id carte : %d\n",player.paquetJoueur[i].idCarte);
          }

    }
}

void Jeu::afficherCarteTrouver(){
    printf("on rentre dans affichage carte trouver\n");
    for(unsigned int i=0;i<paquetPrincipal.size();i++){
        if(paquetPrincipal[i].trouver==true){
            printf("carte %d est trouvée\n",i);
        }

    }
}

unsigned int Jeu::finPartie()
{
    std::cout <<"manche : " << manche <<" tour : " << tour << std::endl;
    if(bombe==0 || (manche==4 && tour==0))
    {
        printf("Victoire des ROUGES !\n");
        return 1;
    }
    else if(nbrCarteDesamorce==0)
    {
        printf("Victoire des BLEUS !\n");
        return 2;
    }
    return 0;
}

unsigned int Jeu::quiAcetteCarte(unsigned int idKart)
{

    for(unsigned int i=0;i<listeJoueur.size();i++)
    {
        for(unsigned int j=0;j<listeJoueur[i].paquetJoueur.size();j++)
        {
            if(listeJoueur[i].paquetJoueur[j].idCarte==idKart)
            {
                 return i;
            }
        }
    }
    return 9;
}

void Jeu::suppressionPartie()
{
    for(int i=0;i<(static_cast<int> (listeJoueur.size()));i++)
    {
        listeJoueur[(static_cast<unsigned int> (i))].paquetJoueur.clear();
    }
    listeJoueur.clear();
    paquetPrincipal.clear();

    nbJoueur=0;
    nbrCarteSecurise=0;
    nbrCarteDesamorce=0;
    bombe=1;
    tour=0;
    manche=0;
    nbrouge=0;
    nbbleu=0;
    joueurCourant=0;
}
