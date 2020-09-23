#include "room.h"
#include <string>
#include <vector>
#include "roomedge.h"
#include <iostream>
#include <array>

Room::Room(const int id): _id{id}{
    _newItem = NULL;

}






enum class Direction: unsigned {
    North = 0,
    South = 1,
    West = 2,
    East = 3
};

void Room::setNorth(RoomEdge* north){
    edges[0] = north;
}
RoomEdge* Room::getNorth(){
    return edges[0];
}
void Room::setSouth(RoomEdge* south){
    edges[1] = south;
}
RoomEdge* Room::getSouth(){
    return edges[1];
}
void Room::setEast(RoomEdge* east){
    edges[2] = east;
}
RoomEdge* Room::getEast(){
    return edges[2];
}
void Room::setWest(RoomEdge* west){
    edges[3] = west;
}
RoomEdge* Room::getWest(){
    return edges[3];
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
Item* Room::item() const{
    return _newItem;
}
void Room::setItem(Item* newItem){
    _newItem = newItem;
}
AbstractCreature* Room::creature() const{
    return _newCreature;
}
void Room::setCreature(AbstractCreature* newCreature){
    _newCreature = newCreature;
}


