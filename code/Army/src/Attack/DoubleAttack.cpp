#include "Attack/DoubleAttack.h"
#include "Unit/Unit.h"

DoubleAttack::DoubleAttack(const unsigned int damage) : Attack(damage) {}


void DoubleAttack::Apply(Unit& unit) const {
    if (unit.GetHP() >= 2 * damage_) {
	unit.SetHP(unit.GetHP() - 2 * damage_);
    } else {
	unit.SetHP(0);
    }
}
