#include "dungeonlevelbuilder.h"
#include <iostream>
#include <ostream>
#include <string>


using namespace std;

DungeonLevelBuilder::DungeonLevelBuilder()
{
}

void DungeonLevelBuilder::buildDungeonLevel(string name, int width, int height)
{
    _name = name;
    _width = width;
    _height = height;
}
enum class MoveConstraints : unsigned{
    None = 0,
    OriginImpassable = 1,
    DestinationImpassable = 2,
    OriginLocked = 4,
    DestinationLocked = 8,
};

Room* DungeonLevelBuilder::buildRoom(int id)
{
    _id = id;
}

void DungeonLevelBuilder::buildDoorway(Room *origin, Room *destination, Room::Direction direction, MoveConstraints constraints)
{
    _origin = origin;
   direction = Room::Direction();
   constraints = MoveConstraints();
}

void DungeonLevelBuilder::buildEntrance(Room *room, Room::Direction direction)
{
    _room = room;
    direction = Room::Direction();
}

void DungeonLevelBuilder::buildExit(Room *room, Room::Direction direction)
{
    _room = room;
    direction = Room::Direction();
}
void DungeonLevelBuilder::buildItem(Room* item)
{
    _item = item;

}
void DungeonLevelBuilder::buildCreature(Room* creature)
{
    _creature = creature;
}
DungeonLevel DungeonLevelBuilder::getDungonLevel()
{

}
