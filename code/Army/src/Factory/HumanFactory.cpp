//
// Created by iusup on 23.03.2019.
//

#include "Factory/HumanFactory.h"
#include "Unit/Horseman.h"
#include "Unit/Mage.h"
#include "Unit/Infantry.h"
#include "settings/characteristics.h"

std::shared_ptr<Unit> HumanFactory::CreateHorseman(const Point &p) const {
    auto res =  std::make_shared<Horseman>(p);
    res->SetHP(HumanCharacteristics::horseman_hp);
    res->SetTurnPoints(HumanCharacteristics::horseman_turn_points);
    res->SetAttack(HumanCharacteristics::horseman_attack);
    res->SetAttackRange(HumanCharacteristics::horseman_attack_range);
    return res;
}

std::shared_ptr<Unit> HumanFactory::CreateInfantry(const Point &p) const {
    auto res = std::make_shared<Infantry>(p);
    res->SetHP(HumanCharacteristics::infantry_hp);
    res->SetAttackRange(HumanCharacteristics::infantry_attack_range);
    res->SetAttack(HumanCharacteristics::infantry_attack);
    res->SetTurnPoints(HumanCharacteristics::infantry_turn_points);
    return res;
}

std::shared_ptr<Unit> HumanFactory::CreateMage(const Point &p) const {
    auto res = std::make_shared<Mage>(p);
    res->SetHP(HumanCharacteristics::mage_hp);
    res->SetTurnPoints(HumanCharacteristics::mage_turn_points);
    res->SetAttack(HumanCharacteristics::mage_attack);
    res->SetAttackRange(HumanCharacteristics::mage_attack_range);
    return res;
}
