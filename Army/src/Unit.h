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

    virtual void Attack(const std::shared_ptr<Unit> &);

    virtual void Move(const Point &);

    int GetHP() const;

    void SetHP(int hp_);

    int GetCurTurnPoints() const;

    int GetTurnPoints() const;

    void SetTurnPoints(int turn_points_);

    int GetDamage() const;

    void SetDamage(int damage_);

    int GetAttackRange() const;

    void SetAttackRange(int attack_range_);

    const Point &GetPosition() const;

    void SetPosition(const Point &position_);

    virtual ~Unit() = default;

protected:
    int hp_;
    int turn_points_;
    int cur_turn_points_;
    int damage_;
    int attack_range_;
    Point position_;
};

#endif //TP_WARRIOR_H
