//
// Created by iusup on 23.03.2019.
//

#ifndef TP_MAGE_H
#define TP_MAGE_H

#include "Unit.h"

class Mage : public Unit {
public:
    explicit Mage(const Point &p) : Unit(p) {};

    ~Mage() override = default;
};


#endif //TP_MAGE_H
