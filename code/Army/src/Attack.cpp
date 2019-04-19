#include "Attack.h"

Attack::Attack(AttackType attack_type, unsigned int damage) : attack_type_(attack_type), damage_(damage) {};

unsigned int Attack::GetDamage() {
    return damage_
}

AttackType Attack::GetType() {
    return attack_type_;
}

void Attack::SetType(AttackType attack_type) {
    attack_type_ = attack_type;
}

void Attack::SetDamage(unsigned int damage) {
    damage_ = damage;
}

bool Attack::operator ==(const Attack& attack) {
    return attack_type_ == attack.attack_type_ && damage_ == attack.damage_;
}
