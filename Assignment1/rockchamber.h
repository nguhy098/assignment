#ifndef ROCKCHAMBER_H
#define ROCKCHAMBER_H
#include "room.h"

class RockChamber : public Room
{
public:
    RockChamber(int id);
    std::string description();
};

#endif // ROCKCHAMBER_H
