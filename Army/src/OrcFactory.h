//
// Created by iusup on 23.03.2019.
//

#ifndef TP_ORCFACTORY_H
#define TP_ORCFACTORY_H

#include "WarriorFactory.h"

class OrcFactory final : public WarriorFactory {
public:
    OrcFactory() {};

    std::shared_ptr<Warrior> CreateInfantry(const Point &) const override;

    std::shared_ptr<Warrior> CreateCatapult(const Point &) const override;

    std::shared_ptr<Warrior> CreateMage(const Point &) const override;
};


#endif //TP_ORCFACTORY_H
