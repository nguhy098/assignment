#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <ostream>

class Item
{
public:
    Item();
    Item(std::string name);
    std::string name() const;
    char displayCharacter() const;
    virtual Item clone() const;

private:
    std::string _name;


};

#endif // ITEM_H
