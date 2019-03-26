//
// Created by iusup on 24.03.2019.
//

#include "Warrior.h"
#include <stdexcept>
#include <string>

Warrior::Warrior(const Point &p) : position_(p) {}

int Warrior::Points() const {
    return cur_turn_points_;
}

int Warrior::Damage() const {
    return damage_;
}

Point Warrior::Position() const {
    return position_;
}

int Warrior::Range() const {
    return attack_range_;
}

void Warrior::Attack(const std::shared_ptr<Warrior> &w) {
    if(w == nullptr) {
        throw std::logic_error(std::string("Nullptr exception"));
    }
    if (cur_turn_points_ > 0 && (w->position_ - position_).Length() < attack_range_) {
        w->hp_ -= damage_;
        cur_turn_points_ = 0;
    }
}

void Warrior::Move(const Point &p) {
    if ((p - position_).Length() == 1 && cur_turn_points_ > 0) {
        --cur_turn_points_;
        position_ = p;
    }
}

int Warrior::HP() const {
    return hp_;
}




