//
// Created by iusup on 26.03.2019.
//

#ifndef TP_HERO_H
#define TP_HERO_H

#include "Unit.h"
#include "Point.h"
#include <memory>

class Hero : public Unit {
public:
    explicit Hero(const Point &);

    enum EAbilityType {
        fireball, lightning,
        heal, fighting_spirit
    };

    void SetHP(unsigned int);

    void SetTurnPoints(unsigned int);

    void SetAbility(EAbilityType);

    void SetAttackRange(unsigned int);

    void SetDamage(unsigned int);

    void Cast(std::shared_ptr<Unit>);

private:
    EAbilityType ability_;
};


#endif //TP_HERO_H
