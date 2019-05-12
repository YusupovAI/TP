//
// Created by iusup on 26.03.2019.
//

#include "Hero/HeroDirector.h"


HeroDirector::HeroDirector(const std::shared_ptr<HeroBuilder>& builder) : builder_(builder) {}

void HeroDirector::ChangeBuilder(const std::shared_ptr<HeroBuilder>& builder) {
    builder_ = builder;
}

std::shared_ptr<Hero> HeroDirector::CreateMightyHero(const Point &p) {
    builder_->BuildCharacteristics();
    builder_->BuildWeapon(Hero::EWeaponType::sword);
    builder_->BuildHorse(5);
    builder_->BuildShield(4);
    builder_->BuildPosition(p);
    builder_->BuildShape();
    return builder_->GetResult();
}

std::shared_ptr<Hero> HeroDirector::CreateWiseHero(const Point &p) {
    builder_->BuildCharacteristics();
    builder_->BuildAbility(Hero::EAbilityType::lightning);
    builder_->BuildShield(2);
    builder_->BuildPosition(p);
    builder_->BuildShape();
    return builder_->GetResult();
}
