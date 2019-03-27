//
// Created by iusup on 23.03.2019.
//

#ifndef TP_WARRIOR_H
#define TP_WARRIOR_H

#include "Point.h"
#include <memory>

class Unit {
public:
    explicit Unit(const Point &);

    Unit() = default;

    Unit(const Unit &) = default;

    virtual void Attack(const std::shared_ptr<Unit> &);

    virtual void Move(const Point &);

    int GetHP() const;

    void SetHP(int hp);

    unsigned int GetCurTurnPoints() const;

    unsigned int GetTurnPoints() const;

    void SetTurnPoints(unsigned int turn_points);

    void SetCurTurnPoints(unsigned int cur_turn_points);

    unsigned int GetDamage() const;

    void SetDamage(unsigned int damage);

    unsigned int GetAttackRange() const;

    void SetAttackRange(unsigned int attack_range);

    Point GetPosition() const;

    void SetPosition(const Point &position);

    virtual void Attacked(unsigned int damage);

    virtual ~Unit() = default;

protected:
    int hp_;
    unsigned int turn_points_;
    unsigned int cur_turn_points_;
    unsigned int damage_;
    unsigned int attack_range_;
    Point position_;
};

#endif //TP_WARRIOR_H
