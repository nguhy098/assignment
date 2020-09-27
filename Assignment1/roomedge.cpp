#include "roomedge.h"
#include "room.h"
#include "doorway.h"
RoomEdge::RoomEdge()
{

}
std::string RoomEdge::descriprtion() const{
    return "Room Edge";
}

char RoomEdge::dislayCharacter()
{
    return '+';
}

bool RoomEdge::isPassage() const
{
    return true;
}

