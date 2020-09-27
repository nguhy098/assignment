#ifndef OPENDOORWAY_H
#define OPENDOORWAY_H
#include "doorway.h"

class OpenDoorWay : public Doorway
{
public:
    OpenDoorWay();
    char dislayCharacter() override;
    bool isEntrance() override;
    bool isExit() override;
private:
    bool isEn;
    bool isEx;
};

#endif // OPENDOORWAY_H
