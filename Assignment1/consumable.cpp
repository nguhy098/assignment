
#include "consumable.h"

Consumable::Consumable()
{

}

Item Consumable::clone() const
{
    Consumable* newConsumable = new Consumable();
    newConsumable->name() = this->name();
    return *newConsumable;
}


