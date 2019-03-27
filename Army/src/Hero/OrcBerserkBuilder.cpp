//
// Created by iusup on 26.03.2019.
//

#include "OrcBerserkBuilder.h"

void OrcBerserkBuilder::BuildHP() {
    hero_->SetHP(350);
}

void OrcBerserkBuilder::BuildAbility() {
    hero_->SetAbility(Hero::EAbilityType::fighting_spirit);
}

void OrcBerserkBuilder::BuildAttackRange() {
    hero_->SetAttackRange(1);
}

void OrcBerserkBuilder::BuildDamage() {
    hero_->SetDamage(30);
}

void OrcBerserkBuilder::BuildTurnPoints() {
    hero_->SetTurnPoints(3);
}