#ifndef ROOM_H
#define ROOM_H
#include <string>
#include <ostream>
#include "item.h"
#include "abstractcreature.h"
#include "roomedge.h"


class Room
{
public:
    Room(const int id);
    std::string description() const;
    std::string display() const;
    int id() const;
    Item item() const;
    void setItem(const Item& newItem);
    AbstractCreature creature() const;
    void setCreature(const AbstractCreature& newCreature);
    RoomEdge setEdge(RoomEdge, Direction);
    RoomEdge edgeAt(Direction);
    enum Direction : unsigned { };

private:
    int _id;
    std::string _newItem;
    std::string _newCreature;


};

#endif // ROOM_H
