#include "roomedge.h"
#include "room.h"

RoomEdge::RoomEdge()
{

}
std::string RoomEdge::descriprtion() const{
    return "Room Edge";
}

char RoomEdge::dislayCharacter() const
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

bool RoomEdge::isPassage() const{

    return true;
}

