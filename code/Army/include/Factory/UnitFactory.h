//
// Created by iusup on 23.03.2019.
//

#ifndef TP_UNITFACTORY_H
#define TP_UNITFACTORY_H


#include "Unit/Unit.h"
#include <memory>
#include "Point.h"

class UnitFactory {
public:
    UnitFactory() = default;

    virtual std::shared_ptr<Unit> CreateInfantry(const Point &) const = 0;

    virtual std::shared_ptr<Unit> CreateHorseman(const Point &) const = 0;

    virtual std::shared_ptr<Unit> CreateMage(const Point &) const = 0;

    virtual ~UnitFactory() = default;
};

#endif //TP_FACTORY_H
