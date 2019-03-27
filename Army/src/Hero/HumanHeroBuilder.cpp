//
// Created by iusup on 27.03.2019.
//

#include "HumanHeroBuilder.h"


void HumanHeroBuilder::BuildCharacteristics() {
    result_ = std::make_shared<Hero>();
    result_->SetHP(200);
    result_->SetMana(50);
    result_->SetTurnPoints(4);
    result_->SetHorse(true);
    result_->SetDamage(20);
}


void HumanHeroBuilder::BuildAbility() {
    result_->SetAbility(Hero::EAbilityType::heal);
    result_->SetMana(result_->GetMana() + 100);
    result_->SetHP(result_->GetHP() + 100);
    result_->SetAttackRange(5);
}


void HumanHeroBuilder::BuildWeapon() {
    result_->SetDamage(result_->GetDamage() + 10);
    result_->SetWeapon(Hero::EWeaponType::sword);
    result_->SetShield(true);
    result_->SetHP(result_->GetHP() + 25);
    result_->SetAttackRange(1);
}