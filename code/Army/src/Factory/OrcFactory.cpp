#include "Factory/OrcFactory.h"
#include "Unit/Mage.h"
#include "Unit/Horseman.h"
#include "Unit/Infantry.h"
#include "settings/characteristics.h"
#include "SFML/Graphics.hpp"

OrcFactory::OrcFactory() {
    infantry_model_ = sf::CircleShape(16, 4);
    infantry_model_.setFillColor(sf::Color(0, 0, 128));
    mage_model_ = sf::CircleShape(16, 3);
    mage_model_.setFillColor(sf::Color(0, 0, 128));
    horseman_model_ = sf::CircleShape(16, 30);
    horseman_model_.setFillColor(sf::Color(0, 0, 128));
}


std::shared_ptr<Unit> OrcFactory::CreateMage(const Point &p) const {
    auto res = std::make_shared<Mage>(p);
    res->SetHP(OrcCharacteristics::mage_hp);
    res->SetTurnPoints(OrcCharacteristics::mage_turn_points);
    res->SetCurTurnPoints(res->GetTurnPoints());
    res->SetAttack(OrcCharacteristics::mage_attack);
    res->SetAttackRange(OrcCharacteristics::mage_attack_range);
    res->SetShape(mage_model_);
    return res;
}

std::shared_ptr<Unit> OrcFactory::CreateHorseman(const Point &p) const {
    auto res =  std::make_shared<Horseman>(p);
    res->SetHP(OrcCharacteristics::horseman_hp);
    res->SetTurnPoints(OrcCharacteristics::horseman_turn_points);
    res->SetCurTurnPoints(res->GetTurnPoints());
    res->SetAttack(OrcCharacteristics::horseman_attack);
    res->SetAttackRange(OrcCharacteristics::horseman_attack_range);
    res->SetShape(horseman_model_);
    return res;
}

std::shared_ptr<Unit> OrcFactory::CreateInfantry(const Point &p) const {
    auto res = std::make_shared<Infantry>(p);
    res->SetHP(OrcCharacteristics::infantry_hp);
    res->SetAttackRange(OrcCharacteristics::infantry_attack_range);
    res->SetAttack(OrcCharacteristics::infantry_attack);
    res->SetTurnPoints(OrcCharacteristics::infantry_turn_points);
    res->SetCurTurnPoints(res->GetTurnPoints());
    res->SetShape(infantry_model_);
    return res;
}
