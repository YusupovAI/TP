#ifndef TP_FIREATTACKUNIT_h
#define TP_FIREATTACKUNIT_H

#include "Unit/UnitDecorator.h"
#include "Unit/Unit.h"
#include <memory>

class FireAttackUnit : public UnitDecorator {
public:
    FireAttackUnit(const std::shared_ptr<Unit>&);
    void Offense(const std::shared_ptr<Unit>&) override;
};

#endif
