#include "Plateau_solo.h"
#include "ui_plateau_solo.h"
#include "mainwindow.h"
#include <iostream>
#include <QMessageBox>

Plateau_solo::Plateau_solo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Plateau_solo),
    m_jeu(),
    m_joueur_buttons(),
    m_cartes_milieu(),
    m_carte(),
    m_carte_buttons(),
    m_selection_carte()

{
    ui->setupUi(this);
    m_selection_carte[0]=nullptr;

    defaite = new Defaite(this);
    defaite->setHidden(true);

    shuffle = new Shuffle(this);
    shuffle->setHidden(true);

    victoire = new Victoire(this);
    victoire->setHidden(true);

    finPartie = new FinPartie(this);
    finPartie->setHidden(true);

    profil = new Profil(this);
    profil->setHidden(true);

    options = new Options(this);
    options-> setHidden(true);

    vue_cartes = new Vue_cartes(this);
    vue_cartes -> setHidden(true);
}

Plateau_solo::~Plateau_solo()
{
    delete ui;
}



/***************************************************************
 * Fonction qui permet de réafficher le Plateau_solo de jeu
 * *************************************************************/

void Plateau_solo::reafficherContenu()
{
    defaite->setHidden(true);
    profil->setHidden(true);
    vue_cartes -> setHidden(true);
    ui->centralWidget->setHidden(false);
}


/***************************************************************
 * Fonction qui initialise le jeu
 * *************************************************************/

void Plateau_solo::on_bouton_play_pressed(QStringList listePseudos)
{
    this->setHidden(false);
    reafficherContenu();
    m_jeu.creationPartie(listePseudos);
    m_jeu.creationPaquet();
    m_carte_buttons.resize(m_jeu.paquetPrincipal.size());
    m_joueur_buttons.resize(m_jeu.listeJoueur.size());
    m_jeu.distributionCartesJoueurs();
    m_jeu.melangerPaquet(1);
    m_jeu.joueurCourant=0;


    infos_jeu();
    initFJ(0);
    AuTourDe(0);
    creation_joueurs();
    affichageCarteJoueurUnique();
}

/***************************************************************
 * Fonction qui affiche les boutons avec les pseudos des joueurs
 * *************************************************************/

void Plateau_solo::creation_joueurs()
{
    clearLayout(ui->gridLayout_joueurs);
    int position=50;
    for(unsigned int i=0; i<m_jeu.nbJoueur; ++i)
    {
        if(m_jeu.joueurCourant!=i)
        {
            Joueur_button* &joueur_bouton =  m_joueur_buttons[i];
            joueur_bouton = new Joueur_button(this,i,m_jeu.listeJoueur[i].pseudo);
            joueur_bouton->setText(joueur_bouton->joueur_nom);
            joueur_bouton->setCursor(Qt::PointingHandCursor);
            ui->gridLayout_joueurs->addWidget(joueur_bouton, 50, position);
            position+=1;
            QObject::connect(joueur_bouton, SIGNAL(released()), this , SLOT(on_joueur_button_pushed()));
        }
    }
}

/***************************************************************
 * Fonction qui efface le Layout donné en paramètre
 * *************************************************************/

void Plateau_solo::clearLayout(QLayout *layout)
{
    QLayoutItem *item;
    while((item = layout->takeAt(0)))
    {
        if (item->layout()!=nullptr)
        {
            clearLayout(item->layout());
            delete item->layout();
        }
        if (item->widget()!=nullptr)
        {
           delete item->widget();
        }
        delete item;
    }
}


/************************************************************************************
 * Fonction qui affiche les cartes retournées d'un joueur lorsqu'on clique sur le
 * bouton du joueur (en haut).
 * **********************************************************************************/

void Plateau_solo::on_joueur_button_pushed()
{
    QPushButton* pushButtonSender = qobject_cast<QPushButton*>(sender());
    Joueur_button* joueurButtonSender = dynamic_cast<Joueur_button*>(pushButtonSender);
    clearLayout(ui->gridLayout_jeu_milieu);
    int position=1;
    int taille = m_jeu.listeJoueur[joueurButtonSender->joueur_position].paquetJoueur.size();
    m_cartes_milieu.resize(taille);

    for(unsigned int i=0; i<(static_cast<unsigned int>(taille)); ++i)
    {
        Carte_button* &carte_bouton = m_cartes_milieu[i];
        const Carte &carte = m_jeu.listeJoueur[joueurButtonSender->joueur_position].paquetJoueur[i];
        if(carte.trouver==false)
        {
            carte_bouton = new Carte_button(this, carte.idCarte);
            carte_bouton->setFixedSize(165,305);

            QIcon icon;
            icon.addFile(QString::fromUtf8(":/icones/dosCarte"));
            carte_bouton->setIconSize(QSize(220,280));
            carte_bouton->setCursor(Qt::PointingHandCursor);

            ui->gridLayout_jeu_milieu->addWidget(carte_bouton, 1, position);
            position+=1;
            QObject::connect(carte_bouton, SIGNAL(released()), this , SLOT(on_carte_button_milieu_pushed()));
        }
    }
 }

void Plateau_solo::afficherCarteCoupee(unsigned idCarte)
{
    clearLayout(ui->gridLayout_jeu_milieu);
    const Carte &carte = m_jeu.paquetPrincipal[idCarte];
    Carte_button* cartebutton = new Carte_button(this,idCarte);

     cartebutton->setFixedSize(165,305);
          QIcon icon;
          if(carte.typeCarte=="bombe")
          {
              cartebutton->setStyleSheet("border-image: url(:/icones/bombe) 0 0 0 0 stretch stretch;"
                                              "border-radius : 10px;");
          }
          else if (carte.typeCarte=="filSecurise")
          {
              cartebutton->setStyleSheet("border-image: url(:/icones/filNormal) 0 0 0 0 stretch stretch;"
                                              "border-radius : 10px;");
          }
          else if (carte.typeCarte=="filDesamorce")
          {
              cartebutton->setStyleSheet("border-image: url(:/icones/fils_desamorcage) 0 0 0 0 stretch stretch;"
                                              "border-radius : 10px;");
          }
          cartebutton->setIcon(icon);
          cartebutton->setIconSize(QSize(180,280));
          clearLayout(ui->gridLayout_jeu_milieu);
          ui->gridLayout_jeu_milieu->addWidget(cartebutton, 1, 3);

          QEventLoop loop;
          QTimer::singleShot(2000, &loop, SLOT(quit()));
          loop.exec();

}
/***************************************************************
 * Fonction qui va afficher/retourner la carte que l'on souhaite
 * couper lorsque que l'on clique dessus (cartes du milieu).
 * Elle va également retirer la carte du paquet puis update le jeu
 * *************************************************************/

void Plateau_solo::on_carte_button_milieu_pushed()
{
    QPushButton* pushButtonSender = qobject_cast<QPushButton*>(sender());
    Carte_button* cardButtonSender = dynamic_cast<Carte_button*>(pushButtonSender);
    unsigned int a=m_jeu.quiAcetteCarte(cardButtonSender->m_cardPosition);

     const Carte &carte = m_jeu.paquetPrincipal[cardButtonSender->m_cardPosition];
     cardButtonSender = new Carte_button(this, carte.idCarte);
     cardButtonSender->setFixedSize(165,305);
     QIcon icon;
     if(carte.typeCarte=="bombe")
     {
         cardButtonSender->setStyleSheet("border-image: url(:/icones/bombe) 0 0 0 0 stretch stretch;"
                                         "border-radius : 10px;");
         //icon.addFile(QString::fromUtf8(":/icones/bombe"));
     }
     else if (carte.typeCarte=="filSecurise")
     {
         cardButtonSender->setStyleSheet("border-image: url(:/icones/filNormal) 0 0 0 0 stretch stretch;"
                                         "border-radius : 10px;");
     }
     else if (carte.typeCarte=="filDesamorce")
     {
         cardButtonSender->setStyleSheet("border-image: url(:/icones/fils_desamorcage) 0 0 0 0 stretch stretch;"
                                         "border-radius : 10px;");
     }
     cardButtonSender->setIcon(icon);
     cardButtonSender->setIconSize(QSize(180,280));
     clearLayout(ui->gridLayout_jeu_milieu);
     ui->gridLayout_jeu_milieu->addWidget(cardButtonSender, 1, 3);

     QEventLoop loop;
     QTimer::singleShot(1000, &loop, SLOT(quit()));
     loop.exec();


     m_jeu.retirerCarte(cardButtonSender->m_cardPosition);
     m_carte_buttons.resize(m_jeu.paquetPrincipal.size());
     ui->labelAvotre->setText("");
     int nombre=m_jeu.nbJoueur;
     int chezQui;
     int quelleCarte,taillePaquet=0;
     while(a!=0 && m_jeu.finPartie()==0)
     {
         clearLayout(ui->gridLayout_cards);
         affichageCarteJoueurUnique();
         chezQui = qrand() % nombre;
         taillePaquet=m_jeu.listeJoueur[chezQui].paquetJoueur.size();
         quelleCarte=qrand() % taillePaquet;
         m_jeu.retirerCarte(m_jeu.listeJoueur[chezQui].paquetJoueur[quelleCarte].idCarte);
         afficherCarteCoupee(m_jeu.listeJoueur[chezQui].paquetJoueur[quelleCarte].idCarte);
         a=m_jeu.quiAcetteCarte(m_jeu.listeJoueur[chezQui].paquetJoueur[quelleCarte].idCarte);
         evolution_tour();
         resultats();
         infos_jeu();
         creation_joueurs();
         clearLayout(ui->gridLayout_jeu_milieu);
     }
     AuTourDe(a);
     evolution_tour();
     resultats();
     infos_jeu();
     creation_joueurs();
     clearLayout(ui->gridLayout_jeu_milieu);
}


void Plateau_solo::affichageCarteJoueurUnique()
{
    clearLayout(ui->gridLayout_cards);
    int position=0;
    for(unsigned int i=0; i<m_jeu.listeJoueur[m_jeu.joueurCourant].paquetJoueur.size(); ++i)
    {
        const Carte &carte = m_jeu.listeJoueur[m_jeu.joueurCourant].paquetJoueur[i];
        if(carte.trouver==false)
        {
            QLabel * label_carte=new QLabel(this);
            label_carte->setGeometry(0, 0, 200, 250);

            QIcon icon;
            if(carte.typeCarte=="bombe")
            {
                QPixmap *pix=new QPixmap(":/icones/bombe");
                int l = label_carte->width();
                int h = label_carte->height();
                label_carte->setPixmap(pix->scaled(l,h,Qt::KeepAspectRatio));
            }
            else if (carte.typeCarte=="filSecurise")
            {
                QPixmap *pix=new QPixmap(":/icones/filNormal");
                int l = label_carte->width();
                int h = label_carte->height();
                label_carte->setPixmap(pix->scaled(l,h,Qt::KeepAspectRatio));
            }
            else if (carte.typeCarte=="filDesamorce")
            {
                QPixmap *pix=new QPixmap(":/icones/fils_desamorcage");
                int l = label_carte->width();
                int h = label_carte->height();
                label_carte->setPixmap(pix->scaled(l,h,Qt::KeepAspectRatio));
            }
            position+=1;
            ui->gridLayout_cards->addWidget(label_carte, 1, position);

        }
   }

        ui->profilJoueur->setFixedSize(145,270);
        QIcon icon;
        const QString imageP = ":/icones/persoJoueur"+QString::number(1);
        icon.addFile(imageP);
        ui->profilJoueur->setIcon(icon);
        ui->profilJoueur->setIconSize(QSize(240,280));


}

/***************************************************************
 * Fonction qui permet de définir le premier joueur qui va jouer
 * *************************************************************/

void Plateau_solo::initFJ(unsigned int numero)
{
    int taille = m_jeu.listeJoueur[numero].paquetJoueur.size();
    m_cartes_milieu.resize(taille);

    for(unsigned int i=0; i<(static_cast<unsigned int>(taille)); ++i)
    {
        Carte_button* &carte_bouton = m_cartes_milieu[i];
        const Carte &carte = m_jeu.listeJoueur[numero].paquetJoueur[i];
        carte_bouton = new Carte_button(this, carte.idCarte);
   }
}

void Plateau_solo::on_profilJoueur_pressed()
{
    if(m_jeu.listeJoueur[m_jeu.joueurCourant].equipe=="Rouge")
    {
       ui->centralWidget->setHidden(true);
       profil->setHidden(false);
       profil->affichageSolo(1);
    }

    else
    {
        ui->centralWidget->setHidden(true);
        profil->setHidden(false);
        profil->affichageSolo(2);
    }
}
/********************************************************************
 * Fonction qui informe du joueur qui doit jouer
 * *****************************************************************/

void Plateau_solo::AuTourDe(unsigned int idRecu)
{
    ui->labelAvotre->setText(tr("A votre tour"));
    m_jeu.joueurCourant=idRecu;

}

/********************************************************************
 *
 * *****************************************************************/

void Plateau_solo::recommencer()
{
    m_carte.clear();
    m_carte_buttons.clear();
    m_cartes_milieu.clear();
    m_joueur_buttons.clear();
    m_jeu.suppressionPartie();

    this->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        mv->display_contenu();
    }
}

/*****************************************************
 * Fonction qui gère l'affichage des informations du jeu
 * dans la zone à droite
 * ***************************************************/
void Plateau_solo::infos_jeu()
{
        QIcon icon;
        clearLayout(ui->gridLayout_info_manches);

        //Infos rouges
        QLabel *nb_rouge=new QLabel;
        nb_rouge->setFixedSize(50,50);
        nb_rouge->setStyleSheet("QLabel { background-color: #BA5959; "
                                "border-radius:20px;}");
        ui->gridLayout_info_manches->addWidget(nb_rouge,0, 0);
        nb_rouge->setText(QString("    ")+ QString::number(m_jeu.nbrouge));

        QLabel *nb_rouge_txt=new QLabel;
        nb_rouge_txt->setText(tr("Joueurs rouges"));
        ui->gridLayout_info_manches->addWidget(nb_rouge_txt,0, 1);


        //Infos bleus
        QLabel *nb_bleu=new QLabel;
        nb_bleu->setFixedSize(50,50);
        nb_bleu->setStyleSheet("QLabel { background-color: #5D3C9B; "
                               "border-radius : 20px;}");
        ui->gridLayout_info_manches->addWidget(nb_bleu, 1,0);
        nb_bleu->setText(QString("    ")+ QString::number(m_jeu.nbbleu));

        QLabel *nb_bleu_txt=new QLabel;
        nb_bleu_txt->setText(tr("Joueurs bleus"));
        ui->gridLayout_info_manches->addWidget(nb_bleu_txt,1, 1);


        //infos desamorçage
        QPushButton *restant=new QPushButton;
        restant->setFixedSize(50,80);
        icon.addFile(QString::fromUtf8(":/icones/fils_desamorcage"));
        restant->setIcon(icon);
        restant->setIconSize(QSize(200,100));
        ui->gridLayout_info_manches->addWidget(restant, 2, 0);

        QLabel *label3=new QLabel;
        const QString sTexte3 = QString::number(m_jeu.nbrCarteDesamorce);
        label3->setText(sTexte3 + QString(tr(" restantes")));
        ui->gridLayout_info_manches->addWidget(label3, 2,1);

        //infos manches
        QLabel *label_manche=new QLabel;
        const QString sTexte_manche = QString::number(m_jeu.manche+1);
        label_manche->setText(QString(tr("Manche : ")+ sTexte_manche));
        ui->gridLayout_info_manches->addWidget(label_manche,3,0);

        //infos tour
        QLabel *label_tour=new QLabel;
        const QString sTexte_tour = QString::number(m_jeu.tour+1);
        label_tour->setText(QString(tr("Tour : ")+ sTexte_tour));
        ui->gridLayout_info_manches->addWidget(label_tour,4,0);

        //Bouton quitter
        bouton_quitter = new QPushButton(tr("Quitter la partie"), this);
        ui->gridLayout_bouton->addWidget(bouton_quitter,1,0);
        bouton_quitter->setCursor(Qt::PointingHandCursor);
        QObject::connect(bouton_quitter, SIGNAL(released()), this , SLOT(quitterPartie()));
}

/*******************************************************************
 * Fonction qui créer la boite de dialogue
 * *****************************************************************/
void Plateau_solo::quitterPartie()
{
    QMessageBox message;
    message.setText(tr("Voulez-vous vraiment quitter la partie?"));
    message.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
    int retour = message.exec();

    switch(retour)
    {
      case QMessageBox::Yes:
          retour_accueil();
          break;
      case QMessageBox::No:
          break;
      default:
          break;
    }
}

void Plateau_solo::evolution_tour()
{
      m_jeu.tour++;
      if((m_jeu.manche!=4 && m_jeu.tour==m_jeu.listeJoueur.size()))
      {
          m_jeu.manche++;
          m_jeu.tour=0;
          if(m_jeu.finPartie()==0)
          {
              melanger();
          }
      }
}

/******************************************
 * Fonction qui mélange les cartes
 * ****************************************/

void Plateau_solo::melanger()
{
    m_jeu.melangerPaquet(1);
    shuffle->setHidden(false);
    ui->centralWidget->setHidden(true);


    QEventLoop loop;
    QTimer::singleShot(1000, &loop, SLOT(quit()));
    loop.exec();

    shuffle->setHidden(true);
    ui->centralWidget->setHidden(false);
}

/******************************************
 * Fonction qui retourne au menu principal
 * ****************************************/
void Plateau_solo::retour_accueil()
{
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        mv->display_contenu();
    }
}


/*****************************************************
 * Fonction qui affiche les wireframes de victoire ou
 * defaite, attend 2 secondes puis appelle fin_partie
 * ***************************************************/
void Plateau_solo::resultats()
{
    unsigned int retour = m_jeu.finPartie();
    if(retour==1)//Equipe rouge
    {
        defaite = new Defaite(this);
        MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
        if (mv!= nullptr){
            mv->display_defaite();
        }
        QEventLoop loop;
        QTimer::singleShot(2000, &loop, SLOT(quit()));
        loop.exec();

        finPartie = new FinPartie(this);
        if (mv!= nullptr){
            mv->display_finpartie();
        }
        fin_partie(1);
    }

    if(retour==2) //Equipe bleue
    {
        victoire = new Victoire(this);

        MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
        if (mv!= nullptr){
            mv->display_victoire();
        }
        QEventLoop loop;
        QTimer::singleShot(2000, &loop, SLOT(quit()));
        loop.exec();

        finPartie = new FinPartie(this);
        if (mv!= nullptr){
            mv->display_finpartie();
        }
        fin_partie(2);
    }
}

/*******************************************************
 * Fonction qui affiche le wireframe des scores lorsque
 * la partie est terminée
 * *****************************************************/
void Plateau_solo::fin_partie(int numero)
{
    if(numero==1) //Rouge gagnant
    {
        ui->centralWidget->setHidden(true);
        finPartie->setHidden(false);
        finPartie->tableau_de_scores(1,m_jeu.listeJoueur);
    }

    if(numero==2) //bleus gagnant
    {
        ui->centralWidget->setHidden(true);
        finPartie->setHidden(false);
        finPartie->tableau_de_scores(2,m_jeu.listeJoueur);
    }
}

