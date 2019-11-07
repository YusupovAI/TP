//
// Created by iusup on 27.03.2019.
//

#ifndef TP_HUMANHEROBUILDER_H
#define TP_HUMANHEROBUILDER_H

#include "HeroBuilder.h"


class HumanHeroBuilder final : public HeroBuilder {
public:
    HumanHeroBuilder() = default;

    void BuildCharacteristics() override;

    void BuildAbility(Hero::EAbilityType) override;

    void BuildWeapon(Hero::EWeaponType) override;

    void BuildHorse(unsigned int turn_points) override;

    void BuildShield(unsigned int armor) override;

    void BuildShape() override;
};


#endif //TP_HUMANHEROBUILDER_H
