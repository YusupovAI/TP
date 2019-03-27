//
// Created by iusup on 27.03.2019.
//

#include "OrcHeroBuilder.h"


void OrcHeroBuilder::BuildWeapon() {
    result_->SetWeapon(Hero::EWeaponType::stick);
    result_->SetDamage(35);
    result_->SetAttackRange(1);
}

void OrcHeroBuilder::BuildAbility() {
    result_->SetMana(50);
    result_->SetAbility(Hero::EAbilityType::lightning);
    result_->SetAttackRange(3);
}

void OrcHeroBuilder::BuildCharacteristics() {
    result_ = std::make_shared<Hero>();
    result_->SetHP(300);
    result_->SetTurnPoints(3);
    result_->SetDamage(30);
}

void OrcHeroBuilder::BuildShield() {}

void OrcHeroBuilder::BuildHorse() {}