#ifndef CONSUMABLE_H
#define CONSUMABLE_H
#include <ostream>
#include <string>
#include <iostream>
#include "item.h"

class Consumable : public Item
{
public:
    Consumable();
    Item clone() const override;
};

#endif // CONSUMABLE_H
