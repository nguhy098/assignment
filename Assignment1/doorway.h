#ifndef DOORWAY_H
#define DOORWAY_H
#include <ostream>


class Doorway
{
public:
    Doorway();
    Doorway(const Doorway& other) = default;
    void connect();
    bool isEntrance();
    bool isExit();
};

#endif // DOORWAY_H
