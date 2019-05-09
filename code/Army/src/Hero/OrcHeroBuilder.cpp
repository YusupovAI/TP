//
// Created by iusup on 27.03.2019.
//

#include "Hero/OrcHeroBuilder.h"
#include <cstdlib>
#include "settings/characteristics.h"


void OrcHeroBuilder::BuildWeapon(Hero::EWeaponType weapon) {
    result_->SetWeapon(weapon);
    switch (weapon) {
        case Hero::EWeaponType::stick:
            result_->SetAttack(OrcCharacteristics::hero_stick_attack);
            break;
        case Hero::EWeaponType::mythical_thing:
            result_->SetAttack(OrcCharacteristics::hero_mythical_thing_attack);
            break;
        case Hero::EWeaponType::sword:
            result_->SetAttack(OrcCharacteristics::hero_sword_attack);
            break;
        default:
            result_->SetAttack(OrcCharacteristics::hero_attack);
    }
}

void OrcHeroBuilder::BuildAbility(Hero::EAbilityType ability) {
    result_->SetAbility(ability);
    result_->SetMana(OrcCharacteristics::hero_mana);
}

void OrcHeroBuilder::BuildCharacteristics() {
    result_ = std::make_shared<Hero>();
    result_->SetHP(OrcCharacteristics::hero_hp);
    result_->SetTurnPoints(OrcCharacteristics::hero_turn_points);
    result_->SetAttack(OrcCharacteristics::hero_attack);
    result_->SetAttackRange(OrcCharacteristics::hero_attack_range);
}

void OrcHeroBuilder::BuildShield(unsigned int armor) {
    if (armor > 0) {
        result_->SetShield(true);
    }
}

void OrcHeroBuilder::BuildHorse(unsigned int turn_points) {
    result_->SetHorse(true);
}
