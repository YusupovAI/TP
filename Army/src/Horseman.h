//
// Created by iusup on 26.03.2019.
//

#ifndef TP_HORSEMAN_H
#define TP_HORSEMAN_H

#include "Unit.h"

class Horseman final : public Unit {
public:
    explicit Horseman(const Point &p) : Unit(p) {};

    ~Horseman() override = default;
};


#endif //TP_HORSEMAN_H
