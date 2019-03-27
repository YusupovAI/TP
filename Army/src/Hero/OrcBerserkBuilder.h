//
// Created by iusup on 26.03.2019.
//

#ifndef TP_ORCBERSERKBUILDER_H
#define TP_ORCBERSERKBUILDER_H

#include "HeroBuilder.h"

class OrcBerserkBuilder final : public HeroBuilder {
public:
    OrcBerserkBuilder() = default;

    void BuildHP() override;

    void BuildTurnPoints() override;

    void BuildAbility() override;

    void BuildAttackRange() override;

    void BuildDamage() override;
};


#endif //TP_ORCBERSERKBUILDER_H
