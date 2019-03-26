//
// Created by iusup on 23.03.2019.
//

#include "OrcCatapult.h"

OrcCatapult::OrcCatapult(const Point &p) : Catapult(p) {
    turn_points_ = 2;
    cur_turn_points_ = 2;
    damage_ = 10;
    hp_ = 120;
    attack_range_ = 3;
}
