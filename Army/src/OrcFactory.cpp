//
// Created by iusup on 23.03.2019.
//

#include "OrcFactory.h"
#include "Mage/OrcMage.h"
#include "Infantry/OrcInfantry.h"
#include "Horseman/OrcHorseman.h"

std::shared_ptr <Unit> OrcFactory::CreateMage(const Point& p) const {
    return std::shared_ptr<Unit>(new OrcMage(p));
}

std::shared_ptr <Unit> OrcFactory::CreateHorseman(const Point &p) const {
    return std::shared_ptr<Unit>(new OrcHorseman(p));
}

std::shared_ptr <Unit> OrcFactory::CreateInfantry(const Point& p) const {
    return std::shared_ptr<Unit>(new OrcInfantry(p));
}