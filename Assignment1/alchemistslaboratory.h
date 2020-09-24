#ifndef ALCHEMISTSLABORATORY_H
#define ALCHEMISTSLABORATORY_H
#include "room.h"

class AlchemistsLaboratory : public Room
{
public:
    AlchemistsLaboratory(int id);
    std::string description();
};

#endif // ALCHEMISTSLABORATORY_H
