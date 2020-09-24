#include "dungeonlevelbuilder.h"
#include <iostream>
#include <ostream>
#include <string>


using namespace std;

DungeonLevelBuilder::DungeonLevelBuilder(std::string name, int width, int height):
    _name{name}, _width{width}, _height{height}, _origin{0}, _room{0}
{
}

enum class MoveConstraints : unsigned{
    None = 0,
    OriginImpassable = 1,
    DestinationImpassable = 2,
    OriginLocked = 4,
    DestinationLocked = 8,
};
Room* DungeonLevelBuilder::buildRoom(int id) const{

}

void DungeonLevelBuilder::buildDoorway(Room *origin, Room *destination, Room::Direction direction, DungeonLevelBuilder::MoveConstraints constraints)
{

}

void DungeonLevelBuilder::buildEntrance(Room *room, Room::Direction direction)
{

}

void DungeonLevelBuilder::buildExit(Room *room, Room::Direction direction)
{

}
void buildEntrance(Room* room, Room::Direction direction){
    DungeonLevelBuilder Doorway(std::string name, int width, int height);


}
void DungeonLevelBuilder::buildItem(Room* item){
    rand();

}
void DungeonLevelBuilder::buildCreature(Room* creature){

}
DungeonLevel DungeonLevelBuilder::getDungonLevel(){

}
