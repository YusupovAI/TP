//
// Created by iusup on 26.03.2019.
//

#include "HumanKnightBuilder.h"

void HumanKnightBuilder::BuildHP() {
    hero_->SetHP(300);
}

void HumanKnightBuilder::BuildAbility() {
    hero_->SetAbility(Hero::EAbilityType::heal);
}

void HumanKnightBuilder::BuildAttackRange() {
    hero_->SetAttackRange(1);
}

void HumanKnightBuilder::BuildDamage() {
    hero_->SetDamage(20);
}

void HumanKnightBuilder::BuildTurnPoints() {
    hero_->SetTurnPoints(4);
}