//
// Created by iusup on 23.03.2019.
//
#include "Factory/OrcFactory.h"
#include "Factory/HumanFactory.h"
#include "Unit/Unit.h"
#include "gtest/gtest.h"
#include "Hero/Hero.h"
#include "Hero/HeroBuilder.h"
#include "Hero/HumanHeroBuilder.h"
#include "Hero/OrcHeroBuilder.h"
#include "Hero/HeroDirector.h"
#include "settings/characteristics.h"
#include "Unit/DoubleAttackUnit.h"

TEST(HumanFactory, Infantry) {
    HumanFactory h;
    std::shared_ptr<Unit> w = h.CreateInfantry(Point(0, 0));
    EXPECT_EQ(w->GetHP(), HumanCharacteristics::infantry_hp);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetAttack(), HumanCharacteristics::infantry_attack);
    EXPECT_EQ(w->GetAttackRange(), HumanCharacteristics::infantry_attack_range);
    EXPECT_EQ(w->GetTurnPoints(), HumanCharacteristics::infantry_turn_points);
}


TEST(HumanFactory, Mage) {
    HumanFactory h;
    std::shared_ptr<Unit> w = h.CreateMage(Point(0, 0));
    EXPECT_EQ(w->GetHP(), HumanCharacteristics::mage_hp);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetAttack(), HumanCharacteristics::mage_attack);
    EXPECT_EQ(w->GetAttackRange(), HumanCharacteristics::mage_attack_range);
    EXPECT_EQ(w->GetTurnPoints(), HumanCharacteristics::mage_turn_points);
}


TEST(HumanFactory, Horseman) {
    HumanFactory h;
    std::shared_ptr<Unit> w = h.CreateHorseman(Point(0, 0));
    EXPECT_EQ(w->GetHP(), HumanCharacteristics::horseman_hp);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetAttack(), HumanCharacteristics::horseman_attack);
    EXPECT_EQ(w->GetAttackRange(), HumanCharacteristics::horseman_attack_range);
    EXPECT_EQ(w->GetTurnPoints(), HumanCharacteristics::horseman_turn_points);
}


TEST(OrcFactory, Infantry) {
    OrcFactory h;
    std::shared_ptr<Unit> w = h.CreateInfantry(Point(0, 0));
    EXPECT_EQ(w->GetHP(), OrcCharacteristics::infantry_hp);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetAttack(), OrcCharacteristics::infantry_attack);
    EXPECT_EQ(w->GetAttackRange(), OrcCharacteristics::infantry_attack_range);
    EXPECT_EQ(w->GetTurnPoints(), OrcCharacteristics::infantry_turn_points);
}


TEST(OrcFactory, Mage) {
    OrcFactory h;
    std::shared_ptr<Unit> w = h.CreateMage(Point(0, 0));
    EXPECT_EQ(w->GetHP(), OrcCharacteristics::mage_hp);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetAttack(), OrcCharacteristics::mage_attack);
    EXPECT_EQ(w->GetAttackRange(), OrcCharacteristics::mage_attack_range);
    EXPECT_EQ(w->GetTurnPoints(), OrcCharacteristics::mage_turn_points);
}


TEST(OrcFactory, Horseman) {
    OrcFactory h;
    std::shared_ptr<Unit> w = h.CreateHorseman(Point(0, 0));
    EXPECT_EQ(w->GetHP(), OrcCharacteristics::horseman_hp);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetAttack(), OrcCharacteristics::horseman_attack);
    EXPECT_EQ(w->GetAttackRange(), OrcCharacteristics::horseman_attack_range);
    EXPECT_EQ(w->GetTurnPoints(), OrcCharacteristics::horseman_turn_points);
}


TEST(HeroBuilder, HumanWiseHero) {
    std::shared_ptr<HeroBuilder> builder = std::make_shared<HumanHeroBuilder>();
    HeroDirector director(builder);
    auto hero = director.CreateWiseHero(Point(0, 0));
    EXPECT_EQ(hero->GetHP(), 250);
    EXPECT_EQ(hero->GetMana(), 100);
    EXPECT_EQ(hero->GetWeapon(), Hero::EWeaponType::weapon_none);
    EXPECT_FALSE(hero->GetHorse());
    EXPECT_TRUE(hero->GetShield());
    EXPECT_EQ(hero->GetArmor(), 2);
    EXPECT_EQ(hero->GetAttack(), HumanCharacteristics::hero_attack);
    EXPECT_EQ(hero->GetAttackRange(), 4);
    EXPECT_EQ(hero->GetTurnPoints(), 5);
    EXPECT_EQ(hero->GetAbility(), Hero::EAbilityType::lightning);
    EXPECT_EQ(hero->GetPosition(), Point(0, 0));
}


TEST(HeroBuilder, HumanMightyHero) {
    std::shared_ptr<HeroBuilder> builder = std::make_shared<HumanHeroBuilder>();
    HeroDirector director(builder);
    auto hero = director.CreateMightyHero(Point(1, 1));
    EXPECT_EQ(hero->GetHP(), 250);
    EXPECT_EQ(hero->GetMana(), 0);
    EXPECT_EQ(hero->GetWeapon(), Hero::EWeaponType::sword);
    EXPECT_TRUE(hero->GetHorse());
    EXPECT_TRUE(hero->GetShield());
    EXPECT_EQ(hero->GetArmor(), 4);
    EXPECT_EQ(hero->GetAttack(), HumanCharacteristics::hero_sword_attack);
    EXPECT_EQ(hero->GetAbility(), Hero::EAbilityType::ability_none);
    EXPECT_EQ(hero->GetAttackRange(), 1);
    EXPECT_EQ(hero->GetPosition(), Point(1, 1));
    EXPECT_EQ(hero->GetTurnPoints(), 5);
}


TEST(HeroBuilder, OrcWiseHero) {
    std::shared_ptr<HeroBuilder> builder = std::make_shared<OrcHeroBuilder>();
    HeroDirector director(builder);
    auto hero = director.CreateWiseHero(Point(0, 0));
    EXPECT_EQ(hero->GetHP(), 300);
    EXPECT_EQ(hero->GetMana(), 50);
    EXPECT_EQ(hero->GetWeapon(), Hero::EWeaponType::weapon_none);
    EXPECT_FALSE(hero->GetHorse());
    EXPECT_TRUE(hero->GetShield());
    EXPECT_EQ(hero->GetArmor(), 0);
    EXPECT_EQ(hero->GetAttack(), OrcCharacteristics::hero_attack);
    EXPECT_EQ(hero->GetTurnPoints(), 3);
    EXPECT_EQ(hero->GetAttackRange(), 4);
    EXPECT_EQ(hero->GetAbility(), Hero::EAbilityType::lightning);
    EXPECT_EQ(hero->GetPosition(), Point(0, 0));
}


TEST(HeroBuilder, OrcMightyHero) {
    std::shared_ptr<HeroBuilder> builder = std::make_shared<OrcHeroBuilder>();
    HeroDirector director(builder);
    auto hero = director.CreateMightyHero(Point(1, 1));
    EXPECT_EQ(hero->GetHP(), 300);
    EXPECT_EQ(hero->GetMana(), 0);
    EXPECT_EQ(hero->GetWeapon(), Hero::EWeaponType::sword);
    EXPECT_TRUE(hero->GetHorse());
    EXPECT_TRUE(hero->GetShield());
    EXPECT_EQ(hero->GetArmor(), 0);
    EXPECT_EQ(hero->GetAttack(), OrcCharacteristics::hero_stick_attack);
    EXPECT_EQ(hero->GetTurnPoints(), 3);
    EXPECT_EQ(hero->GetAttackRange(), 1);
    EXPECT_EQ(hero->GetAbility(), Hero::EAbilityType::ability_none);
    EXPECT_EQ(hero->GetPosition(), Point(1, 1));
}

