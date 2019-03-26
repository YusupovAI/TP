//
// Created by iusup on 23.03.2019.
//

#ifndef TP_MAGE_H
#define TP_MAGE_H

#include "Warrior.h"

class Mage : public Warrior {
public:
    Mage(const Point& p) : Warrior(p) {};
    virtual ~Mage() {};
};


#endif //TP_MAGE_H
