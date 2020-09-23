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

};
Room* DungeonLevelBuilder::buildRoom(int id) const{
    Room* room = new Room(id);



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
