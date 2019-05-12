//
// Created by iusup on 27.03.2019.
//

#include "Hero/HumanHeroBuilder.h"
#include "Attack/Attack.h"
#include "settings/characteristics.h"
#include "SFML/Graphics.hpp"


void HumanHeroBuilder::BuildCharacteristics() {
    result_ = std::make_shared<Hero>();
    result_->SetHP(HumanCharacteristics::hero_hp);
    result_->SetAttack(HumanCharacteristics::hero_attack);
    result_->SetTurnPoints(HumanCharacteristics::hero_turn_points);
    result_->SetCurTurnPoints(HumanCharacteristics::hero_turn_points);
    result_->SetAttackRange(HumanCharacteristics::hero_attack_range);
}


void HumanHeroBuilder::BuildAbility(Hero::EAbilityType ability) {
    result_->SetAbility(ability);
    result_->SetMana(HumanCharacteristics::hero_mana);
}


void HumanHeroBuilder::BuildWeapon(Hero::EWeaponType weapon) {
    result_->SetWeapon(weapon);
    switch (weapon) {
        case Hero::EWeaponType::sword:
            result_->SetAttack(HumanCharacteristics::hero_sword_attack);
            break;
        case Hero::EWeaponType::drums: {
            result_->SetAttack(HumanCharacteristics::hero_drums_attack);
            result_->SetAttackRange(HumanCharacteristics::hero_drums_attack_range);
            break;
        }
        default:
            result_->SetAttack(HumanCharacteristics::hero_attack);
            break;
    }
}

void HumanHeroBuilder::BuildHorse(unsigned int turn_points) {
    result_->SetTurnPoints(turn_points);
    result_->SetHorse(true);
}

void HumanHeroBuilder::BuildShield(unsigned int armor) {
    result_->SetShield(true);
    result_->SetArmor(armor);
}

void HumanHeroBuilder::BuildShape() {
    sf::CircleShape shape(16, 6);
    shape.setFillColor(sf::Color(128, 0, 0));
    result_->SetShape(shape);
}
