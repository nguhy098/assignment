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

    std::string setNorth(RoomEdge);
    RoomEdge getNorth();
    void setSouth(RoomEdge);
    RoomEdge getSouth();
    void setEast(RoomEdge);
    RoomEdge getEast();
    void setWest(RoomEdge);
    RoomEdge getWest();

    enum class Direction: unsigned {};

private:
    int _id;
    std::string _newItem;
    std::string _newCreature;


};

#endif // ROOM_H
