#include "userplaceholder.h"

UserPlaceholder::UserPlaceholder(unsigned int nb,Joueur j)
{
    id=nb;
    pseudo="Ordi";
    socket = nullptr;
    inGame = nb;
    socket = new SocketPlaceholder(id);
    gamePlayer = j;
}
