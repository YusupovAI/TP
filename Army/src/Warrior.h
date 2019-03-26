//
// Created by iusup on 23.03.2019.
//

#ifndef TP_WARRIOR_H
#define TP_WARRIOR_H

#include "Point.h"
#include <memory>

class Warrior {
public:
    explicit Warrior(const Point&);

    virtual void Attack(const std::shared_ptr <Warrior> &);

    virtual void Move(const Point &);

    int HP() const;

    int Points() const;

    int Damage() const;

    Point Position() const;

    int Range() const;

    virtual ~Warrior() {};

protected:
    int hp_;
    int turn_points_;
    int cur_turn_points_;
    int damage_;
    int attack_range_;
    Point position_;
};

#endif //TP_WARRIOR_H
