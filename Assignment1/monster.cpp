#include "monster.h"

Monster::Monster()
{

}

AbstractCreature Monster::clone() const
{
    Monster* newMonster = new Monster();
    newMonster->name() = this->name();
    return *newMonster;
}
