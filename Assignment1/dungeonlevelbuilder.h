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
    virtual Room* buildRoom(int id) const;
    virtual void buildDoorway(Room* origin, Room* destination, Room::Direction direction, DungeonLevelBuilder::MoveConstraints constraints);
    virtual void buildEntrance(Room* room, Room::Direction direction);
    virtual void buildExit(Room* room, Room::Direction direction);
    void buildItem(Room*);
    void buildCreature(Room*);
    DungeonLevel getDungonLevel();
    virtual DungeonLevel* GetDungeonLevel() {return 0;}

    enum class MoveConstraints: unsigned {};
private:
    std::string _name;
    int _width;
    int _height;
    int _id;
    Room* _origin;
    Room* _room;

};

#endif // DUNGEONLEVELBUILDER_H
