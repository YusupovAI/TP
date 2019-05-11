//
// Created by iusup on 24.03.2019.
//

#include "Unit/BaseUnit.h"
#include <stdexcept>
#include <string>

BaseUnit::BaseUnit(const Point &p) : position_(p), shape_(nullptr) {}


void BaseUnit::Offense(const std::shared_ptr<Unit> &w) {
    if (w == nullptr) {
        throw std::logic_error(std::string("Nullptr exception"));
    }
    if (cur_turn_points_ > 0 && (w->GetPosition() - position_).Length() <= attack_range_) {
        w->Attacked(attack_);
	cur_turn_points_ = 0;
    }
}

void BaseUnit::Attacked(const Attack& attack) {
    if (attack.GetDamage() > hp_) {
	hp_ = 0;
    } else {
	hp_ -= attack.GetDamage();
    }
}

void BaseUnit::Move(const Point &p) {
    if ((p - position_).Length() == 1 && cur_turn_points_ > 0) {
        --cur_turn_points_;
        position_ = p;
    }
}


unsigned int BaseUnit::GetHP() const {
    return hp_;
}

void BaseUnit::SetHP(int hp) {
    hp_ = hp;
}

unsigned int BaseUnit::GetCurTurnPoints() const {
    return cur_turn_points_;
}

void BaseUnit::SetTurnPoints(unsigned int turn_points) {
    turn_points_ = turn_points;
}

unsigned int BaseUnit::GetTurnPoints() const {
    return turn_points_;
}


void BaseUnit::SetAttack(Attack attack) {
    attack_ = attack;
}

unsigned int BaseUnit::GetAttackRange() const {
    return attack_range_;
}

Attack BaseUnit::GetAttack() const {
    return attack_;
}

void BaseUnit::SetAttackRange(unsigned int attack_range) {
    attack_range_ = attack_range;
}

Point BaseUnit::GetPosition() const {
    return position_;
}

void BaseUnit::SetPosition(const Point &position) {
    position_ = position;
}

void BaseUnit::SetCurTurnPoints(unsigned int cur_turn_points) {
    cur_turn_points_ = cur_turn_points;
}

const std::shared_ptr<sf::CircleShape>& BaseUnit::GetShape() const {
    return shape_;
}

void BaseUnit::SetShape(const sf::CircleShape& shape) {
    shape_ = std::make_shared<sf::CircleShape>(shape);
}

void BaseUnit::Update() {
    cur_turn_points_ = turn_points_;
}
