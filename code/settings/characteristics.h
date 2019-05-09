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

    const unsigned int hero_hp = 300;
    const unsigned int hero_attack_range = 1;
    const Attack hero_attack = Attack(Attack::AttackType::Physical, 30);
    const unsigned int hero_turn_points = 3;

    const Attack hero_stick_attack = Attack(Attack::AttackType::Physical, 35);
    const Attack hero_sword_attack = Attack(Attack::AttackType::Physical, 38);
    const Attack hero_mythical_thing_attack = Attack(Attack::AttackType::Fire, 30);

    const unsigned int hero_mana = 80;

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

    const unsigned int hero_hp = 250;
    const unsigned int hero_attack_range = 1;
    const Attack hero_attack = Attack(Attack::AttackType::Physical, 15);
    const unsigned int hero_turn_points = 5;

    const Attack hero_sword_attack = Attack(Attack::AttackType::Physical, 25);
    const Attack hero_drums_attack = Attack(Attack::AttackType::Fire, 22);
    const unsigned int hero_drums_attack_range = 4;

    const unsigned int hero_mana = 100;

    const unsigned int hero_heal_value = 10;
    const unsigned int hero_heal_range = 4;
    const unsigned int hero_heal_cost = 20;

    const unsigned int hero_fireball_damage = 8;
    const unsigned int hero_fireball_range = 3;
    const unsigned int hero_fireball_cost = 20;

    const unsigned int hero_lightning_damage = 10;
    const unsigned int hero_lightning_range = 4;
    const unsigned int hero_lightning_cost = 25;


}	

#endif
