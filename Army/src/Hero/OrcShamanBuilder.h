//
// Created by iusup on 26.03.2019.
//

#ifndef TP_ORCSHAMANBUILDER_H
#define TP_ORCSHAMANBUILDER_H

#include "HeroBuilder.h"

class OrcShamanBuilder final : public HeroBuilder {
    OrcShamanBuilder() = default;

    void BuildHP() override;

    void BuildTurnPoints() override;

    void BuildAbility() override;

    void BuildAttackRange() override;

    void BuildDamage() override;
};


#endif //TP_ORCSHAMANBUILDER_H
