#include "Unit/DoubleAttackUnit.h"
#include "gtest/gtest.h"
#include "Factory/Humanfactory.h"
#include "Factory/OrcFactory.h"
#include "Point.h"
#include "Unit/FireAttackUnit.h"

TEST(DecoratorTest, DoubleAttackDecoratorHuman) {
    HumanFactory fact;
    auto unit1 = fact.CreateMage(Point(0,0));
    auto unit2 = fact.CreateInfantry(Point(1, 0));
    unit1 = std::make_shared<DoubleAttackUnit>(unit1);
    unsigned int hp1 = unit2->GetHP();
    unit1->Offense(unit2);
    EXPECT_EQ(hp1 , unit2->GetHP() + 2 * unit1->GetAttack().GetDamage());
}

TEST(DecoratorTest, DobleAttackDecoratorOrc) {
    OrcFactory fact;
    auto unit1 = fact.CreateMage(Point(0,0));
    auto unit2 = fact.CreateInfantry(Point(1, 0));
    unit1 = std::make_shared<DoubleAttackUnit>(unit1);
    unsigned int hp1 = unit2->GetHP();
    unit1->Offense(unit2);
    EXPECT_EQ(hp1 , unit2->GetHP() + 2 * unit1->GetAttack().GetDamage()); 
}

TEST(DecoratorTest, FireAttackDecoratorHuman) {
    HumanFactory fact;
    auto unit1 = fact.CreateMage(Point(0,0));
    auto unit2 = fact.CreateInfantry(Point(1, 0));
    unit1 = std::make_shared<FireAttackUnit>(unit1);
    unsigned int hp1 = unit2->GetHP();
    unit1->Offense(unit2);
    EXPECT_EQ(hp1 , unit2->GetHP() + unit1->GetAttack().GetDamage() + 10);
}

TEST(DecoratorTest, FireAttackDecoratorOrc) {
    OrcFactory fact;
    auto unit1 = fact.CreateMage(Point(0,0));
    auto unit2 = fact.CreateInfantry(Point(1, 0));
    unit1 = std::make_shared<FireAttackUnit>(unit1);
    unsigned int hp1 = unit2->GetHP();
    unit1->Offense(unit2);
    EXPECT_EQ(hp1 , unit2->GetHP() + unit1->GetAttack().GetDamage() + 10); 
}
