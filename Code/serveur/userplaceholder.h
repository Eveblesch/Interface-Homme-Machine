#ifndef USERPLACEHOLDER_H
#define USERPLACEHOLDER_H

#include <QObject>
#include "user.h"
#include "socketplaceholder.h"
#include "joueur.h"

class UserPlaceholder : public User
{
public:
    explicit UserPlaceholder(unsigned int nb,Joueur j);
    SocketPlaceholder* socket;

};

#endif // USERPLACEHOLDER_H
