#include "salon.h"

Salon::Salon(User* aowner,int anbrJoueursMax,bool aauthNeeded,QString apassword,QString aname) :
    owner(aowner),
    nbrJoueursMax(anbrJoueursMax),
    authNeeded(aauthNeeded),
    password(apassword),
    name(aname)
{

}
