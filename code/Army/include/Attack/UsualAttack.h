#ifndef TP_USUALATTACK_H
#define TP_USUALATTACK_H

#include "Attack/Attack.h"

class UsualAttack : public Attack {
public:
    UsualAttack(const unsigned int damage);
    void Apply(Unit&) const override;
};

#endif
