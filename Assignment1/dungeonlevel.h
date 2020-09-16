#ifndef DUNGEONLEVEL_H
#define DUNGEONLEVEL_H
#include <ostream>
#include <string>
#include "room.h"


class DungeonLevel
{
public:
    DungeonLevel(std::string name, int width, int height);
    bool addRoom(Room);
    Room retrieveRoom(int x) const;
    int width() const;
    int height() const;
    int numberOfRooms;
    std::string name() const;
    std::string description() const;
    std::string display() const;
private:
    std::string _name;
    int _width;
    int _height;
    int _x;



};

#endif // DUNGEONLEVEL_H
