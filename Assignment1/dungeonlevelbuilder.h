#ifndef DUNGEONLEVELBUILDER_H
#define DUNGEONLEVELBUILDER_H
#include <ostream>
#include <string>
#include "room.h"
#include "dungeonlevel.h"

class DungeonLevelBuilder
{
public:
    DungeonLevelBuilder(std::string name, int width, int height);
    Room buildRoom(int id) const;
    void buildDoorway(Room origin, Room destination, Direction direction, MoveConstraints constraints);
    void buildEntrance(Room room, Direction direction);
    void buildExit(Room room, Direction direction);
    void buildItem(Room);
    void buildCreature(Room);
    DungeonLevel getDungonLevel();
private:
    std::string _name;
    int _width;
    int _height;
    int _id;
    Room _origin;
    Room _room;
}

#endif // DUNGEONLEVELBUILDER_H
