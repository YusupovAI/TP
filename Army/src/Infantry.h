//
// Created by iusup on 23.03.2019.
//

#ifndef TP_INFANTRY_H
#define TP_INFANTRY_H

#include "Unit.h"

class Infantry : public Unit {
public:
    explicit Infantry(const Point &p) : Unit(p) {};

    ~Infantry() override = default;
};


#endif //TP_INFANTRY_H
