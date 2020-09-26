#include "basicdungeonlevelbuilder.h"

BasicDungeonLevelBuilder::BasicDungeonLevelBuilder()
{

}

void BasicDungeonLevelBuilder::buildDungeonLevel(std::string name, int width, int height)
{
    _name = name;
    _width = width;
    _height = height;
}

Room *BasicDungeonLevelBuilder::buildRoom(int id) const
{

}

void BasicDungeonLevelBuilder::buildDoorway(Room *origin, Room *destination, Room::Direction direction, DungeonLevelBuilder::MoveConstraints constraints)
{

}

void BasicDungeonLevelBuilder::buildEntrance(Room *room, Room::Direction direction)
{

}

void BasicDungeonLevelBuilder::buildExit(Room *room, Room::Direction direction)
{

}

void BasicDungeonLevelBuilder::buildItem(Room *)
{

}

void BasicDungeonLevelBuilder::buildCreature(Room *)
{

}
