#include "room.h"

Room::Room(const int id): _id{id}, _newItem{}, _newCreature{}{

}


std::string Room::description() const{
    return "--";
}
std::string Room::display() const{
    return "--";
}
int Room::id() const{
    return _id;
}
Item Room::item() const{
    return _newItem;
}
void Room::setItem(const Item& newItem){
    _newItem;
}
AbstractCreature Room::creature() const{
    return _newCreature;
}
void Room::setCreature(const AbstractCreature& newCreature){
    _newCreature;
}
RoomEdge Room::setEdge(RoomEdge, Direction){

}
RoomEdge Room::edgeAt(Direction){
    Direction f;

}
