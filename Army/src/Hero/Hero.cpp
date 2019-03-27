//
// Created by iusup on 26.03.2019.
//

#include "Hero.h"

Hero::Hero(const Point &p) : Unit(p) {}

void Hero::SetDamage(unsigned int damage) {
    damage_ = damage;
}

void Hero::SetAttackRange(unsigned int range) {
    attack_range_ = range;
}

void Hero::SetHP(unsigned int hp) {
    hp_ = hp;
}

void Hero::SetAbility(EAbilityType ability) {
    ability_ = ability;
}

void Hero::Cast(std::shared_ptr<Unit> w) {}