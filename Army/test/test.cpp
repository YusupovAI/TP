//
// Created by iusup on 23.03.2019.
//
#include "OrcFactory.h"
#include "HumanFactory.h"
#include "Unit.h"
#include "gtest/gtest.h"
#include "Unit.h"
#include "Hero.h"
#include "Hero/HeroBuilder.h"
#include "Hero/HumanHeroBuilder.h"
#include "Hero/OrcHeroBuilder.h"
#include "Hero/HeroDirector.h"

TEST(HumanFactory, Infantry) {
    HumanFactory h;
    std::shared_ptr<Unit> w = h.CreateInfantry(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 100);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 15);
    EXPECT_EQ(w->GetAttackRange(), 1);
    EXPECT_EQ(w->GetTurnPoints(), 4);
}


TEST(HumanFactory, Mage) {
    HumanFactory h;
    std::shared_ptr<Unit> w = h.CreateMage(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 80);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 12);
    EXPECT_EQ(w->GetAttackRange(), 3);
    EXPECT_EQ(w->GetTurnPoints(), 3);
}


TEST(HumanFactory, Horseman) {
    HumanFactory h;
    std::shared_ptr<Unit> w = h.CreateHorseman(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 100);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 12);
    EXPECT_EQ(w->GetAttackRange(), 1);
    EXPECT_EQ(w->GetTurnPoints(), 4);
}


TEST(OrcFactory, Infantry) {
    OrcFactory h;
    std::shared_ptr<Unit> w = h.CreateInfantry(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 100);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 15);
    EXPECT_EQ(w->GetAttackRange(), 1);
    EXPECT_EQ(w->GetTurnPoints(), 4);
}


TEST(OrcFactory, Mage) {
    OrcFactory h;
    std::shared_ptr<Unit> w = h.CreateMage(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 80);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 12);
    EXPECT_EQ(w->GetAttackRange(), 3);
    EXPECT_EQ(w->GetTurnPoints(), 3);
}


TEST(OrcFactory, Horseman) {
    OrcFactory h;
    std::shared_ptr<Unit> w = h.CreateHorseman(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 100);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 12);
    EXPECT_EQ(w->GetAttackRange(), 1);
    EXPECT_EQ(w->GetTurnPoints(), 4);
}


TEST(HeroBuilder, HumanWiseHero) {
    std::shared_ptr<HeroBuilder> builder = std::make_shared<HumanHeroBuilder>();
    HeroDirector director(builder);
    auto hero = director.Create(HeroDirector::EHeroTypes::WiseHero, Point(0, 0));
    EXPECT_EQ(hero->GetHP(), 250);
    EXPECT_EQ(hero->GetMana(), 100);
    EXPECT_EQ(hero->GetWeapon(), Hero::EWeaponType::weapon_none);
    EXPECT_TRUE(hero->GetHorse());
    EXPECT_FALSE(hero->GetShield());
    EXPECT_EQ(hero->GetArmor(), 0);
    EXPECT_EQ(hero->GetDamage(), 20);
    EXPECT_EQ(hero->GetAttackRange(), 5);
    EXPECT_EQ(hero->GetTurnPoints(), 5);
    EXPECT_EQ(hero->GetAbility(), Hero::EAbilityType::heal);
    EXPECT_EQ(hero->GetPosition(), Point(0, 0));
}


TEST(HeroBuilder, HumanMightyHero) {
    std::shared_ptr<HeroBuilder> builder = std::make_shared<HumanHeroBuilder>();
    HeroDirector director(builder);
    auto hero = director.Create(HeroDirector::EHeroTypes::MightyHero, Point(1, 1));
    EXPECT_EQ(hero->GetHP(), 250);
    EXPECT_EQ(hero->GetMana(), 0);
    EXPECT_EQ(hero->GetWeapon(), Hero::EWeaponType::sword);
    EXPECT_TRUE(hero->GetHorse());
    EXPECT_TRUE(hero->GetShield());
    EXPECT_EQ(hero->GetArmor(), 4);
    EXPECT_EQ(hero->GetDamage(), 30);
    EXPECT_EQ(hero->GetAbility(), Hero::EAbilityType::ability_none);
    EXPECT_EQ(hero->GetAttackRange(), 1);
    EXPECT_EQ(hero->GetPosition(), Point(1, 1));
    EXPECT_EQ(hero->GetTurnPoints(), 5);
}


TEST(HeroBuilder, OrcWiseHero) {
    std::shared_ptr<HeroBuilder> builder = std::make_shared<OrcHeroBuilder>();
    HeroDirector director(builder);
    auto hero = director.Create(HeroDirector::EHeroTypes::WiseHero, Point(0, 0));
    EXPECT_EQ(hero->GetHP(), 300);
    EXPECT_EQ(hero->GetMana(), 50);
    EXPECT_EQ(hero->GetWeapon(), Hero::EWeaponType::weapon_none);
    EXPECT_FALSE(hero->GetHorse());
    EXPECT_FALSE(hero->GetShield());
    EXPECT_EQ(hero->GetArmor(), 0);
    EXPECT_EQ(hero->GetDamage(), 30);
    EXPECT_EQ(hero->GetTurnPoints(), 3);
    EXPECT_EQ(hero->GetAttackRange(), 3);
    EXPECT_EQ(hero->GetAbility(), Hero::EAbilityType::lightning);
    EXPECT_EQ(hero->GetPosition(), Point(0, 0));
}


TEST(HeroBuilder, OrcMightyHero) {
    std::shared_ptr<HeroBuilder> builder = std::make_shared<OrcHeroBuilder>();
    HeroDirector director(builder);
    auto hero = director.Create(HeroDirector::EHeroTypes::MightyHero, Point(0, 0));
    EXPECT_EQ(hero->GetHP(), 300);
    EXPECT_EQ(hero->GetMana(), 0);
    EXPECT_EQ(hero->GetWeapon(), Hero::EWeaponType::stick);
    EXPECT_FALSE(hero->GetHorse());
    EXPECT_FALSE(hero->GetShield());
    EXPECT_EQ(hero->GetArmor(), 0);
    EXPECT_EQ(hero->GetDamage(), 35);
    EXPECT_EQ(hero->GetTurnPoints(), 3);
    EXPECT_EQ(hero->GetAttackRange(), 1);
    EXPECT_EQ(hero->GetAbility(), Hero::EAbilityType::ability_none);
    EXPECT_EQ(hero->GetPosition(), Point(0, 0));
}
