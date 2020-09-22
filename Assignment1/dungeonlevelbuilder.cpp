#include "dungeonlevelbuilder.h"
#include <iostream>
#include <ostream>
#include <string>


using namespace std;

DungeonLevelBuilder::DungeonLevelBuilder(std::string name, int width, int height):
    _name{name}, _width{width}, _height{height}, _origin{0}, _room{0}
{



}
Room DungeonLevelBuilder::buildRoom(int id) const{
    Room* room = new Room(id);
    //room ->setEdge(RoomEdge(), Direction());
    //room ->setEdge(RoomEdge(), Direction());
    //room ->setEdge(RoomEdge(), Direction());
    //room ->setEdge(RoomEdge(), Direction());

    return _id;
}
//void buildEntrance(Room room, Direction direction){
   // DungeonLevelBuilder Doorway(std::string name, int width, int height);


//}
void DungeonLevelBuilder::buildItem(Room){
    rand();

}
void DungeonLevelBuilder::buildCreature(Room){

}
DungeonLevel DungeonLevelBuilder::getDungonLevel(){

}
