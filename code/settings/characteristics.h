#ifndef TP_CHARACHTERISTICS_H
#define TP_CHARACHTERISTICS_H

#include "Attack/Attack.h"
#include "Attack/DoubleAttack.h"
#include "Attack/PercentAttack.h"
#include "Attack/UsualAttack.h"
#include <memory>

namespace OrcCharacteristics {
    const unsigned int mage_hp = 80;
    const unsigned int infantry_hp = 100;
    const unsigned int horseman_hp = 100;

    const unsigned int mage_turn_points = 3;
    const unsigned int infantry_turn_points = 3;
    const unsigned int horseman_turn_points = 4;

    const std::shared_ptr<Attack> mage_attack = std::make_shared<PercentAttack>(7);
    const std::shared_ptr<Attack> infantry_attack = std::make_shared<UsualAttack>(15);
    const std::shared_ptr<Attack> horseman_attack = std::make_shared<UsualAttack>(13);

    const unsigned int mage_attack_range = 1;
    const unsigned int infantry_attack_range = 4;
    const unsigned int horseman_attack_range = 1; 

    const unsigned int hero_hp = 300;
    const unsigned int hero_attack_range = 1;
    const std::shared_ptr<Attack> hero_attack = std::make_shared<UsualAttack>(30);
    const unsigned int hero_turn_points = 3;

    const std::shared_ptr<Attack> hero_stick_attack = std::make_shared<UsualAttack>(38);
    const std::shared_ptr<Attack> hero_sword_attack = std::make_shared<DoubleAttack>(20);
    const std::shared_ptr<Attack> hero_mythical_thing_attack = std::make_shared<PercentAttack>(33);

    const unsigned int hero_mana = 80;

}

namespace HumanCharacteristics {
    const unsigned int mage_hp = 80;
    const unsigned int infantry_hp = 100;
    const unsigned int horseman_hp = 100;

    const unsigned int mage_turn_points = 3;
    const unsigned int infantry_turn_points = 3;
    const unsigned int horseman_turn_points = 4;

    const std::shared_ptr<Attack> mage_attack = std::make_shared<DoubleAttack>(11);
    const std::shared_ptr<Attack> infantry_attack = std::make_shared<UsualAttack>(13);
    const std::shared_ptr<Attack> horseman_attack = std::make_shared<UsualAttack>(11);

    const unsigned int mage_attack_range = 3;
    const unsigned int horseman_attack_range = 1;
    const unsigned int infantry_attack_range = 1;

    const unsigned int hero_hp = 250;
    const unsigned int hero_attack_range = 1;
    const std::shared_ptr<Attack> hero_attack = std::make_shared<UsualAttack>(25);
    const unsigned int hero_turn_points = 5;

    const std::shared_ptr<Attack> hero_sword_attack = std::make_shared<UsualAttack>(33);
    const std::shared_ptr<Attack> hero_drums_attack = std::make_shared<PercentAttack>(25);
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
