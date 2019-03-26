//
// Created by iusup on 24.03.2019.
//

#include "Unit.h"
#include <stdexcept>
#include <string>

Unit::Unit(const Point &p) : position_(p) {}

int Unit::Points() const {
    return cur_turn_points_;
}

int Unit::Damage() const {
    return damage_;
}

Point Unit::Position() const {
    return position_;
}

int Unit::Range() const {
    return attack_range_;
}

void Unit::Attack(const std::shared_ptr<Unit> &w) {
    if(w == nullptr) {
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

int Unit::HP() const {
    return hp_;
}




