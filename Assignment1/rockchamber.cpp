#include "rockchamber.h"

RockChamber::RockChamber(int id)  : Room(id)
{

}

std::string RockChamber::description()
{
    return "Rock Chamber";
}
