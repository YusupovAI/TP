//
// Created by iusup on 23.03.2019.
//

#ifndef TP_WARRIORFACTORY_H
#define TP_WARRIORFACTORY_H


#include "Warrior.h"
#include <memory>
#include "Point.h"

class WarriorFactory {
public:
    WarriorFactory() {};

    virtual std::shared_ptr<Warrior> CreateInfantry(const Point &) const = 0;

    virtual std::shared_ptr<Warrior> CreateCatapult(const Point &) const = 0;

    virtual std::shared_ptr<Warrior> CreateMage(const Point &) const = 0;

    virtual ~WarriorFactory() {};
};

#endif //TP_FACTORY_H