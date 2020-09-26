#include "item.h"

Item::Item(std::string name) : _name{name}
{   
}
std::string Item::name() const{
    return _name;
}
char Item::displayCharacter() const{
    return 'L';
}
Item Item::clone() const {
    //return _weapon + _consumable;
}
