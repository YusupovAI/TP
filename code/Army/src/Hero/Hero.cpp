//
// Created by iusup on 26.03.2019.
//

#include "Hero.h"

Hero::Hero()
        : Unit(), ability_(EAbilityType::ability_none), horse_(false), weapon_(EWeaponType::weapon_none),
          shield_(false), mana_(0), armor_(0) {}

Hero::Hero(const Point &p) : Unit(p), ability_(EAbilityType::ability_none), horse_(false),
                             weapon_(EWeaponType::weapon_none), shield_(false), mana_(0), armor_(0) {}

void Hero::Cast(std::shared_ptr<Unit> w) {}

void Hero::SetMana(unsigned int mana) {
    mana_ = mana;
}

unsigned int Hero::GetMana() const {
    return mana_;
}

Hero::EAbilityType Hero::GetAbility() const {
    return ability_;
}

Hero::EWeaponType Hero::GetWeapon() const {
    return weapon_;
}

void Hero::SetWeapon(Hero::EWeaponType weapon) {
    weapon_ = weapon;
}

void Hero::SetHorse(bool horse) {
    horse_ = horse;
}

bool Hero::GetHorse() const {
    return horse_;
}

bool Hero::GetShield() const {
    return shield_;
}

void Hero::SetShield(bool shield) {
    shield_ = shield;
}


void Hero::SetAbility(Hero::EAbilityType ability) {
    ability_ = ability;
}

void Hero::SetArmor(unsigned int armor) {
    armor_ = armor;
}

unsigned int Hero::GetArmor() const {
    return armor_;
}

void Hero::Attacked(unsigned int damage) {
    if (damage < armor_) { return; }
    damage -= armor_;
    if (damage > hp_) {

    } else {
        hp_ -= damage;
    }
}



