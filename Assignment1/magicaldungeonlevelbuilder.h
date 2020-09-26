#ifndef MAGICALDUNGEONLEVELBUILDER_H
#define MAGICALDUNGEONLEVELBUILDER_H
#include "dungeonlevelbuilder.h"
#include "room.h"

class MagicalDungeonLevelBuilder: public DungeonLevelBuilder
{
public:
    MagicalDungeonLevelBuilder();
    void buildDungeonLevel(std::string name, int width, int height) override;
    Room* buildRoom(int id) const override;
    void buildDoorway(Room* origin, Room* destination, Room::Direction direction, MoveConstraints constraints) override;
    void buildEntrance(Room *room, Room::Direction direction) override;
    void buildExit(Room* room, Room::Direction direction) override;
    void buildItem(Room*) override;
    void buildCreature(Room *) override;

private:
    std::string _name;
    int _width;
    int _height;
    int _id;
    Room* _origin;
    Room* _room;
};

#endif // MAGICALDUNGEONLEVELBUILDER_H
