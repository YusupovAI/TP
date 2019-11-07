#include "Unit/FireAttackUnit.h"
#include "Attack/Attack.h"
#include "Attack/UsualAttack.h"

FireAttackUnit::FireAttackUnit(const std::shared_ptr<Unit>& unit) : UnitDecorator(unit) {};

void FireAttackUnit::Offense(const std::shared_ptr<Unit>& unit) {
    UnitDecorator::Offense(unit);
    std::shared_ptr<Attack> attack = std::make_shared<UsualAttack>(10);
    if (unit && (UnitDecorator::GetPosition() - unit->GetPosition()).Length() <= UnitDecorator::GetAttackRange()) {
	unit->Attacked(attack);
    } 
}
