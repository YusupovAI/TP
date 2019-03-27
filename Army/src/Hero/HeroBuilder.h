//
// Created by iusup on 26.03.2019.
//

#ifndef TP_HEROBUILDER_H
#define TP_HEROBUILDER_H

#include "Hero.h"
#include <memory>
#include "Point.h"

class HeroBuilder {
public:
    HeroBuilder() = default;

    virtual ~HeroBuilder() {};

    std::shared_ptr<Hero> GetHero();

    void CreateHero(const Point &);

    virtual void BuildHP() = 0;

    virtual void BuildTurnPoints() = 0;

    virtual void BuildAbility() = 0;

    virtual void BuildAttackRange() = 0;

    virtual void BuildDamage() = 0;

protected:
    std::shared_ptr<Hero> hero_;
};


#endif //TP_HEROBUILDER_H
