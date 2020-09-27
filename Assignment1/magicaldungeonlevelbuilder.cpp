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

Room *MagicalDungeonLevelBuilder::buildRoom(int id)
{
    _id = id;
}

void MagicalDungeonLevelBuilder::buildDoorway(Room *origin, Room *destination, Room::Direction direction, DungeonLevelBuilder::MoveConstraints constraints)
{
    _origin = origin;
    direction = Room::Direction();
    constraints = MoveConstraints();
}

void MagicalDungeonLevelBuilder::buildEntrance(Room *room, Room::Direction direction)
{
    _room = room;
    direction = Room::Direction();
}

void MagicalDungeonLevelBuilder::buildExit(Room *room, Room::Direction direction)
{
    _room = room;
    direction = Room::Direction();
}

void MagicalDungeonLevelBuilder::buildItem(Room * item)
{
    _item = item;
}

void MagicalDungeonLevelBuilder::buildCreature(Room * creature)
{
    _creature = creature;
}
