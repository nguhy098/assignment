#include "abstractcreature.h"
#include "onewaydoor.h"
AbstractCreature::AbstractCreature(){}

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
    OneWayDoor owd;
    if(owd.isExit()){
        return '*';
    }
}

AbstractCreature AbstractCreature::clone() const
{
    AbstractCreature* newAbstractCreature = new AbstractCreature();
    newAbstractCreature->name() = this->name();
    return *newAbstractCreature;
}
