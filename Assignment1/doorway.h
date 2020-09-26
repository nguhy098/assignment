#ifndef DOORWAY_H
#define DOORWAY_H
#include <ostream>
#include "roomedge.h"

class Doorway : public RoomEdge
{
public:
    Doorway();
    Doorway(const Doorway& other) = default;
    void connect(Doorway*);
    virtual bool isEntrance();
    virtual bool isExit();
    char dislayCharacter() const override;

private:
    Doorway* _opposite;
    char _i;
};

#endif // DOORWAY_H
