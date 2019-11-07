#include "Attack/PercentAttack.h"
#include "Unit/Unit.h"

PercentAttack::PercentAttack(const unsigned int damage) : Attack(damage) {}

void PercentAttack::Apply(Unit& unit) const {
    unit.SetHP(unit.GetHP() * 4 / 5);
    if (unit.GetHP() >= damage_) {
	unit.SetHP(unit.GetHP() - damage_);
    } else {
	unit.SetHP(0);
    }
}
