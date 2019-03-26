//
// Created by iusup on 23.03.2019.
//

#ifndef TP_INFANTRY_H
#define TP_INFANTRY_H

#include "Warrior.h"

class Infantry : public Warrior {
public:
    explicit Infantry(const Point& p) : Warrior(p) {};
    virtual ~Infantry() {};
};


#endif //TP_INFANTRY_H
