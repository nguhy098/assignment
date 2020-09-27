#ifndef WEAPON_H
#define WEAPON_H
#include <ostream>
#include <string>
#include <iostream>
#include "item.h"

using namespace  std;

class Weapon : public Item
{
public:
    Weapon();
    Item clone() const override;

};

#endif // WEAPON_H
