#include "basicdungeonlevelbuilder.h"
#include "doorway.h"
BasicDungeonLevelBuilder::BasicDungeonLevelBuilder()
{

}

void BasicDungeonLevelBuilder::buildDungeonLevel(std::string name, int width, int height)
{
    _name = name;
    _width = width;
    _height = height;
}

Room *BasicDungeonLevelBuilder::buildRoom(int id)
{
    _id = id;
}

void BasicDungeonLevelBuilder::buildDoorway(Room *origin, Room *destination, Room::Direction direction, MoveConstraints constraints)
{
    _origin = origin;
    direction = Room::Direction();
    constraints = MoveConstraints();
}

void BasicDungeonLevelBuilder::buildEntrance(Room *room, Room::Direction direction)
{
    _room = room;
    direction = Room::Direction();
}
void BasicDungeonLevelBuilder::buildExit(Room *room, Room::Direction direction)
{
    _room = room;
    direction = Room::Direction();
}
void BasicDungeonLevelBuilder::buildItem(Room * item)
{
    _item = item;
}
void BasicDungeonLevelBuilder::buildCreature(Room * creature)
{
    _creature = creature;
}
