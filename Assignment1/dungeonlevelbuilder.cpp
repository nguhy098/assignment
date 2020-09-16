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
    return _id;
}
void DungeonLevelBuilder::buildItem(Room){

}
void DungeonLevelBuilder::buildCreature(Room){

}
DungeonLevel DungeonLevelBuilder::getDungonLevel(){

}
