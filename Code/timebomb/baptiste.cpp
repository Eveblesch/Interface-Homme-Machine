#include "baptiste.h"

//1. new&pseudo
QString Baptiste::baptiste_toUser(QString pseudo)
{
  QString result=QString("new&user&")+pseudo;
  return result;
}

QString Baptiste::baptiste_joinRoom(unsigned int id,QString name/*,QString passwd*/) {
    QString result = "join&salon&" + QString::number(id) + "&" + name/* + "&" + passwd*/;
    return result;
}

QString Baptiste::baptiste_createRoom(unsigned int nbjmax, bool auth, QString paswwd, QString name) {
    QString result = "create&salon&" + QString::number(nbjmax) + "&" + name + "&" + QString::number(auth) + "&" + (auth ? paswwd : "a");
    return result;
}

Carte Baptiste::baptiste_toCarte(QString s,bool p) {
    QStringList l = s.split("#");
    if (p) {
        Carte c(l[1].toInt(),l[3]);
        c.trouver = (l[2].toInt() == 1) ? true : false;
        return c;
    } else {
        Carte c(l[0].toInt(),l[2]);
        c.trouver = (l[1].toInt() == 1) ? true : false;
        return c;
    }
}

// QString MaClasse::string_to_user(QString buf)
// {
//   QStringList liste = buf.split('&');
//   return list[1];
// }

//2. Creation Salon : create_salon&nbrJoueursMax&authNeeded&password&name

//QString Baptiste::baptiste_lobby (Worker* w)
//{
//  QString result=QString("create_salon&")+w->jeu.listeJoueur.size()+QString("&")+QString::number(w->authNeeded)+QString("&")+w->password+QString("&")+w->name);
//  return result;
//}

// std::vector<Jeu> MaClasse::string_to_salon (QString buf,QList<Worker*> salons)
// {
//   QStringList liste = buf.split('&');
//
//   Jeu j = new Jeu();
//   liste_jeu.pushback(j);
//   return liste_jeu;
// }


//3. paquet&nbcartes&idCarte1#trouver 1 ou 0 #typeCarte&carte2&.....

//QString Baptiste::baptiste_listedecartes (std::vector<Carte*> paquet){
//  QString result=QString("paquet&")+QString::number(paquet.size());
//  for(int i=0;i<paquet.size();i++)
//  {
//    result += QString("&")+QString::number(paquet[i]->idCarte)+QString("#")+QString::number(paquet[i]->trouver)+QString("#")+paquet[i]->typeCarte;
//  }
//  return result;
//}

//QString Baptiste::baptiste_fullpaquet (std::vector<Carte> cp){
//  QString result=QString("paquet&")+QString::number(cp.size());
//  for(int i=0;i<cp.size();i++)
//  {
//    result += QString("&")+QString::number(cp[i].idCarte)+QString("#")+QString::number(cp[i].trouver)+QString("#")+cp[i].typeCarte;
//  }
//  return result;
//}

//QString Baptiste::baptiste_allroles(std::vector<Joueur*> j) {
//    QString result = "fullroles";
//    for (int i = 0; i < j.size(); i++){
//        result += "&" + j[i]->equipe;
//    }
//    return result;
//}


////std::vector<Carte*> MaClasse::string_to_paquet(QString buf){
////  QStringList liste= buf.split('&');
////  std::vector<Carte*> paquet;
////  Carte* t;
////  bool trouver;
////  for (int i=2;i<liste[1].toInt();i++){
////    QStringList carte=liste[i].split('#');
////    t = new Carte(carte[0].toInt()),liste[2]);
////    if(atoi(liste[1])==1){
////      t.revelerCarte();
////    }
////    paquet.pushback(t);
////  }
////  return paquet;
////}

////4.

//QString Baptiste::baptiste_role (Joueur j)
//{
//  QString result=QString("role&")+j.personnage+QString("&")+j.equipe+QString("&")+j.personnage;
//  return result;
//}

////Joueur MaClasse::string_to_joueur (QString buf)
////{
////  QStringList liste = buf.split('&');
////  Joueur j = new Joueur(liste[1],liste[2],liste[3]);
////  return j;
////}


////5. annonce&idjoueur&1sibombe0sinon&nbdiffuse

////QString MaClasse::annonce_to_string (int joueur, bool bombe, int nb_diffuse)
////{
////  QString result=QString("annonce&")+QString::number(joueur)+QString("&")+QString::number(bombe)+QString("&")+QString::number(nb_diffuse);
////  return result;
////}

////void MaClasse::string_to_annonce(QString buf)
////{
////  QStringList liste = buf.split('&');
////  label[liste[1]].bombe=liste[2];
////  lable[liste[1]].cables=liste[3];
////}

////6. chat&hh:mm::ss&pseudo&[message] //fait sur le serveur


////7. lobby&nbsalons&nomsalon1#idsalon#1sipasswd0sinon#nbjoueursdedans#nbjoueursmax#acommencéoupas&nomsalon1#1sipasswd0sinon&nbjoueursdedans&nbjoueursmax&accommencéoupas&etc   Pour bapt

////QString MaClasse::lobby_to_string(QList<Worker*> salons)
////{
////  QString result=QString("lobby&")+QString(salons.size())+QString("&");
////  int i=0;
////  for(i=0;i<salons.size();i++)
////  {
////    result+=salons[i]->name+QString("#")+QString::number(salons[i]->id)+QString("#")+QString::number(salons[i]->authNeeded)+QString("#")+QString(salons[i]->clients.size())+QString("#")+String::number(salons[i]->nbrJoueursMax)+QString("#")+QString::number(salons[i]->hasStarted)+QString("#");
////  }

////}

QList<struct salon> Baptiste::baptiste_toLobby(QString buf)
{
  QStringList liste = buf.split('&');
  QStringList info_salon;
  QList<struct salon> salons;
  int i=0;
  struct salon cur_salon;
  for(i=0;i<liste[1].toInt();i++)
  {
    info_salon=liste[2+i].split("#");
    cur_salon.name=info_salon[0];
    cur_salon.id=static_cast<unsigned int>(info_salon[1].toInt());
    cur_salon.visibility = (info_salon[2] == "1") ? true : false;
//    cur_salon.authNeeded= (info_salon[2] == 1) ? true : false;
//    cur_salon.nb_clients=static_cast<unsigned int>(info_salon[3].toInt());
//    cur_salon.nb_clientsmax=static_cast<unsigned int>(info_salon[4].toInt());
//    cur_salon.hasStarted=(info_salon[5] == "1" ? true : false);
//    if (cur_salon.authNeeded) {
//        cur_salon.passwd = info_salon[6];
//    } else {
//        cur_salon.passwd = "";
//    }
    salons.append(cur_salon);
  }
  return salons;
}

////8. cut&numjoueur&numcarte

////QString MaClasse::coupe_to_string(int joueur,int carte_coupee)
////{
////  QString result=QString("cut&")+QString::number(joueur)+QString("&")+QString::number(carte_coupee);
////  return result;
////}

//// void MaClasse::string_to_coupe(QString buf,Jeu j)
//// {
////   QStringList liste = buf.split('&');
////   j.retirercarte(liste[2].toInt);
//// }

////9.tour&tour&joueurcourant&nbjoueurs&nbcartesj1&nbcartesj2& etc

////QString MaClasse::tour_to_string(Jeu j){
////  QString result=QString("tour&")+QString::number(j.tour)+QString("&")+QString::number(j.joueurcourant)+QString("&")+QString::number(j.nb_joueur);
////  for(int i=0; i < j.nb_joueur;i++){
////    result+=QString::number(j.listeJoueur[i].paquetJoueur.size());
////  }
////  return result;
////}

//struct client{
//  int tour;
//  int joueurcourant;
//  int nb_joueur;
//  QList<int> nb_carte_joueur;
//};

////struct client MaClasse::string_to_tour(QString buf){
////  QStringList liste = buf.split('&');
////  struct client client;
////  client.tour=liste[1].toInt();
////  client.joueurcourant=liste[2].toInt();
////  client.nb_joueur=liste[3].toInt();
////  for(int i=0;i<j.nb_joueur;i++){
////    client.nb_carte_joueur.append(liste[4+i]);
////  }
////  return client;
////}

////10. endgame&stats&nb_joueurs&joueur#equipe#perso#nbdiffusecoupees#nbsecucoupees#bombe&joueur etc

////QString MaClasse::endgame_to_string(Worker w){
////  QString result=QString("endgame&stats");
////  result+=QString("&")+QString::number(w->jeu.nbJoueur);
////  for(int i=0;i<w->clients.size();i++)
////  {
////    result+=QString("&")+w->clients[i].pseudo+QString("#")+w->clients[i].gamePlayer.equipe+QString("#")+w->clients[i].gamePlayer.personnage+QString("#")+QString::number(w->clients[i].gamePlayer.cablesClassiques)+QString("#")+QString::number(w->clients[i].gamePlayer.cablesDesamorces)+QString("#")+QString::number(w->jeu.joueurcourant==i);
////  }
////  return result;
////}

//struct stats_joueur{
//  QString pseudo;
//  QString equipe;
//  QString personnage;
//  int cablesClassiques;
//  int cablesDesamorces;
//  bool bombe;
//};

////std::vector<struct stats_joueur*> MaClasse::string_to_endgame(QString buf)
////{
////  QStringList list = buf.split('&');
////  QStringList info_joueur;
////  std::vector<struct stats_joueur*> stat;
////  struct stats_joueur s;
////  for(int i=0;i<list[2];i++)
////  {
////    info_joueur=liste[3+i].split('#');
////    s.pseudo=info_joueur[0];
////    s.equipe=info_joueur[1];
////    s.personnage=info_joueur[2];
////    s.cablesClassiques=info_joueur[3];
////    s.cablesDesamorces=info_joueur[4];
////    s.bombe=info_joueur[5];
////    stat.append(s);
////  }

////  return stat;
////}

////12. shuffle


////13.canstart


////14; infos&start&nbrouge&nbbleu&nbdiffuse

//QString Baptiste::baptiste_infostart (Jeu j) {
//  QString result = QString("info&start&")+QString::number(j.nbrouge)+QString("&")+QString::number(j.nbbleu)+QString("&")+QString::number(j.nbrCarteDesamorce);
//  return result;
//}

//struct info{
//  int nbrouge;
//  int nbbleu;
//  int nb_diffuse;
//};

//struct info string_to_info_newtour(QString buf){
//    QStringList liste = buf.split('&');
//    struct info info;
//    info.nbrouge= liste[2].toInt();
//    info.nbbleu=liste[3].toInt();
//    info.nb_diffuse=liste[4].toInt();
//    return info;
//}

////15.info&newtour&numtour

//QString Baptiste::baptiste_newtour (Jeu j){
//  QString result=QString("info&newtour&")+QString::number(j.tour);
//  return result;
//}

////int string_to_info_newtour(QString buf){
////  QStringList liste = buf.split('&');
////  return liste[2];
////}

////16.info&newround&nummanche

//QString Baptiste::baptiste_newRound (Jeu j) {
//  QString result=QString("info&newround&")+QString::number(j.tour);
//  return result;
//}

////int string_to_info_newround(QString buf){
////  QStringList liste = buf.split('&');
////  return liste[2];
////}

////17.info&event&nbdiffuse

//QString Baptiste::baptiste_event(Jeu j){
//  QString result=QString("info&event&")+QString::number(j.nbrCarteDesamorce);
//  return result;
//}

////int string_to_info_event(QString buf){
////  QStringList liste = buf.split('&');
////  return liste[2];
////}

////18. endgame&over&reason // 1 bombe // 2 partie termine // 3 nbr cablesDesamorces

////QString endgame_over_to_string(Jeu j){
////  int reason;
////  if(bombe==0){
////    reason = 1;
////  }
////  else if(manche==4 && tour==listeJoueur.size()){
////    reason = 2;
////  }
////  else if(nbrCarteDesamorce==0){
////    reason = 3;
////  }
////  else{
////    reason = 0;
////  }
////  QString result=QString("endgame&statsall&")+QString::number(reason);
////  return result;
////}

////int string_to_endgame_over(QString buf){
////  QStringList liste = buf.split('&');
////  return liste[2];
////}

////19. endgame&statsall&equipegagnante

//QString Baptiste::baptiste_endgameStats(Jeu j){
//  QString result=QString("endgame&statsall&")+QString::number(j.finPartie());
//  return result;
//}

////int string_to_endgame_statsall(QString buf){
////  QStringList liste = buf.split('&');
////  return liste[2];
////}


////j'ai modifié un chouïa celles là
//// //envoyé à tout le monde
////endgame&stats&joueur&equipe&perso&nbdiffusecoupees&nbsecucoupees&
