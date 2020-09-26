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
    return '+';
}

bool RoomEdge::isPassage() const{

    return true;
}

