#ifndef BASICDUNGEONLEVELBUILDER_H
#define BASICDUNGEONLEVELBUILDER_H
#include "dungeonlevelbuilder.h"
#include "room.h"

class BasicDungeonLevelBuilder : public DungeonLevelBuilder
{
public:
    BasicDungeonLevelBuilder();
    void buildDungeonLevel(std::string name, int width, int height) override;
    Room* buildRoom(int id) override;
    void buildDoorway(Room* origin, Room* destination, Room::Direction direction, MoveConstraints constraints) override;
    void buildEntrance(Room *room, Room::Direction direction) override;
    void buildExit(Room* room, Room::Direction direction) override;
    void buildItem(Room* item) override;
    void buildCreature(Room * creature) override;
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

#endif // BASICDUNGEONLEVELBUILDER_H
