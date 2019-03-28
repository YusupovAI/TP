//
// Created by iusup on 23.03.2019.
//
#include "OrcFactory.h"
#include "HumanFactory.h"
#include "Unit.h"
#include "gtest/gtest.h"
#include "Unit.h"
#include "Hero.h"
#include "HeroBuilder.h"
#include "HumanHeroBuilder.h"
#include "OrcHeroBuilder.h"
#include "HeroDirector.h"

TEST(HumanFactory, Infantry) {
    HumanFactory h;
    std::shared_ptr<Unit> w = h.CreateInfantry(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 100);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 13);
    EXPECT_EQ(w->GetAttackRange(), 1);
    EXPECT_EQ(w->GetTurnPoints(), 3);
}


TEST(HumanFactory, Mage) {
    HumanFactory h;
    std::shared_ptr<Unit> w = h.CreateMage(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 80);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 8);
    EXPECT_EQ(w->GetAttackRange(), 4);
    EXPECT_EQ(w->GetTurnPoints(), 3);
}


TEST(HumanFactory, Horseman) {
    HumanFactory h;
    std::shared_ptr<Unit> w = h.CreateHorseman(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 100);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 10);
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
    EXPECT_EQ(w->GetTurnPoints(), 2);
}


TEST(OrcFactory, Mage) {
    OrcFactory h;
    std::shared_ptr<Unit> w = h.CreateMage(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 80);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 12);
    EXPECT_EQ(w->GetAttackRange(), 3);
    EXPECT_EQ(w->GetTurnPoints(), 2);
}


TEST(OrcFactory, Horseman) {
    OrcFactory h;
    std::shared_ptr<Unit> w = h.CreateHorseman(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 100);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 12);
    EXPECT_EQ(w->GetAttackRange(), 1);
    EXPECT_EQ(w->GetTurnPoints(), 3);
}


TEST(HeroBuilder, HumanWiseHero) {
    std::shared_ptr<HeroBuilder> builder = std::make_shared<HumanHeroBuilder>();
    HeroDirector director(builder);
    auto hero = director.CreateWiseHero(Point(0, 0));
    EXPECT_EQ(hero->GetHP(), 250);
    EXPECT_EQ(hero->GetMana(), 150);
    EXPECT_EQ(hero->GetWeapon(), Hero::EWeaponType::weapon_none);
    EXPECT_FALSE(hero->GetHorse());
    EXPECT_TRUE(hero->GetShield());
    EXPECT_EQ(hero->GetArmor(), 2);
    EXPECT_EQ(hero->GetDamage(), 15);
    EXPECT_EQ(hero->GetAttackRange(), 4);
    EXPECT_EQ(hero->GetTurnPoints(), 3);
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
    EXPECT_EQ(hero->GetDamage(), 25);
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
    EXPECT_EQ(hero->GetDamage(), 20);
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
    EXPECT_EQ(hero->GetDamage(), 33);
    EXPECT_EQ(hero->GetTurnPoints(), 3);
    EXPECT_EQ(hero->GetAttackRange(), 1);
    EXPECT_EQ(hero->GetAbility(), Hero::EAbilityType::ability_none);
    EXPECT_EQ(hero->GetPosition(), Point(1, 1));
}
