#ifndef ROOMEDGE_H
#define ROOMEDGE_H
#include <ostream>
#include <string>
#include "room.h"
class RoomEdge
{
public:
    RoomEdge();
    std::string descriprtion() const;
    virtual char dislayCharacter() const;
    bool isPassage() const;
    Room::Direction: unsigned{};
private:


};

#endif // ROOMEDGE_H
