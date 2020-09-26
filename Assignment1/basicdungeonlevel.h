#ifndef BASICDUNGEONLEVEL_H
#define BASICDUNGEONLEVEL_H
#include <string>

class BasicDungeonLevel
{
public:
    BasicDungeonLevel(std::string name, int width, int height);
    std::string description() const;
private:
    std::string _name;
    int _width;
    int _height;
    std::string _description;

};

#endif // BASICDUNGEONLEVEL_H
