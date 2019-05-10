#include "Unit/FireAttackUnit.h"
#include "Attack.h"

FireAttackUnit::FireAttackUnit(const std::shared_ptr<Unit>& unit) : UnitDecorator(unit) {};

void FireAttackUnit::Offense(const std::shared_ptr<Unit>& unit) {
    UnitDecorator::Offense(unit);
    Attack attack(Attack::AttackType::Fire, 10);
    if (unit && (UnitDecorator::GetPosition() - unit->GetPosition()).Length() <= UnitDecorator::GetAttackRange()) {
	unit->Attacked(attack);
    } 
}
