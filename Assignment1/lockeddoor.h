#ifndef LOCKEDDOOR_H
#define LOCKEDDOOR_H
#include "doorway.h"

class LockedDoor : public Doorway
{
public:
    LockedDoor();
    char dislayCharacter() override;
    bool isEntrance() override;
    bool isExit() override;
private:
    bool isEn;
    bool isEx;
};

#endif // LOCKEDDOOR_H
