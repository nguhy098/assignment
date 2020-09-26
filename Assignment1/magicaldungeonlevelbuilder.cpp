#include "magicaldungeonlevelbuilder.h"

MagicalDungeonLevelBuilder::MagicalDungeonLevelBuilder()
{

}

void MagicalDungeonLevelBuilder::buildDungeonLevel(std::string name, int width, int height)
{
    _name = name;
    _width = width;
    _height = height;
}

Room *MagicalDungeonLevelBuilder::buildRoom(int id) const
{

}

void MagicalDungeonLevelBuilder::buildDoorway(Room *origin, Room *destination, Room::Direction direction, DungeonLevelBuilder::MoveConstraints constraints)
{

}

void MagicalDungeonLevelBuilder::buildEntrance(Room *room, Room::Direction direction)
{

}

void MagicalDungeonLevelBuilder::buildExit(Room *room, Room::Direction direction)
{

}

void MagicalDungeonLevelBuilder::buildItem(Room *)
{

}

void MagicalDungeonLevelBuilder::buildCreature(Room *)
{

}
