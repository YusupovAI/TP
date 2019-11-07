//
// Created by iusup on 23.03.2019.
//

#ifndef TP_MAGE_H
#define TP_MAGE_H

#include "Unit/BaseUnit.h"

class Mage final: public BaseUnit {
public:
    explicit Mage(const Point &p) : BaseUnit(p) {};

    void Accept(const Visitor& visit) const override {visit.VisitMage(*this);}; 

    ~Mage() override = default;
};


#endif //TP_MAGE_H
