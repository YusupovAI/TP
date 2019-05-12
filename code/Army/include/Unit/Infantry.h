//
// Created by iusup on 23.03.2019.
//

#ifndef TP_INFANTRY_H
#define TP_INFANTRY_H

#include "Unit/BaseUnit.h"

class Infantry final : public BaseUnit {
public:
    explicit Infantry(const Point &p) : BaseUnit(p) {};

    void Accept(const Visitor& visit) const override {visit.VisitInfantry(*this);};

    ~Infantry() override = default;
};


#endif //TP_INFANTRY_H
