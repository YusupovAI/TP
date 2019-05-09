//
// Created by iusup on 23.03.2019.
//

#ifndef TP_HUMANFACTORY_H
#define TP_HUMANFACTORY_H

#include "UnitFactory.h"

class HumanFactory final : public UnitFactory {
public:
    HumanFactory() = default;

    std::shared_ptr<Unit> CreateInfantry(const Point &) const override;

    std::shared_ptr<Unit> CreateHorseman(const Point &) const override;

    std::shared_ptr<Unit> CreateMage(const Point &) const override;
};


#endif //TP_HUMANFACTORY_H
