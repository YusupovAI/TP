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

void Unit::SetHP(int hp_) {
    Unit::hp_ = hp_;
}

int Unit::GetCurTurnPoints() const {
    return cur_turn_points_;
}

void Unit::SetTurnPoints(int turn_points_) {
    Unit::cur_turn_points_ = Unit::turn_points_ = turn_points_;
}

int Unit::GetTurnPoints() const {
    return turn_points_;
}

int Unit::GetDamage() const {
    return damage_;
}

void Unit::SetDamage(int damage_) {
    Unit::damage_ = damage_;
}

int Unit::GetAttackRange() const {
    return attack_range_;
}

void Unit::SetAttackRange(int attack_range_) {
    Unit::attack_range_ = attack_range_;
}

const Point &Unit::GetPosition() const {
    return position_;
}

void Unit::SetPosition(const Point &position_) {
    Unit::position_ = position_;
}




