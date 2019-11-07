#include "Unit/DoubleAttackUnit.h"
#include "Unit/UnitDecorator.h"

DoubleAttackUnit::DoubleAttackUnit(std::shared_ptr<Unit>& unit) : UnitDecorator(unit) {}


void DoubleAttackUnit::Offense(const std::shared_ptr<Unit>& enemy) {
    UnitDecorator::Offense(enemy);
    UnitDecorator::SetCurTurnPoints(1);
    UnitDecorator::Offense(enemy);
}
