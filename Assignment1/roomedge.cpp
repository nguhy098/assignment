#include "roomedge.h"
#include "room.h"
#include "doorway.h"
#include "wall.h"
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
    Doorway dw;
    Wall w;
    if(dw.isEntrance() && dw.isExit() && w.isPassage()){
        return false;
    }
    return true;

}

