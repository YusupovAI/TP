//
// Created by iusup on 27.03.2019.
//

#include "OrcHeroBuilder.h"


void OrcHeroBuilder::BuildWeapon() {
    result_->SetWeapon(Hero::EWeaponType::stick);
    result_->SetHP(result_->GetHP() + 50);
    result_->SetAttackRange(1);
}

void OrcHeroBuilder::BuildAbility() {
    result_->SetMana(result_->GetMana() + 50);
    result_->SetWeapon(Hero::EWeaponType::mythical_thing);
    result_->SetAbility(Hero::EAbilityType::lightning);
    result_->SetAttackRange(3);
}

void OrcHeroBuilder::BuildCharacteristics() {
    result_ = std::make_shared<Hero>();
    result_->SetHP(300);
    result_->SetMana(0);
    result_->SetTurnPoints(3);
    result_->SetDamage(22);
}