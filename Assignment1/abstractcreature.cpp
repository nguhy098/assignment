#include "abstractcreature.h"

AbstractCreature::AbstractCreature(std::string name): _name{name}
{

}
std::string AbstractCreature::name() const
{
    return _name;
}
char AbstractCreature::displayCharacter() const
{
    return 'M';
}
AbstractCreature AbstractCreature::clone() const
{

}
