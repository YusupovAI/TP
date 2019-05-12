//
// Created by iusup on 27.03.2019.
//

#ifndef TP_ORCHEROBUILDER_H
#define TP_ORCHEROBUILDER_H

#include "HeroBuilder.h"

class OrcHeroBuilder final : public HeroBuilder {
public:
    OrcHeroBuilder() = default;

    void BuildCharacteristics() override;

    void BuildAbility(Hero::EAbilityType) override;

    void BuildWeapon(Hero::EWeaponType) override;

    void BuildHorse(unsigned int turn_points) override;

    void BuildShield(unsigned int armor) override;

    void BuildShape() override;
};


#endif //TP_ORCHEROBUILDER_H
