#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <ostream>

class Item
{
public:
    Item(std::string name);
    std::string name() const;
    char displayCharacter() const;
    Item clone() const;
private:
    std::string _name;
    char _display;
    std::string _weapon;
    std::string _consumable;


};

#endif // ITEM_H
