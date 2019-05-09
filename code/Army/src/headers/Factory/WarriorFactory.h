//
// Created by iusup on 23.03.2019.
//

#ifndef TP_WARRIORFACTORY_H
#define TP_WARRIORFACTORY_H


#include "Unit.h"
#include <memory>
#include "Point.h"

class WarriorFactory {
public:
    WarriorFactory() = default;

    virtual std::shared_ptr<Unit> CreateInfantry(const Point &) const = 0;

    virtual std::shared_ptr<Unit> CreateHorseman(const Point &) const = 0;

    virtual std::shared_ptr<Unit> CreateMage(const Point &) const = 0;

    virtual ~WarriorFactory() = default;
};

#endif //TP_FACTORY_H
