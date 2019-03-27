//
// Created by iusup on 26.03.2019.
//

#ifndef TP_HUMANWIZARDBUILDER_H
#define TP_HUMANWIZARDBUILDER_H

#include "HeroBuilder.h"

class HumanWizardBuilder final : public HeroBuilder {
public:
    HumanWizardBuilder() = default;

    void BuildHP() override;

    void BuildTurnPoints() override;

    void BuildAbility() override;

    void BuildAttackRange() override;

    void BuildDamage() override;
};


#endif //TP_HUMANWIZARDBUILDER_H
