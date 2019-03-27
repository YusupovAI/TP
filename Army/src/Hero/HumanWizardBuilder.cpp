//
// Created by iusup on 26.03.2019.
//

#include "HumanWizardBuilder.h"

void HumanWizardBuilder::BuildHP() {
    hero_->SetHP(250);
}

void HumanWizardBuilder::BuildAbility() {
    hero_->SetAbility(Hero::EAbilityType::fireball);
}

void HumanWizardBuilder::BuildAttackRange() {
    hero_->SetAttackRange(10);
}

void HumanWizardBuilder::BuildDamage() {
    hero_->SetDamage(25);
}

void HumanWizardBuilder::BuildTurnPoints() {
    hero_->SetTurnPoints(5);
}