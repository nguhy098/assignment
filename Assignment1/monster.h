#ifndef MONSTER_H
#define MONSTER_H
#include <ostream>
#include <iostream>
#include "abstractcreature.h"


class Monster : public AbstractCreature
{
public:
    Monster();
    AbstractCreature clone() const override;


};

#endif // MONSTER_H
