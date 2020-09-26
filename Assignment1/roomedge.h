#ifndef ROOMEDGE_H
#define ROOMEDGE_H
#include <ostream>
#include <string>
#include "room.h"

class RoomEdge
{
public:
    RoomEdge();
    virtual std::string descriprtion() const;
    virtual char dislayCharacter() const;
    bool isPassage() const;

private:
    char _i;


};

#endif // ROOMEDGE_H
