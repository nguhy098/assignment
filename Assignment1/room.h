#ifndef ROOM_H
#define ROOM_H
#include <string>
#include <ostream>
#include "item.h"
#include "abstractcreature.h"
#include "roomedge.h"
#include "memory"
#include "array"

class Room
{
public:
    Room(const int id);
    std::string description() const;
    std::string display() const;
    int id() const;
    Item* item() const;
    void setItem(Item* newItem);
    AbstractCreature* creature() const;
    void setCreature(AbstractCreature* newCreature);

    void setNorth(RoomEdge* north);
    RoomEdge* getNorth();
    void setSouth(RoomEdge* south);
    RoomEdge* getSouth();
    void setEast(RoomEdge* east);
    RoomEdge* getEast();
    void setWest(RoomEdge* west);
    RoomEdge* getWest();

    enum class Direction: unsigned {};

private:
    int _id;
    Item* _newItem;
    AbstractCreature* _newCreature;

    std::array<RoomEdge*, 4> edges; //0 North, 1 South, 2 East, 3 West


};

#endif // ROOM_H
