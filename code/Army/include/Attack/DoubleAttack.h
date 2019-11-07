#ifndef TP_DOUBLEATTACK_H
#define TP_DOUBLEATTACK_H

#include "Attack/Attack.h"

class DoubleAttack : public Attack {
public:
    DoubleAttack(const unsigned int damage);
    void Apply(Unit&) const override;
};

#endif
