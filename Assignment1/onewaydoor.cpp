#include "onewaydoor.h"

OneWayDoor::OneWayDoor()
{
    isE = false;
    isEx = false;
}

char OneWayDoor::dislayCharacter()
{
    if(isEntrance()){
        return 'I';
    }
    else if(isExit()){
        return 'O';
    }
    return '^';
}

bool OneWayDoor::isEntrance()
{
    return true;
}
bool OneWayDoor::isExit()
{
    return true;
}
