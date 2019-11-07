#ifndef TP_PERCENTATTACK_H
#define TP_PERCENTATTACK_H

#include "Attack/Attack.h"


class PercentAttack : public Attack {
public:
    PercentAttack(const unsigned int damage);
    void Apply(Unit&) const override;
};


#endif
