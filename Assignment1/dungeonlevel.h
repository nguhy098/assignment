#ifndef DUNGEONLEVEL_H
#define DUNGEONLEVEL_H
#include <ostream>
#include <string>
#include "room.h"
#include <vector>

class DungeonLevel
{
public:
    DungeonLevel(std::string name, int width, int height);
    bool addRoom(Room*);
    Room* retrieveRoom(int) const;
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
    std::string _description;
    std::string _display;


std::vector<Room*> room;



};

#endif // DUNGEONLEVEL_H
