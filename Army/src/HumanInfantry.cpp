//
// Created by iusup on 23.03.2019.
//

#include "HumanInfantry.h"


HumanInfantry::HumanInfantry(const Point &p) : Infantry(p) {
    turn_points_ = 4;
    cur_turn_points_ = 4;
    damage_ = 15;
    hp_ = 100;
    attack_range_ = 1;
}
