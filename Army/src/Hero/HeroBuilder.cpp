//
// Created by iusup on 27.03.2019.
//

#include "HeroBuilder.h"
#include <memory>


void HeroBuilder::Reset() {
    result_ = std::make_shared<Hero>();
}

std::shared_ptr<Hero> HeroBuilder::GetResult() {
    return result_;
}

void HeroBuilder::BuildPosition(const Point &p) {
    result_->SetPosition(p);
}
