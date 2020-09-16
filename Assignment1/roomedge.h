#ifndef ROOMEDGE_H
#define ROOMEDGE_H
#include <ostream>
#include <string>

class RoomEdge
{
public:
    RoomEdge();
    std::string descriprtion() const;
    char displayCharacter() const;
    bool isPassage() const;

};

#endif // ROOMEDGE_H
