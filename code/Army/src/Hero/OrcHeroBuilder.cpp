//
// Created by iusup on 27.03.2019.
//

#include "Hero/OrcHeroBuilder.h"
#include <cstdlib>


void OrcHeroBuilder::BuildWeapon(Hero::EWeaponType weapon) {
    result_->SetWeapon(weapon);
    switch (weapon) {
        case Hero::EWeaponType::stick:
            result_->SetDamage(35);
            break;
        case Hero::EWeaponType::mythical_thing:
            result_->SetDamage(std::rand() % 10 + 30);
            break;
        case Hero::EWeaponType::sword:
            result_->SetDamage(33);
            break;
        default:
            result_->SetDamage(30);
    }
}

void OrcHeroBuilder::BuildAbility(Hero::EAbilityType ability) {
    result_->SetAbility(ability);
    result_->SetMana(50);
    switch (ability) {
        case Hero::EAbilityType::lightning:
            result_->SetAttackRange(4);
            break;
        case Hero::EAbilityType::fighting_spirit:
            result_->SetAttackRange(2);
            break;
        default:
            result_->SetAttackRange(3);
            break;
    }
}

void OrcHeroBuilder::BuildCharacteristics() {
    result_ = std::make_shared<Hero>();
    result_->SetHP(300);
    result_->SetTurnPoints(3);
    result_->SetDamage(20);
    result_->SetAttackRange(1);
}

void OrcHeroBuilder::BuildShield(unsigned int armor) {
    if (armor > 0) {
        result_->SetShield(true);
    }
}

void OrcHeroBuilder::BuildHorse(unsigned int turn_points) {
    result_->SetHorse(true);
}
