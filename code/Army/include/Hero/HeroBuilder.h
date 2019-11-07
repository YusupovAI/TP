//
// Created by iusup on 27.03.2019.
//

#ifndef TP_HEROBUILDER_H
#define TP_HEROBUILDER_H

#include "Hero.h"
#include <memory>

class HeroBuilder {
public:
    void Reset();

    virtual void BuildWeapon(Hero::EWeaponType) = 0;

    virtual void BuildAbility(Hero::EAbilityType) = 0;

    virtual void BuildCharacteristics() = 0;

    virtual void BuildHorse(unsigned int turn_points) = 0;

    virtual void BuildShield(unsigned int armor) = 0;

    void BuildPosition(const Point &);

    std::shared_ptr<Hero> GetResult() const;

    virtual void BuildShape() = 0;

    virtual ~HeroBuilder() = default;

protected:
    std::shared_ptr<Hero> result_;
};


#endif //TP_HEROBUILDER_H
