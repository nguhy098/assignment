#ifndef ROCKWALL_H
#define ROCKWALL_H
#include "wall.h"
#include <ostream>

class RockWall: public Wall
{
public:
    RockWall();
    RockWall(const RockWall& other) = default;
    std::string description() const;
};

#endif // ROCKWALL_H
