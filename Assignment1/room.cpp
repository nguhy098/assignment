#include "room.h"
#include <string>
#include <vector>
#include "roomedge.h"
#include <iostream>

Room::Room(const int id): _id{id}, _newItem{}, _newCreature{}{

}
std::vector<RoomEdge> edge{};
edge.push_back("North");
edge.push_back("South");
edge.push_back("West");
edge.push_back("East");


enum class Direction: unsigned {
    North = 0,
    South = 1,
    West = 2,
    East = 3
};

std::string Room::setNorth(RoomEdge){
    RoomEdge(array[0]);
}
RoomEdge Room::getNorth(){
    return
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
//RoomEdge Room::setEdge(RoomEdge, Direction){

//}
//RoomEdge Room::edgeAt(Direction){
    //Direction f;

//}

