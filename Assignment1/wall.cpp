#include "wall.h"

Wall::Wall()
{

}

std::string Wall::description() const
{

}

char Wall::dislayCharacter() const
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

}
