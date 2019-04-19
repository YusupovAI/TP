//
// Created by iusup on 23.03.2019.
//

#ifndef TP_UNIT_H
#define TP_UNIT_H

#include "Point.h"
#include <memory>
#include "Attack.h"

class Unit {
public:
    explicit Unit(const Point &);

    Unit() = default;

    Unit(const Unit &) = default;

    virtual void Offense(const std::shared_ptr<Unit> &);

    virtual void Move(const Point &);

    unsigned int GetHP() const;

    void SetHP(int hp);

    unsigned int GetCurTurnPoints() const;

    unsigned int GetTurnPoints() const;

    void SetTurnPoints(unsigned int turn_points);

    void SetCurTurnPoints(unsigned int cur_turn_points);

    Attack GetAttack() const;

    void SetAttack(Attack attack);

    unsigned int GetAttackRange() const;

    void SetAttackRange(unsigned int attack_range);

    Point GetPosition() const;

    void SetPosition(const Point &position);

    virtual void Attacked(const Attack& attack);

    virtual ~Unit() = default;

protected:
    int hp_;
    unsigned int turn_points_;
    unsigned int cur_turn_points_;
    unsigned int damage_;
    unsigned int attack_range_;
    Point position_;
    Attack attack_;
};


#endif //TP_WARRIOR_H
