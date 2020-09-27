#ifndef BLOCKEDDOORWAY_H
#define BLOCKEDDOORWAY_H
#include "doorway.h"

class BlockedDoorway : public Doorway
{
public:
    BlockedDoorway();
    char dislayCharacter() override;
    bool isEntrance() override;
    bool isExit() override;
private:
    bool isEn;
    bool isEx;
};

#endif // BLOCKEDDOORWAY_H
