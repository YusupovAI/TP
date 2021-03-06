//
// Created by iusup on 26.03.2019.
//

#ifndef TP_HORSEMAN_H
#define TP_HORSEMAN_H

#include "Unit/BaseUnit.h"

class Horseman final : public BaseUnit {
public:
    explicit Horseman(const Point &p) : BaseUnit(p) {};
    
    void Accept(const Visitor& visitor) const override {visitor.VisitHorseman(*this);}

    ~Horseman() override = default;
};


#endif //TP_HORSEMAN_H
