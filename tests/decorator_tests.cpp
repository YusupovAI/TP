#include "Unit/DoubleAttackUnit.h"
#include "gtest/gtest.h"
#include "Factory/Humanfactory.h"
#include "Factory/OrcFactory.h"
#include "Point.h"
#include "Unit/FireAttackUnit.h"

TEST(DecoratorTest, DoubleAttackDecoratorHumanInfantry) {
    HumanFactory fact;
    auto unit1 = fact.CreateInfantry(Point(0,0));
    auto unit2 = fact.CreateInfantry(Point(1, 0));
    unit1 = std::make_shared<DoubleAttackUnit>(unit1);
    unsigned int hp1 = unit2->GetHP();
    unit1->Offense(unit2);
    EXPECT_EQ(hp1 , unit2->GetHP() + 2 * unit1->GetAttack()->GetDamage());
}

TEST(DecoratorTest, DoubleAttackDecoratorHumanMage) {
    HumanFactory fact;
    auto unit1 = fact.CreateMage(Point(0,0));
    auto unit2 = fact.CreateInfantry(Point(1, 0));
    unit1 = std::make_shared<DoubleAttackUnit>(unit1);
    unsigned int hp1 = unit2->GetHP();
    unit1->Offense(unit2);
    EXPECT_EQ(unit2->GetHP() + unit1->GetAttack()->GetDamage() * 4, hp1); 
}

TEST(DecoratorTest, DoubleAttackDecoratorOrcInfantry) {
    OrcFactory fact;
    auto unit1 = fact.CreateInfantry(Point(0,0));
    auto unit2 = fact.CreateInfantry(Point(1, 0));
    unit1 = std::make_shared<DoubleAttackUnit>(unit1);
    unsigned int hp1 = unit2->GetHP();
    unit1->Offense(unit2);
    EXPECT_EQ(hp1, unit2->GetHP() + 2 * unit1->GetAttack()->GetDamage()); 
}


TEST(DecoratorTest, DobleAttackDecoratorOrcMage) {
    OrcFactory fact;
    auto unit1 = fact.CreateMage(Point(0,0));
    auto unit2 = fact.CreateInfantry(Point(1, 0));
    unit1 = std::make_shared<DoubleAttackUnit>(unit1);
    unsigned int hp1 = unit2->GetHP();
    unit1->Offense(unit2);
    EXPECT_EQ((hp1 * 4 / 5 - unit1->GetAttack()->GetDamage()) * 4 /5 - unit1->GetAttack()->GetDamage(), unit2->GetHP());
}

TEST(DecoratorTest, FireAttackDecoratorHumanInfantry) {
    HumanFactory fact;
    auto unit1 = fact.CreateInfantry(Point(0,0));
    auto unit2 = fact.CreateInfantry(Point(1, 0));
    unit1 = std::make_shared<FireAttackUnit>(unit1);
    unsigned int hp1 = unit2->GetHP();
    unit1->Offense(unit2);
    EXPECT_EQ(hp1 , unit2->GetHP() + unit1->GetAttack()->GetDamage() + 10);
}


TEST(DecoratorTest, FireAttackDecoratorHumanMage) {
    HumanFactory fact;
    auto unit1 = fact.CreateMage(Point(0,0));
    auto unit2 = fact.CreateInfantry(Point(1, 0));
    unit1 = std::make_shared<FireAttackUnit>(unit1);
    unsigned int hp1 = unit2->GetHP();
    unit1->Offense(unit2);
    EXPECT_EQ(hp1 , unit2->GetHP() + 2*unit1->GetAttack()->GetDamage() + 10);
}

TEST(DecoratorTest, FireAttackDecoratorOrcInfantry) {
    OrcFactory fact;
    auto unit1 = fact.CreateInfantry(Point(0,0));
    auto unit2 = fact.CreateInfantry(Point(1, 0));
    unit1 = std::make_shared<FireAttackUnit>(unit1);
    unsigned int hp1 = unit2->GetHP();
    unit1->Offense(unit2);
    EXPECT_EQ(hp1 , unit2->GetHP() + unit1->GetAttack()->GetDamage() + 10); 
}

TEST(DecoratorTest, FireAttackDecoratorOrcMage) {
    OrcFactory fact;
    auto unit1 = fact.CreateMage(Point(0,0));
    auto unit2 = fact.CreateInfantry(Point(1, 0));
    unit1 = std::make_shared<FireAttackUnit>(unit1);
    unsigned int hp1 = unit2->GetHP();
    unit1->Offense(unit2);
    EXPECT_EQ(hp1 * 4 / 5 - unit1->GetAttack()->GetDamage() - 10, unit2->GetHP()); 
}
