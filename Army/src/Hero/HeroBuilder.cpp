//
// Created by iusup on 26.03.2019.
//

#include "HeroBuilder.h"

std::shared_ptr<Hero> HeroBuilder::GetHero() {
    return hero_;
}

void HeroBuilder::CreateHero(const Point &p) {
    hero_.reset(new Hero(p));
}
