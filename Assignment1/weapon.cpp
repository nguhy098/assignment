#include "weapon.h"

Weapon::Weapon()
{

}

Item Weapon::clone() const
{
    Weapon* newWeapon = new Weapon();
    newWeapon->name() = this->name();
    return *newWeapon;
}

