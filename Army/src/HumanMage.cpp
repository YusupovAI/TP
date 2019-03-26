//
// Created by iusup on 23.03.2019.
//

#include "HumanMage.h"

HumanMage::HumanMage(const Point &p) : Mage(p) {
    turn_points_ = 3;
    cur_turn_points_ = 3;
    damage_ = 12;
    hp_ = 80;
    attack_range_ = 3;
}