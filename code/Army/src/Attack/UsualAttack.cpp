#include "Attack/UsualAttack.h"
#include "Unit/Unit.h"

UsualAttack::UsualAttack(const unsigned int damage) : Attack(damage) {};

void UsualAttack::Apply(Unit& unit) const {
    if (unit.GetHP() >= damage_) {
	unit.SetHP(unit.GetHP() - damage_);
    } else {
	unit.SetHP(0);
    }
}
