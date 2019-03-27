//
// Created by iusup on 26.03.2019.
//

#include "HeroDirector.h"


HeroDirector::HeroDirector(const std::shared_ptr<HeroBuilder>& builder) : builder_(builder) {}

void HeroDirector::ChangeBuilder(const std::shared_ptr<HeroBuilder>& builder) {
    builder_ = builder;
}

std::shared_ptr<Hero> HeroDirector::Create(HeroDirector::EHeroTypes type, const Point& p) {
    if (type == EHeroTypes::MightyHero) {
        builder_->BuildCharacteristics();
        builder_->BuildWeapon();
        builder_->BuildHorse();
        builder_->BuildShield();
        builder_->BuildPosition(p);
    }
    if (type == EHeroTypes::WiseHero) {
        builder_->BuildCharacteristics();
        builder_->BuildAbility();
        builder_->BuildHorse();
        builder_->BuildPosition(p);
    }
    return builder_->GetResult();
}
