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
    DungeonLevelBuilder(std::string name, int width, int height);
    virtual Room* buildRoom(int id) const;
    virtual void buildDoorway(Room* origin, Room* destination, Room::Direction direction, MoveConstraints constraints);
    virtual void buildEntrance(Room* room, Room::Direction direction);
    virtual void buildExit(Room* room, Room::Direction direction);
    void buildItem(Room*);
    void buildCreature(Room*);
    DungeonLevel getDungonLevel();
    virtual DungeonLevel* GetDungeonLevel() {return 0;}


private:
    std::string _name;
    int _width;
    int _height;
    int _id;
    Room* _origin;
    Room* _room;
//static_cast<MoveConstraints>(static_cast<unsigned>(MoveConstraints::OriginLocked) | static_cast<unsigned>(MoveConstraints::DestinationImpassable))
};

#endif // DUNGEONLEVELBUILDER_H
