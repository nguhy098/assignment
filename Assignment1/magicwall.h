#ifndef MAGICWALL_H
#define MAGICWALL_H
#include <ostream>
#include "wall.h"

class MagicWall: public Wall
{
public:
    MagicWall();
    MagicWall(const MagicWall& other) = default;
    std::string description() const;

};

#endif // MAGICWALL_H
