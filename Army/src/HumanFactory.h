//
// Created by iusup on 23.03.2019.
//

#ifndef TP_HUMANFACTORY_H
#define TP_HUMANFACTORY_H

#include "WarriorFactory.h"

class HumanFactory final : public WarriorFactory {
public:
    HumanFactory() {};

    std::shared_ptr<Warrior> CreateInfantry(const Point &) const override;

    std::shared_ptr<Warrior> CreateCatapult(const Point &) const override;

    std::shared_ptr<Warrior> CreateMage(const Point &) const override;
};


#endif //TP_HUMANFACTORY_H
