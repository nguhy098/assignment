#ifndef ABSTRACTCREATURE_H
#define ABSTRACTCREATURE_H
#include <ostream>
#include <string>

class AbstractCreature
{
public:
    AbstractCreature(std::string name);
    AbstractCreature clone() const;
    std::string name() const;
    char displayCharacter() const;
private:
    std::string _name;
    char _display;
    std::string _monster;

};

#endif // ABSTRACTCREATURE_H
