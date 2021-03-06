#ifndef WALL_H
#define WALL_H
#include <ostream>
#include "roomedge.h"

class Wall : public RoomEdge
{
public:
    Wall();
    Wall(const Wall& other) = default;
    std::string description() const;
    char dislayCharacter() override;
    bool isPassage();
private:
    char _i;
    std::string _description;

};

#endif // WALL_H
