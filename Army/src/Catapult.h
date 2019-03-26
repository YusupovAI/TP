//
// Created by iusup on 23.03.2019.
//

#ifndef TP_CATAPULT_H
#define TP_CATAPULT_H

#include "Warrior.h"

class Catapult : public Warrior {
public:
    explicit Catapult(const Point&p) : Warrior(p) {};
    virtual ~Catapult() {};
};


#endif //TP_CATAPULT_H
