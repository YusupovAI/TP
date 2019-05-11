//
// Created by iusup on 23.03.2019.
//

#ifndef TP_UNIT_H
#define TP_UNIT_H

#include "Point.h"
#include <memory>
#include "Attack.h"
#include "SFML/Graphics.hpp"

class Unit {
public:
    explicit Unit(const Point &);

    Unit() = default;

    Unit(const Unit &) = default;

    virtual void Offense(const std::shared_ptr<Unit> &) = 0;

    virtual void Move(const Point &) = 0;

    virtual unsigned int GetHP() const = 0;

    virtual void SetHP(int hp) = 0;

    virtual unsigned int GetCurTurnPoints() const = 0;

    virtual unsigned int GetTurnPoints() const = 0;

    virtual void SetTurnPoints(unsigned int turn_points) = 0;

    virtual void SetCurTurnPoints(unsigned int cur_turn_points) = 0;

    virtual Attack GetAttack() const = 0;

    virtual void SetAttack(Attack attack) = 0;

    virtual unsigned int GetAttackRange() const = 0;

    virtual void SetAttackRange(unsigned int attack_range) = 0;

    virtual Point GetPosition() const = 0;

    virtual void SetPosition(const Point &position) = 0;

    virtual void Attacked(const Attack& attack) = 0;

    virtual const std::shared_ptr<sf::CircleShape>& GetShape() const = 0;

    virtual void SetShape(const sf::CircleShape&) = 0;

    virtual void Update() = 0;

    virtual ~Unit() = default;

};


#endif //TP_WARRIOR_H
