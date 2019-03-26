//
// Created by iusup on 23.03.2019.
//

#include "OrcFactory.h"
#include "OrcMage.h"
#include "OrcInfantry.h"
#include "OrcCatapult.h"

std::shared_ptr <Warrior> OrcFactory::CreateMage(const Point& p) const {
    return std::shared_ptr<Warrior>(new OrcMage(p));
}

std::shared_ptr <Warrior> OrcFactory::CreateCatapult(const Point& p) const {
    return std::shared_ptr<Warrior>(new OrcCatapult(p));
}

std::shared_ptr <Warrior> OrcFactory::CreateInfantry(const Point& p) const {
    return std::shared_ptr<Warrior>(new OrcInfantry(p));
}