//
// Created by iusup on 26.03.2019.
//

#ifndef TP_HUMANKNIGHTBUILDER_H
#define TP_HUMANKNIGHTBUILDER_H

#include "HeroBuilder.h"

class HumanKnightBuilder final : HeroBuilder {
public:
    HumanKnightBuilder() = default;

    void BuildHP() override;

    void BuildTurnPoints() override;

    void BuildAbility() override;

    void BuildAttackRange() override;

    void BuildDamage() override;
};


#endif //TP_HUMANKNIGHTBUILDER_H
