//
// Created by iusup on 23.03.2019.
//

#include "HumanFactory.h"
#include "Horseman.h"
#include "Mage.h"
#include "Infantry.h"

std::shared_ptr<Unit> HumanFactory::CreateHorseman(const Point &p) const {
    auto res =  std::shared_ptr<Unit>(new Horseman(p));
    res->SetHP(100);
    res->SetTurnPoints(4);
    res->SetDamage(12);
    res->SetAttackRange(1);
    return res;
}

std::shared_ptr<Unit> HumanFactory::CreateInfantry(const Point &p) const {
    auto res = std::shared_ptr<Unit>(new Infantry(p));
    res->SetHP(100);
    res->SetAttackRange(1);
    res->SetDamage(15);
    res->SetTurnPoints(4);
    return res;
}

std::shared_ptr<Unit> HumanFactory::CreateMage(const Point &p) const {
    auto res = std::shared_ptr<Unit>(new Mage(p));
    res->SetHP(80);
    res->SetTurnPoints(3);
    res->SetDamage(12);
    res->SetAttackRange(3);
    return res;
}
