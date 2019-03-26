//
// Created by iusup on 26.03.2019.
//

#ifndef TP_HORSEMAN_H
#define TP_HORSEMAN_H

#include "Unit.h"

class Horseman : public Unit {
public:
    explicit Horseman(const Point&);
    ~Horseman() override = default;
};


#endif //TP_HORSEMAN_H
