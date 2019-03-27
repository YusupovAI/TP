//
// Created by iusup on 26.03.2019.
//

#include "OrcShamanBuilder.h"


void OrcShamanBuilder::BuildHP() {
    hero_->SetHP(300);
}

void OrcShamanBuilder::BuildAbility() {
    hero_->SetAbility(Hero::EAbilityType::lightning);
}

void OrcShamanBuilder::BuildAttackRange() {
    hero_->SetAttackRange(5);
}

void OrcShamanBuilder::BuildDamage() {
    hero_->SetDamage(18);
}

void OrcShamanBuilder::BuildTurnPoints() {
    hero_->SetTurnPoints(5);
}