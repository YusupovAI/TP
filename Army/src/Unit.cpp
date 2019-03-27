//
// Created by iusup on 24.03.2019.
//

#include "Unit.h"
#include <stdexcept>
#include <string>

Unit::Unit(const Point &p) : position_(p) {}


void Unit::Attack(const std::shared_ptr<Unit> &w) {
    if (w == nullptr) {
        throw std::logic_error(std::string("Nullptr exception"));
    }
    if (cur_turn_points_ > 0 && (w->position_ - position_).Length() < attack_range_) {
        w->hp_ -= damage_;
        cur_turn_points_ = 0;
    }
}

void Unit::Move(const Point &p) {
    if ((p - position_).Length() == 1 && cur_turn_points_ > 0) {
        --cur_turn_points_;
        position_ = p;
    }
}


int Unit::GetHP() const {
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

unsigned int Unit::GetDamage() const {
    return damage_;
}

void Unit::SetDamage(unsigned int damage) {
    damage_ = damage;
}

unsigned int Unit::GetAttackRange() const {
    return attack_range_;
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




