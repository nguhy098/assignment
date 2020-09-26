#include "dungeonlevel.h"

using namespace std;

DungeonLevel::DungeonLevel(std::string name, int width, int height): _name{name}, _width{width}, _height{height}
{

}
bool DungeonLevel::addRoom(Room* _room){
    if (_room == NULL){
        return false;
    }
    room.push_back(_room);
    return true;
}

Room* DungeonLevel::retrieveRoom(int i) const{
    return room.at(i);
}
int DungeonLevel::width() const{
    return _width;
}
int DungeonLevel::height() const{
    return _height;
}
std::string DungeonLevel::name() const{
    return _name;
}
std::string DungeonLevel::description() const{
    return _description;
}
std::string DungeonLevel::display() const{
    return _display;
}
