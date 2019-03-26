//
// Created by iusup on 23.03.2019.
//
#include "OrcFactory.h"
#include "HumanFactory.h"
#include "Warrior.h"
#include "gtest/gtest.h"
#include "Warrior.h"

TEST(HumanFactory, Infantry) {
    HumanFactory h;
    std::shared_ptr<Warrior> w = h.CreateInfantry(Point(0, 0));
    EXPECT_EQ(w->HP(), 100);
    EXPECT_EQ(w->Position(), Point(0, 0));
    EXPECT_EQ(w->Damage(), 15);
    EXPECT_EQ(w->Range(), 1);
    EXPECT_EQ(w->Points(), 4);
}


TEST(HumanFactory, Mage) {
    HumanFactory h;
    std::shared_ptr<Warrior> w = h.CreateMage(Point(0, 0));
    EXPECT_EQ(w->HP(), 80);
    EXPECT_EQ(w->Position(), Point(0, 0));
    EXPECT_EQ(w->Damage(), 12);
    EXPECT_EQ(w->Range(), 3);
    EXPECT_EQ(w->Points(), 3);
}


TEST(HumanFactory, Catapult) {
    HumanFactory h;
    std::shared_ptr<Warrior> w = h.CreateCatapult(Point(0, 0));
    EXPECT_EQ(w->HP(), 120);
    EXPECT_EQ(w->Position(), Point(0, 0));
    EXPECT_EQ(w->Damage(), 10);
    EXPECT_EQ(w->Range(), 3);
    EXPECT_EQ(w->Points(), 2);
}


TEST(OrcFactory, Infantry) {
    OrcFactory h;
    std::shared_ptr<Warrior> w = h.CreateInfantry(Point(0, 0));
    EXPECT_EQ(w->HP(), 100);
    EXPECT_EQ(w->Position(), Point(0, 0));
    EXPECT_EQ(w->Damage(), 15);
    EXPECT_EQ(w->Range(), 1);
    EXPECT_EQ(w->Points(), 4);
}


TEST(OrcFactory, Mage) {
    OrcFactory h;
    std::shared_ptr<Warrior> w = h.CreateMage(Point(0, 0));
    EXPECT_EQ(w->HP(), 80);
    EXPECT_EQ(w->Position(), Point(0, 0));
    EXPECT_EQ(w->Damage(), 12);
    EXPECT_EQ(w->Range(), 3);
    EXPECT_EQ(w->Points(), 3);
}


TEST(OrcFactory, Catapult) {
    OrcFactory h;
    std::shared_ptr<Warrior> w = h.CreateCatapult(Point(0, 0));
    EXPECT_EQ(w->HP(), 120);
    EXPECT_EQ(w->Position(), Point(0, 0));
    EXPECT_EQ(w->Damage(), 10);
    EXPECT_EQ(w->Range(), 3);
    EXPECT_EQ(w->Points(), 2);
}