//
// Created by iusup on 27.03.2019.
//

#include "HumanHeroBuilder.h"


void HumanHeroBuilder::BuildCharacteristics() {
    result_ = std::make_shared<Hero>();
    result_->SetHP(250);
    result_->SetDamage(15);
    result_->SetTurnPoints(3);
    result_->SetAttackRange(1);
}


void HumanHeroBuilder::BuildAbility(Hero::EAbilityType ability) {
    result_->SetAbility(ability);
    result_->SetMana(100);
    switch (ability) {
        case Hero::EAbilityType::heal:
            result_->SetAttackRange(4);
            break;
        case Hero::EAbilityType::fireball:
            result_->SetAttackRange(5);
            break;
        case Hero::EAbilityType::lightning: {
            result_->SetAttackRange(4);
            result_->SetMana(150);
            break;
        }
        default:
            result_->SetAttackRange(3);
            break;
    }
}


void HumanHeroBuilder::BuildWeapon(Hero::EWeaponType weapon) {
    result_->SetWeapon(weapon);
    switch (weapon) {
        case Hero::EWeaponType::sword:
            result_->SetDamage(25);
            break;
        case Hero::EWeaponType::drums: {
            result_->SetDamage(20);
            result_->SetAttackRange(3);
            break;
        }
        default:
            result_->SetDamage(18);
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