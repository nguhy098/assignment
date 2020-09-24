#ifndef ONEWAYDOOR_H
#define ONEWAYDOOR_H
#include "doorway.h"

class OneWayDoor  : public Doorway
{
public:
    OneWayDoor();
    void a();
    char dislayCharacter() const override;
    bool isEntrance() override;
    bool isExit() override;

private:
    bool isE;
    bool isEx;

};

#endif // ONEWAYDOOR_H
