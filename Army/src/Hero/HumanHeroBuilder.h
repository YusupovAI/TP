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

    void BuildAbility() override;

    void BuildWeapon() override;

    void BuildHorse() override;

    void BuildShield() override;
};


#endif //TP_HUMANHEROBUILDER_H
