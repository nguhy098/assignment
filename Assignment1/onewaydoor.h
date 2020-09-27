#ifndef ONEWAYDOOR_H
#define ONEWAYDOOR_H
#include "doorway.h"

class OneWayDoor  : public Doorway
{
public:
    OneWayDoor();
    char dislayCharacter() override;
    bool isEntrance() override;
    bool isExit() override;

private:
    bool isE;
    bool isEx;

};

#endif // ONEWAYDOOR_H
