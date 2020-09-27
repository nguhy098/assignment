#include "doorway.h"

Doorway::Doorway()
{

}

void Doorway::connect(Doorway* opposite)
{
    _opposite = opposite;
}

bool Doorway::isEntrance()
{
    return true;
}

bool Doorway::isExit()
{
    return true;
}

char Doorway::dislayCharacter()
{
    Room r{_i};
    if(r.getNorth()){
        return '^';
    }
    else if(r.getSouth()){
        return 'v';
    }
    else if(r.getEast()){
        return '>';

    }
    else if(r.getWest()){
        return '<';
    }
}
