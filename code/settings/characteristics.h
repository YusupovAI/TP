#ifndef TP_CHARACHTERISTICS_H
#define TP_CHARACHTERISTICS_H

#include "Attack.h"

namespace OrcCharacteristics {
    const unsigned int mage_hp = 80;
    const unsigned int infantry_hp = 100;
    const unsigned int horseman_hp = 100;

    const unsigned int mage_turn_points = 3;
    const unsigned int infantry_turn_points = 3;
    const unsigned int horseman_turn_points = 4;

    const Attack mage_attack = Attack(Attack::AttackType::Fire, 12);
    const Attack infantry_attack = Attack(Attack::AttackType::Physical, 15);
    const Attack horseman_attack = Attack(Attack::AttackType::Physical, 12);

    const unsigned int mage_attack_range = 1;
    const unsigned int infantry_attack_range = 4;
    const unsigned int horseman_attack_range = 1; 
}

namespace HumanCharacteristics {
    const unsigned int mage_hp = 80;
    const unsigned int infantry_hp = 100;
    const unsigned int horseman_hp = 100;

    const unsigned int mage_turn_points = 3;
    const unsigned int infantry_turn_points = 3;
    const unsigned int horseman_turn_points = 4;

    const Attack mage_attack = Attack(Attack::AttackType::Light, 10);
    const Attack infantry_attack = Attack(Attack::AttackType::Physical, 13);
    const Attack horseman_attack = Attack(Attack::AttackType::Physical, 10);

    const unsigned int mage_attack_range = 3;
    const unsigned int horseman_attack_range = 1;
    const unsigned int infantry_attack_range = 1;
}	

#endif
