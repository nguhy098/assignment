#include "basicdungeonlevel.h"

BasicDungeonLevel::BasicDungeonLevel(std::string name, int width, int height):
    _name{name}, _width{width}, _height{height}
{

}
std::string BasicDungeonLevel::description() const
{
    return _description;

}
