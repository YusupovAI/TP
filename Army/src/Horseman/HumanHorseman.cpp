//
// Created by iusup on 26.03.2019.
//

#include "HumanHorseman.h"

HumanHorseman::HumanHorseman(const Point &p) : Horseman(p) {
    turn_points_ = 4;
    cur_turn_points_ = 4;
    damage_ = 12;
    hp_ = 100;
    attack_range_ = 1;
}