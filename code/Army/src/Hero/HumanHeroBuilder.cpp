//
// Created by iusup on 27.03.2019.
//

#include "HumanHeroBuilder.h"


void HumanHeroBuilder::BuildCharacteristics() {
    result_ = std::make_shared<Hero>();
    result_->SetHP(250);
    result_->SetDamage(20);
    result_->SetTurnPoints(3);
    result_->SetAttackRange(1);
}


void HumanHeroBuilder::BuildAbility() {
    result_->SetAbility(Hero::EAbilityType::heal);
    result_->SetMana(100);
    result_->SetAttackRange(5);
}


void HumanHeroBuilder::BuildWeapon() {
    result_->SetWeapon(Hero::EWeaponType::sword);
    result_->SetDamage(30);
    result_->SetAttackRange(1);
}

void HumanHeroBuilder::BuildHorse() {
    result_->SetTurnPoints(5);
    result_->SetHorse(true);
}

void HumanHeroBuilder::BuildShield() {
    result_->SetShield(true);
    result_->SetArmor(4);
}