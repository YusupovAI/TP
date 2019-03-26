//
// Created by iusup on 23.03.2019.
//

#include "HumanFactory.h"
#include "HumanMage.h"
#include "HumanInfantry.h"
#include "HumanCatapult.h"

std::shared_ptr<Warrior> HumanFactory::CreateCatapult(const Point& p) const {
    return std::shared_ptr<Warrior>(new HumanCatapult(p));
}

std::shared_ptr<Warrior> HumanFactory::CreateInfantry(const Point& p) const {
    return std::shared_ptr<Warrior>(new HumanInfantry(p));
}

std::shared_ptr<Warrior> HumanFactory::CreateMage(const Point& p) const {
    return std::shared_ptr<Warrior>(new HumanMage(p));
}