#ifndef DUNGEONLEVELBUILDER_H
#define DUNGEONLEVELBUILDER_H
#include <ostream>
#include <string>
#include "room.h"
#include "dungeonlevel.h"


class DungeonLevelBuilder
{
public:
    enum class MoveConstraints: unsigned {};
    DungeonLevelBuilder();
    virtual void buildDungeonLevel(std::string name, int width, int height);
    virtual Room* buildRoom(int id);
    virtual void buildDoorway(Room* origin, Room* destination, Room::Direction direction, MoveConstraints constraints);
    virtual void buildEntrance(Room* room, Room::Direction direction);
    virtual void buildExit(Room* room, Room::Direction direction);
    virtual void buildItem(Room* item);
    virtual void buildCreature(Room* creature);
    DungeonLevel getDungonLevel();
    virtual DungeonLevel* GetDungeonLevel() {return 0;}
private:
    std::string _name;
    int _width;
    int _height;
    int _id;
    Room* _origin;
    Room* _room;
    Room* _item;
    Room* _creature;

};

#endif // DUNGEONLEVELBUILDER_H
