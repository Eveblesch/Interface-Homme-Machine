#include "socketplaceholder.h"

SocketPlaceholder::SocketPlaceholder(unsigned int id)
{
    idOrdi = id;
}

void SocketPlaceholder::write(QString msg) { //se branle d'absolument tous les paquets sauf les tours
    // "tour&n°tour&whoplays&timestamp&nbjoueurs&nbcartesj1&nbcartesj2&etcetc
    packet = msg.split("&");
    if ((packet[0] == "tour") && (packet[2] == QString(idOrdi))) {
        int nbjoueurs = packet[4].toInt();
        int joueurRandom = static_cast<int>(QRandomGenerator::global()->bounded(0,(nbjoueurs-1)));
        // "cut&n°joueur&n°carte"
        int carteRandom = static_cast<int>(QRandomGenerator::global()->bounded(0,(packet[5+joueurRandom].toInt())));
        randomPlay = "cut&"+QString::number(joueurRandom)+"&"+QString::number(carteRandom);
    }
}

bool SocketPlaceholder::waitForBytesWritten(unsigned int sec) {
    sleep(sec);
    emit(readyRead());
    return true;
}

QString SocketPlaceholder::readAll() {
    return randomPlay;
}

bool SocketPlaceholder::waitForReadyRead(unsigned int i) {
    while (i != i);
    return true;
}


