//
// Created by iusup on 23.03.2019.
//

#include "Factory/HumanFactory.h"
#include "Unit/Horseman.h"
#include "Unit/Mage.h"
#include "Unit/Infantry.h"
#include "settings/characteristics.h"
#include "Attack/Attack.h"
#include "SFML/Graphics.hpp"

HumanFactory::HumanFactory() {
    infantry_model_ = sf::CircleShape(16, 4);
    infantry_model_.setFillColor(sf::Color(128, 0, 0));
    mage_model_ = sf::CircleShape(16, 3);
    mage_model_.setFillColor(sf::Color(128, 0, 0));
    horseman_model_ = sf::CircleShape(16, 30);
    horseman_model_.setFillColor(sf::Color(128, 0, 0));
}

std::shared_ptr<Unit> HumanFactory::CreateHorseman(const Point &p) const {
    auto res =  std::make_shared<Horseman>(p);
    res->SetHP(HumanCharacteristics::horseman_hp);
    res->SetTurnPoints(HumanCharacteristics::horseman_turn_points);
    res->SetCurTurnPoints(res->GetTurnPoints());
    res->SetAttack(HumanCharacteristics::horseman_attack);
    res->SetAttackRange(HumanCharacteristics::horseman_attack_range);
    res->SetShape(horseman_model_);
    return res;
}

std::shared_ptr<Unit> HumanFactory::CreateInfantry(const Point &p) const {
    auto res = std::make_shared<Infantry>(p);
    res->SetHP(HumanCharacteristics::infantry_hp);
    res->SetAttackRange(HumanCharacteristics::infantry_attack_range);
    res->SetAttack(HumanCharacteristics::infantry_attack);
    res->SetTurnPoints(HumanCharacteristics::infantry_turn_points);
    res->SetCurTurnPoints(res->GetTurnPoints());
    res->SetShape(infantry_model_);
    return res;
}

std::shared_ptr<Unit> HumanFactory::CreateMage(const Point &p) const {
    auto res = std::make_shared<Mage>(p);
    res->SetHP(HumanCharacteristics::mage_hp);
    res->SetTurnPoints(HumanCharacteristics::mage_turn_points);
    res->SetCurTurnPoints(res->GetTurnPoints());
    res->SetAttack(HumanCharacteristics::mage_attack);
    res->SetAttackRange(HumanCharacteristics::mage_attack_range);
    res->SetShape(mage_model_);
    return res;
}
