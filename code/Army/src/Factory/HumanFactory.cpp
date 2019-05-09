//
// Created by iusup on 23.03.2019.
//

#include "HumanFactory.h"
#include "Horseman.h"
#include "Mage.h"
#include "Infantry.h"

std::shared_ptr<Unit> HumanFactory::CreateHorseman(const Point &p) const {
    auto res =  std::make_shared<Horseman>(p);
    res->SetHP(100);
    res->SetTurnPoints(4);
    res->SetDamage(10);
    res->SetAttackRange(1);
    return res;
}

std::shared_ptr<Unit> HumanFactory::CreateInfantry(const Point &p) const {
    auto res = std::make_shared<Infantry>(p);
    res->SetHP(100);
    res->SetAttackRange(1);
    res->SetDamage(13);
    res->SetTurnPoints(3);
    return res;
}

std::shared_ptr<Unit> HumanFactory::CreateMage(const Point &p) const {
    auto res = std::make_shared<Mage>(p);
    res->SetHP(80);
    res->SetTurnPoints(3);
    res->SetDamage(8);
    res->SetAttackRange(4);
    return res;
}
