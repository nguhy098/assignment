#include "roomedge.h"

RoomEdge::RoomEdge()
{

}
std::string RoomEdge::descriprtion() const{
    return "description";
}
char RoomEdge::displayCharacter() const{
    return 0;
}
bool RoomEdge::isPassage() const{
    return true;
}
