#ifndef TP_DOUBLEATTACKUNIT_H
#define TP_DOUBLEATTACKUNIT_H

#include "Unit/UnitDecorator.h"
#include <memory>
#include "Unit/Unit.h"

class DoubleAttackUnit : public UnitDecorator {
public:
    DoubleAttackUnit(std::shared_ptr<Unit>&);
    void Offense(const std::shared_ptr<Unit>&) override;
};

#endif
