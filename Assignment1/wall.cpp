#include "wall.h"

Wall::Wall()
{

}

std::string Wall::description() const
{
    return _description;
}

char Wall::dislayCharacter()
{
    Room w{_i};
    if(w.getNorth() || w.getSouth()){
        return '-';
    }
    else if(w.getEast() || w.getWest()){
        return '|';
    }
}

bool Wall::isPassage()
{
    return false;
}
