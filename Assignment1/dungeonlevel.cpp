#include "dungeonlevel.h"
using namespace std;

DungeonLevel::DungeonLevel(std::string name, int width, int height): _name{name}, _width{width}, _height{height}
{

}
bool DungeonLevel::addRoom(Room){
    return true;
}
Room DungeonLevel::retrieveRoom(int) const{
    return _x;
}
int DungeonLevel::width() const{
    return _width;
}
int DungeonLevel::height() const{
    return _height;
}
std::string DungeonLevel::name() const{
    return "name";
}
std::string DungeonLevel::description() const{
    return "description";
}
std::string DungeonLevel::display() const{
    return "display";
}
