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

    void BuildWeapon() override;

    void BuildAbility() override;
};


#endif //TP_ORCHEROBUILDER_H
