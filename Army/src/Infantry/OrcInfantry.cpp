//
// Created by iusup on 23.03.2019.
//

#include "Infantry/OrcInfantry.h"

OrcInfantry::OrcInfantry(const Point &p) : Infantry(p) {
    turn_points_ = 4;
    cur_turn_points_ = 4;
    damage_ = 15;
    hp_ = 100;
    attack_range_ = 1;
}
