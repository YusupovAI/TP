//
// Created by iusup on 23.03.2019.
//

#include "HumanFactory.h"
#include "Mage/HumanMage.h"
#include "Infantry/HumanInfantry.h"
#include "Horseman/HumanHorseman.h"

std::shared_ptr<Unit> HumanFactory::CreateHorseman(const Point& p) const {
    return std::shared_ptr<Unit>(new HumanHorseman(p));
}

std::shared_ptr<Unit> HumanFactory::CreateInfantry(const Point& p) const {
    return std::shared_ptr<Unit>(new HumanInfantry(p));
}

std::shared_ptr<Unit> HumanFactory::CreateMage(const Point& p) const {
    return std::shared_ptr<Unit>(new HumanMage(p));
}