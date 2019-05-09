//
// Created by iusup on 24.03.2019.
//

#include "Unit/Unit.h"
#include <stdexcept>
#include <string>

Unit::Unit(const Point &p) : position_(p), shape_(nullptr) {}


void Unit::Offense(const std::shared_ptr<Unit> &w) {
    if (w == nullptr) {
        throw std::logic_error(std::string("Nullptr exception"));
    }
    w->Attacked(attack_);
}

void Unit::Attacked(const Attack& attack) {
}

void Unit::Move(const Point &p) {
    if ((p - position_).Length() == 1 && cur_turn_points_ > 0) {
        --cur_turn_points_;
        position_ = p;
    }
}


unsigned int Unit::GetHP() const {
    return hp_;
}

void Unit::SetHP(int hp) {
    hp_ = hp;
}

unsigned int Unit::GetCurTurnPoints() const {
    return cur_turn_points_;
}

void Unit::SetTurnPoints(unsigned int turn_points) {
    turn_points_ = turn_points;
}

unsigned int Unit::GetTurnPoints() const {
    return turn_points_;
}


void Unit::SetAttack(Attack attack) {
    attack_ = attack;
}

unsigned int Unit::GetAttackRange() const {
    return attack_range_;
}

Attack Unit::GetAttack() const {
    return attack_;
}

void Unit::SetAttackRange(unsigned int attack_range) {
    attack_range_ = attack_range;
}

Point Unit::GetPosition() const {
    return position_;
}

void Unit::SetPosition(const Point &position) {
    position_ = position;
}

void Unit::SetCurTurnPoints(unsigned int cur_turn_points) {
    cur_turn_points_ = cur_turn_points;
}

const std::shared_ptr<sf::CircleShape>& Unit::GetShape() const {
    return shape_;
}

void Unit::SetShape(const sf::CircleShape& shape) {
    shape_ = std::make_shared<sf::CircleShape>(shape);
}

