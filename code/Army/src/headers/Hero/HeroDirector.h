//
// Created by iusup on 26.03.2019.
//

#ifndef TP_HERODIRECTOR_H
#define TP_HERODIRECTOR_H

#include "HeroBuilder.h"
#include "HumanHeroBuilder.h"
#include "OrcHeroBuilder.h"
#include <memory>

class HeroDirector final {
public:

    HeroDirector() = default;

    explicit HeroDirector(const std::shared_ptr<HeroBuilder> &);

    void ChangeBuilder(const std::shared_ptr<HeroBuilder> &);

    std::shared_ptr<Hero> CreateWiseHero(const Point &);

    std::shared_ptr<Hero> CreateMightyHero(const Point &);

private:
    std::shared_ptr<HeroBuilder> builder_;
};


#endif //TP_HERODIRECTOR_H
