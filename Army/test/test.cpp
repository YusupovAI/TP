//
// Created by iusup on 23.03.2019.
//
#include "OrcFactory.h"
#include "HumanFactory.h"
#include "Unit.h"
#include "gtest/gtest.h"
#include "Unit.h"
#include "Hero.h"
//#include "HumanWizardBuilder.h"
//#include "HumanKnightBuilder.h"
//#include "OrcBerserkBuilder.h"
//#include "OrcShamanBuilder.h"

TEST(HumanFactory, Infantry) {
    HumanFactory h;
    std::shared_ptr<Unit> w = h.CreateInfantry(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 100);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 15);
    EXPECT_EQ(w->GetAttackRange(), 1);
    EXPECT_EQ(w->GetCurTurnPoints(), 4);
}


TEST(HumanFactory, Mage) {
    HumanFactory h;
    std::shared_ptr<Unit> w = h.CreateMage(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 80);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 12);
    EXPECT_EQ(w->GetAttackRange(), 3);
    EXPECT_EQ(w->GetCurTurnPoints(), 3);
}


TEST(HumanFactory, Horseman) {
    HumanFactory h;
    std::shared_ptr<Unit> w = h.CreateHorseman(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 100);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 12);
    EXPECT_EQ(w->GetAttackRange(), 1);
    EXPECT_EQ(w->GetCurTurnPoints(), 4);
}


TEST(OrcFactory, Infantry) {
    OrcFactory h;
    std::shared_ptr<Unit> w = h.CreateInfantry(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 100);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 15);
    EXPECT_EQ(w->GetAttackRange(), 1);
    EXPECT_EQ(w->GetCurTurnPoints(), 4);
}


TEST(OrcFactory, Mage) {
    OrcFactory h;
    std::shared_ptr<Unit> w = h.CreateMage(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 80);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 12);
    EXPECT_EQ(w->GetAttackRange(), 3);
    EXPECT_EQ(w->GetCurTurnPoints(), 3);
}


TEST(OrcFactory, Horseman) {
    OrcFactory h;
    std::shared_ptr<Unit> w = h.CreateHorseman(Point(0, 0));
    EXPECT_EQ(w->GetHP(), 100);
    EXPECT_EQ(w->GetPosition(), Point(0, 0));
    EXPECT_EQ(w->GetDamage(), 12);
    EXPECT_EQ(w->GetAttackRange(), 1);
    EXPECT_EQ(w->GetCurTurnPoints(), 4);
}


TEST(HeroBuilder, HumanWizardBuilder) {

}


TEST(HeroBuilder, HumanKnightBuilder) {

}


TEST(HeroBuilder, OrcShamanBuilder) {

}


TEST(HeroBuilder, OrcBerserkBuilder) {

}
