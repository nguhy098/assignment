#ifndef MAGICALDUNGEONLEVEL_H
#define MAGICALDUNGEONLEVEL_H
#include <string>

class MagicalDungeonLevel
{
public:
    MagicalDungeonLevel(std::string name, int width, int height);
    std::string description() const;
private:
    std::string _name;
    int _width;
    int _height;
};

#endif // MAGICALDUNGEONLEVEL_H
