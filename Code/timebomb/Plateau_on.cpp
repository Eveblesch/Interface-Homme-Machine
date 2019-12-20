#include "Plateau_on.h"
#include "ui_plateau_on.h"
#include "mainwindow.h"
#include <iostream>
QSize Plateau_on::s_cardFixedSize= QSize(40, 80);

Plateau_on::Plateau_on(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Plateau_on),
    m_joueur_buttons(),
    m_cartes_milieu(),
    m_carte(), //tableau de carte
    m_carte_buttons(), //tableau de boutons
    m_selection_carte()

{
    ui->setupUi(this);
    m_selection_carte[0]=nullptr;

    defaite = new Defaite_on(this);
    defaite->setHidden(true);

    shuffle = new Shuffle(this);
    shuffle->setHidden(true);

    victoire = new Victoire_on(this);
    victoire->setHidden(true);

    finPartie = new FinPartie_on(this);
    finPartie->setHidden(true);

    profil = new Profil(this);
    profil->setHidden(true);

    options = new Options(this);
    options-> setHidden(true);


    timer = new QTimer();
    //timer->setSingleShot(true);
    timer->setInterval(1000);
    QObject::connect(timer, SIGNAL(timeout()), this , SLOT(compter()));

    vue_cartes = new Vue_cartes_on(this);
    vue_cartes -> setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr) {
        connect(&mv->c,SIGNAL(gotChat(QStringList)),this,SLOT(upChat(QStringList)));
        connect(&mv->c,SIGNAL(gotFullStart()),this,SLOT(on_bouton_play_pressed()));
        connect(&mv->c,SIGNAL(gotTimeout()),this,SLOT(turnTimeout()));
        connect(this,SIGNAL(timeoutLocal()),this,SLOT(turnTimeout()));
        connect(&mv->c,SIGNAL(gotTurnInfo(QStringList)),this,SLOT(AuTourDe(QStringList)));
        connect(&mv->c,SIGNAL(gotDeck(QStringList)),this,SLOT(setupDeck(QStringList)));
        connect(&mv->c,SIGNAL(gotAnnonce()),this,SLOT(refreshAnnonces()));
        connect(&mv->c,SIGNAL(gotEndgameMainstats()),this,SLOT(resultats()));
        connect(&mv->c,SIGNAL(gotInfoStart()),this,SLOT(refreshInfoRight()));
        connect(&mv->c,SIGNAL(gotInfoNewTurn()),this,SLOT(refreshInfoRight()));
        connect(&mv->c,SIGNAL(gotInfoNewRound()),this,SLOT(refreshInfoRight()));
        connect(&mv->c,SIGNAL(gotInfoNewRound()),this,SLOT(melanger()));
        connect(&mv->c,SIGNAL(gotInfoEvent()),this,SLOT(refreshInfoRight()));
        connect(&mv->c,SIGNAL(gotGameOver()),this,SLOT(nothandledyet()));
        //connect(this,SIGNAL(readyToGo()),this,SLOT(on_bouton_play_pressed()));
        connect(&mv->c,SIGNAL(gotFullDeck(QStringList)),this,SLOT(fillfulldeck(QStringList)));
        //connect(&mv->c,SIGNAL(gotFullStart()),this,SLOT(on_bouton_start_pressed()));
        connect(&mv->c,SIGNAL(gotAllRoles(QStringList)),this,SLOT(fillallroles(QStringList)));
        //connect(&mv->c,SIGNAL(),this,SLOT());
        chatLabels.append(ui->message0);
        chatLabels.append(ui->message1);
        chatLabels.append(ui->message2);
        chatLabels.append(ui->message3);
        chatLabels.append(ui->message4);
        chatLabels.append(ui->message5);
        chatLabels.append(ui->message6);
        chatLabels.append(ui->message7);
        chatLabels.append(ui->message8);
        chatLabels.append(ui->message9);
        chatLabels.append(ui->message10);
        lEmptyMsgLab = 10;
    }
}

Plateau_on::~Plateau_on()
{
    delete ui;
}

void Plateau_on::turnTimeout() {
    qDebug() << "[client] timeouted" << endl;
    ui->label_timer->setText("Le temps est écoulé");
    timer->stop();

    //m_jeu.retirerCarte(cardButtonSender->m_cardPosition);
    m_carte_buttons.resize(taillePaquetComplet);

    //AuTourDe(2);
    //info_joueur(2);
//    evolution_tour();
    infos_jeu();
    creation_joueurs();
    clearLayout(ui->gridLayout_jeu_milieu);
}

void Plateau_on::compter()
{
        int rebours = ui->label_timer->text().remove(QRegExp("[^0-9]+")).toInt();
        if(rebours > 1)
        {
            rebours--;
            ui->label_timer->setText(tr("Temps restant : ") + QString::number(rebours) + tr(" secondes"));
        }
        else
        {
            emit timeoutLocal();
        }
}


//void Plateau_on::on_carte_button_pushed()
//{
//    //std::cout << "PRESSE " << std::endl;
//    QPushButton* pushButtonSender = qobject_cast<QPushButton*>(sender()); //recupère le bouton appuyé
//    Carte_button* cardButtonSender = dynamic_cast<Carte_button*>(pushButtonSender);
//  //  std::cout << "id Bouton pressé " << cardButtonSender->m_cardPosition << std::endl;
//    const Carte& carte = m_jeu.paquetPrincipal[cardButtonSender->m_cardPosition];
//    //std::cout << "id Carte de ce bouton " << carte.idCarte << std::endl;
//}

void Plateau_on::reafficherContenu()
{
    defaite->setHidden(true);
    profil->setHidden(true);
    vue_cartes -> setHidden(true);
    ui->centralWidget->setHidden(false);
}

void Plateau_on::on_bouton_play_pressed() //ok en fait ça c'est le start ## signal quand tout est prêt
{
    qDebug() << "[client] init plateau" << endl;
    QEventLoop loop;
    QTimer::singleShot(50, &loop, SLOT(quit()));
    loop.exec();

    this->setHidden(false);
    reafficherContenu();
    //m_jeu.creationPartie(listePseudos);
    //m_jeu.creationPaquet();

    m_carte_buttons.resize(taillePaquetComplet);
    m_joueur_buttons.resize(static_cast<unsigned long>(pseudos.size()));

    //m_jeu.distributionCartesJoueurs();
    //m_jeu.melangerPaquet(1);
    //m_jeu.joueurCourant=2;


    infos_jeu();

    initFJ(2);
    //info_joueur();
    //AuTourDe(2);
    creation_joueurs();
}


void Plateau_on::creation_joueurs()
{
    clearLayout(ui->gridLayout_joueurs);
    int position=50;
    for(unsigned int i=0; i<nbjoueurs; ++i)
    {
        if(indexjoueur!=i)
        {
            Joueur_button* &joueur_bouton =  m_joueur_buttons[i];
            joueur_bouton = new Joueur_button(this,i,pseudos[static_cast<int>(i)]);
            joueur_bouton->setText(joueur_bouton->joueur_nom);
            joueur_bouton->setCursor(Qt::PointingHandCursor);
            joueur_bouton->setVisible(true);
            ui->gridLayout_joueurs->addWidget(joueur_bouton, 50, position);
            position+=1;
            QObject::connect(joueur_bouton, SIGNAL(released()), this , SLOT(on_joueur_button_pushed()));
            QLabel* bombicon = new QLabel();
            QLabel* difficon = new QLabel();
            QLabel* nbdiff = new QLabel();
            nbdiff->setText("3");
            QPixmap bombiconpix(":icones/images/bombicon.png");
            QPixmap difficonpix(":icones/images/dificon.png");
            bombicon->setPixmap(bombiconpix);
            difficon->setPixmap(difficonpix);
            bombicon->setMask(bombiconpix.mask());
            difficon->setMask(difficonpix.mask());
            nbdiff->setText("0");
            bombicon->setVisible(false);
            difficon->setVisible(false);
            nbdiff->setVisible(false);

//            annonceslayouts[i] = new QHBoxLayout;
//            ui->gridLayout_joueurs->addLayout(annonceslayouts[i]);
//            ui->gridLayout_joueurs->addWidget(bombicon);
//            ui->gridLayout_joueurs->addWidget(difficon,0,1);
//            ui->gridLayout_joueurs->addWidget(nbdiff,0,2);

        }
        else //On affiche le nom du joueur qui joue en bas
        {
            Joueur_button* &joueur_bouton =  m_joueur_buttons[i];
            joueur_bouton = new Joueur_button(this,i,pseudos[static_cast<int>(i)]);
            joueur_bouton->setText(joueur_bouton->joueur_nom);
            //joueur_bouton->setFixedSize(140,50);
            joueur_bouton->setVisible(true);
            ui->gridLayout_info_joueur->addWidget(joueur_bouton,0,0);

        }
    }
}


void Plateau_on::clearLayout(QLayout *layout)
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

void Plateau_on::on_carte_button_milieu_pushed()
{
    QPushButton* pushButtonSender = qobject_cast<QPushButton*>(sender());
    Carte_button* cardButtonSender = dynamic_cast<Carte_button*>(pushButtonSender);


     /*AFFICHER LA CARTE COUPEE*/
     const Carte &carte = paquet_principal[cardButtonSender->m_cardPosition];
     cardButtonSender = new Carte_button(this, carte.idCarte);
     //cardButtonSender->setText(QString::fromStdString(std::to_string(carte.idCarte)));
     cardButtonSender->setFixedSize(125,235); /*rapport de proportionnalité image cartes = 1.88*/
     QIcon icon;
     if(carte.typeCarte=="bombe")
     {
         icon.addFile(QString::fromUtf8(":/icones/bombe"));
     }
     else if (carte.typeCarte=="filSecurise")
     {
         icon.addFile(QString::fromUtf8(":/icones/filNormal"));
     }
     else if (carte.typeCarte=="filDesamorce")
     {
         icon.addFile(QString::fromUtf8(":/icones/fils_desamorcage"));
     }

     cardButtonSender->setIcon(icon);
     cardButtonSender->setIconSize(QSize(160,260));
     clearLayout(ui->gridLayout_jeu_milieu);
     ui->gridLayout_jeu_milieu->addWidget(cardButtonSender, 1, 3);
     MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
     if (mv!=nullptr) {
         emit mv->c.cut(joueurCut,cardButtonSender->m_cardPosition);
     }

     QEventLoop loop;
     QTimer::singleShot(2000, &loop, SLOT(quit()));
     loop.exec();
     /****************/

     //m_jeu.retirerCarte(cardButtonSender->m_cardPosition);
     m_carte_buttons.resize(paquet_principal.size());

     //AuTourDe(a);
     info_joueur();
//     evolution_tour();
     infos_jeu();
     creation_joueurs();
     clearLayout(ui->gridLayout_jeu_milieu);


}

/************************************************************************************
 *
 *
 * **********************************************************************************/

void Plateau_on::on_joueur_button_pushed()
{
    QPushButton* pushButtonSender = qobject_cast<QPushButton*>(sender());
    Joueur_button* joueurButtonSender = dynamic_cast<Joueur_button*>(pushButtonSender);
    clearLayout(ui->gridLayout_jeu_milieu);
    unsigned int position=1;
    unsigned int taille = nbcartes_joueurs[static_cast<int>(joueurButtonSender->joueur_position)];
    m_cartes_milieu.resize(taille);

    for(unsigned int i=0; i<(static_cast<unsigned int>(taille)); ++i)
    {

        Carte_button* &carte_bouton = m_cartes_milieu[i];
        const Carte &carte = cartesParJoueur[joueurButtonSender->joueur_position][i];
        if(carte.trouver==false){
            carte_bouton = new Carte_button(this, carte.idCarte);
            carte_bouton->setText(QString::fromStdString(std::to_string(carte.idCarte)));
            carte_bouton->setFixedSize(130,260);

            QIcon icon;
            icon.addFile(QString::fromUtf8(":/icones/dosCarte"));
            carte_bouton->setIcon(icon);
            carte_bouton->setIconSize(QSize(160,260));
            carte_bouton->setCursor(Qt::PointingHandCursor);

            ui->gridLayout_jeu_milieu->addWidget(carte_bouton, 1, static_cast<int>(position));
            position+=1;
            joueurCut = joueurButtonSender->joueur_position;
            QObject::connect(carte_bouton, SIGNAL(released()), this , SLOT(on_carte_button_milieu_pushed()));
        }

    }
 }

void Plateau_on::initFJ(unsigned int numero)
{
    unsigned int taille = nbcartes;
    m_cartes_milieu.resize(taille);

    for(unsigned int i=0; i<(static_cast<unsigned int>(taille)); ++i)
    {
        Carte_button* &carte_bouton = m_cartes_milieu[i];
        const Carte &carte = cartesParJoueur[numero][i];
        carte_bouton = new Carte_button(this, carte.idCarte);
   }
}
/********************************************************************
 * Fonction qui informe du joueur qui doit jouer
 * *****************************************************************/

void Plateau_on::AuTourDe(QStringList l)
{
    qDebug() << "[client] moving turn" << endl;
    int position=50;
    clearLayout(ui->gridLayout_cards);
    joueurCourant = static_cast<unsigned int>(l[2].toInt());
   // std::cout << "Au tour du joueur numéro : " << idRecu << std::endl;
    for(unsigned int j=0;j<cartesParJoueur[joueurCourant].size();j++)
    {
        Carte_button* &carte_bouton = m_cartes_milieu[j];
        const Carte &carte = cartesParJoueur[joueurCourant][j];

        if(carte.trouver==false){
            carte_bouton = new Carte_button(this, carte.idCarte);
            //carte_bouton->setText(QString::fromStdString(std::to_string(carte.idCarte)));
            carte_bouton->setFixedSize(88,160);
            QIcon icon;

            if(carte.typeCarte=="bombe")
            {
                icon.addFile(QString::fromUtf8(":/icones/bombe"));
            }
            else if (carte.typeCarte=="filSecurise")
            {
                icon.addFile(QString::fromUtf8(":/icones/filNormal"));
            }
            else if (carte.typeCarte=="filDesamorce")
            {
                icon.addFile(QString::fromUtf8(":/icones/fils_desamorcage"));
            }
            carte_bouton->setIcon(icon);
            carte_bouton->setIconSize(QSize(88,160));
            ui->gridLayout_cards->addWidget(carte_bouton, 50, position);
            position +=12;
        }
    }
}
void Plateau_on::recommencer()
{
    m_carte.clear();
    m_carte_buttons.clear();
    m_cartes_milieu.clear();
    m_joueur_buttons.clear();
    //m_jeu.suppressionPartie();

    this->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        mv->display_choix_partie();
    }
}

/*************************************************************
 *  Fonction qui affiche les informations sur le joueur courant
 * (cadre bas à gauche) ç-à-d pseudo, info carte,
 * nombre de diffuse possédé, bombe ou pas
 * ************************************************************/
void Plateau_on::info_joueur()
{
    clearLayout(ui->gridLayout_info_joueur);

    //carte profil
    QPushButton *carte_info=new QPushButton;
    carte_info->setFixedSize(127,230);
    carte_info->setCursor(Qt::PointingHandCursor);

    QIcon icon;
    QString filename;
    if (perso == "Irène Adler") {
        filename = "persoJoueur2";
    } else if (perso == "Jim Moriarty") {
        filename = "persoJoueur3";
    } else if (perso == "Charles Milverton") {
        filename = "persoJoueur8";
    } else if (perso == "Molly Hooper") {
        filename = "persoJoueur1";
    } else if (perso == "Greg Lestrade") {
        filename = "persoJoueur4";
    } else if (perso == "Mary Watson") {
        filename = "persoJoueur6";
    } else if (perso == "Sherlock Holmes") {
        filename = "persoJoueur7";
    } else {
        filename = "persoJoueur5";
    }
    const QString imageP = ":/icones/"+filename;
    icon.addFile(imageP);
    carte_info->setIcon(icon);
    carte_info->setIconSize(QSize(127,230));

    ui->gridLayout_info_joueur->addWidget(carte_info, 1, 0);
    QObject::connect(carte_info, SIGNAL(released()), this , SLOT(on_carte_info_pushed()));


//    //Ajout bombe ou non
//    QCheckBox *checkbox;
//    checkbox= new QCheckBox("Bombe", this);
//    ui->gridLayout_info_joueur->addWidget(checkbox,3,0);

    //Ajout cartes diffuses
//    QLabel *label2=new QLabel;
//    const QString sTexte2 = tr("Diffuse");
//    label2->setText(sTexte2);
//    ui->gridLayout_info_joueur->addWidget(label2,2,1);

//    QSpinBox * spinbox;
//    spinbox = new QSpinBox();
//    spinbox->setValue(0);
//    spinbox->setMinimum(0);
//    spinbox->setMaximum(m_jeu.listeJoueur[a].paquetJoueur.size());
//    ui->gridLayout_info_joueur->addWidget(spinbox,2,0);

}

/*****************************************************
 * Fonction qui gère l'affichage des informations du jeu
 * dans la zone à droite
 * ***************************************************/
void Plateau_on::infos_jeu()
{
        //QIcon icon;
//        //Infos rouges
//        ui->label_rouge->setFixedSize(40,50);
//        ui->label_rouge->setStyleSheet("QLabel { background-color: red; }");
//        ui->label_rouge->setText(QString("   ") +QString::number(nbrouge));

//        //Infos bleus
//        ui->label_bleu->setFixedSize(40,50);
//        ui->label_bleu->setStyleSheet("QLabel { background-color: blue; }");
//        ui->label_bleu->setText(QString("   ") + QString::number(nbbleu));

//        //icon.addFile(QString::fromUtf8(":/icones/fils_desamorcage"));
//        ui->label_diffuse->setText(QString(tr("Désamorçage : ")) + QString::number(m_jeu.nbrCarteDesamorce) + QString(tr(" restantes")));
//        ui->label_round->setText(QString(tr("Manche : ")+ QString::number(m_jeu.manche)));
//        ui->label_tour->setText(QString(tr("Tour : ")+ QString::number(m_jeu.tour)));

        ui->label_timer->setText(tr("Temps restant : 30 secondes"));
        timer->start();
}


void Plateau_on::on_carte_info_pushed()
{

    if(equipe=="Rouge")
    {
       ui->centralWidget->setHidden(true);
       profil->setHidden(false);
       profil->affichage(1);
    }

    else
    {
        ui->centralWidget->setHidden(true);
        profil->setHidden(false);
        profil->affichage(2);
    }

}

//void Plateau_on::evolution_tour()
//{
//      m_jeu.tour++;
//      if((m_jeu.manche!=4 && m_jeu.tour==m_jeu.listeJoueur.size()))
//      {
//              m_jeu.manche++;
//              melanger();
//              m_jeu.tour=0;
//      }
//}
/******************************************
 * Fonction qui mélange les cartes
 * ****************************************/

void Plateau_on::melanger()
{
    qDebug() << "[client] shuffling" << endl;
    shuffle->setHidden(false);
    ui->centralWidget->setHidden(true);

    QEventLoop loop;
    QTimer::singleShot(2000, &loop, SLOT(quit()));
    loop.exec();

    shuffle->setHidden(true);
    ui->centralWidget->setHidden(false);
}

/*****************************************************
 * Fonction qui affiche les wireframes de victoire ou
 * defaite, attend 2 seconde puis appelle fin_partie
 * ***************************************************/
void Plateau_on::resultats()
{
    qDebug() << "[client] moving to results" << endl;
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr) {
        QStringList sav = mv->c.packet;
        if (sav[2] == equipe) { //victoire
            victoire->setHidden(false);
            ui->centralWidget->setHidden(true);
            QEventLoop loop;
            QTimer::singleShot(2000, &loop, SLOT(quit()));
            loop.exec();
            victoire->setHidden(true);
            ui->centralWidget->setHidden(false);
            fin_partie(true);
        } else { //defaite
            defaite->setHidden(false);
            ui->centralWidget->setHidden(true);
            QEventLoop loop;
            QTimer::singleShot(2000, &loop, SLOT(quit()));
            loop.exec();
            defaite->setHidden(true);
            ui->centralWidget->setHidden(false);
            fin_partie(false);
        }
    }
}

/*******************************************************
 * Fonction qui affiche le wireframe des scores lorsque
 * la partie est terminée
 * *****************************************************/
void Plateau_on::fin_partie(bool winOrNot)
{
    ui->centralWidget->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr) {
        QEventLoop* loop = new QEventLoop;
        connect(&mv->c,SIGNAL(gotEndgamePlayerStats()),loop,SLOT(quit()));
        connect(&mv->c,SIGNAL(gotEndgamePlayerStats(QStringList)),this,SLOT(fillEndgameStats(QStringList)));
        loop->exec();
        finPartie->setHidden(false);
        finPartie->tableau_de_scores(endgamestats);
    }
}

void Plateau_on::fillEndgameStats(QStringList stats) {
    for (int i = 0; i < stats.size(); i++){
        endgamestats.append(stats[i]);
    }
}


void Plateau_on::on_VoirCarte_pressed()
{
    ui->centralWidget->setHidden(true);
    vue_cartes->setHidden(false);
    vue_cartes->affichage_pseudo_joueurs();
}

void Plateau_on::on_button_envoi_pressed(){
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr) {
        emit mv->c.chat(ui->envoi_msg->toPlainText());
    }
    ui->envoi_msg->clear();
}

void Plateau_on::upChat(QStringList msg) {
    qDebug() << "[client] refreshing chat" << endl;
    QString chatTmp1, chatTmp2;
    const QString nvmsg = msg[1]+" # "+msg[2]+" # "+msg[3];
    for (int i = 10; i >= static_cast<int>(lEmptyMsgLab); i--) {
        chatTmp1 = chatLabels[i]->text();
        if (i == 10)
            chatLabels[i]->setText(nvmsg);
        else
            chatLabels[i]->setText(chatTmp2);
        chatTmp2 = QString(chatTmp1);
    }
    if (lEmptyMsgLab != 0)
        lEmptyMsgLab--;
}

void Plateau_on::nothandledyet(){
    qDebug() << "[client] not handled yet" << endl;
}

void Plateau_on::setupDeck(QStringList l){
    indexjoueur = static_cast<unsigned int>(l[2].toInt());
    qDebug() << "[client] setting deck up" << indexjoueur << endl;

    for (int i = 0; i < l[1].toInt(); i++) {
        m_carte.push_back(Baptiste::baptiste_toCarte(l[i+3],false));
    }

}

void Plateau_on::refreshInfoRight() {
    qDebug() << "[client] refreshing right infos" << endl;
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr) {
        QStringList sav = mv->c.packet;
        if (mv->c.packet[1] == "start") {
            ui->nbrouge->setText(sav[2]);
            nbrouge = static_cast<unsigned int>(sav[2].toInt());
            ui->nbbleu->setText(sav[3]);
            nbrouge = static_cast<unsigned int>(sav[2].toInt());
            ui->nbdiff->setText(sav[4]);
            nbdesam = static_cast<unsigned int>(sav[4].toInt());
        } else if (mv->c.packet[2] == "newtour") {
            ui->nbtour->setText(sav[2]);
            nbtour = static_cast<unsigned int>(sav[2].toInt());
        } else if (mv->c.packet[2] == "newround") {
            ui->nbmanche->setText(sav[2]);
            nbmanche = static_cast<unsigned int>(sav[2].toInt());
        } else if (mv->c.packet[2] == "event") {
            ui->nbdiff->setText(sav[2]);
            nbdesam = static_cast<unsigned int>(sav[2].toInt());
        }
    }
}

void Plateau_on::fillfulldeck(QStringList s) {
    qDebug() << "[client] filling full deck up" << endl;
    QStringList tmp;
    for (int i = 0; i < s[1].toInt(); i++){
        paquet_principal.push_back(Baptiste::baptiste_toCarte(s[2+i],true));
    }
    for (int i = 0; i < pseudos.size(); i++) {
        std::vector<Carte> tmp;
        for (int j = 0; j < nbcartes_joueurs.size(); j++) {
            tmp.push_back(Baptiste::baptiste_toCarte(s[2+i+j],true));
        }
        cartesParJoueur.push_back(tmp);
    }
}

void Plateau_on::fillallroles(QStringList s) {
    qDebug() << "[client] filling all roles" << endl;
    for (unsigned int i = 0; i < nbjoueurs; i++) {
        allroles.push_back(s[static_cast<int>(1+i)]);
        if (indexjoueur == i) {
            equipe = s[static_cast<int>(1+i)];
        }
    }
}

void Plateau_on::refreshAnnonces() {
    qDebug() << "[client] should refresh annonces" << endl;
}
