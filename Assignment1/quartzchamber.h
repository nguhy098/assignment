#ifndef QUARTZCHAMBER_H
#define QUARTZCHAMBER_H
#include "room.h"

class QuartzChamber : public Room
{
public:
    QuartzChamber(int id);
    std::string desciption();
};

#endif // QUARTZCHAMBER_H
