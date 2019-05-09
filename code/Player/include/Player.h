//
// Created by iusup on 28.03.2019.
//

#ifndef TP_PLAYER_H
#define TP_PLAYER_H

#include <memory>
#include <vector>
#include "Factory/UnitFactory.h"
#include "Hero/Hero.h"
#include "Hero/HeroDirector.h"
#include "Unit/Unit.h"
#include "Point.h"

class Player final {
public:
    Player(std::shared_ptr<UnitFactory>);
    Player(const Player&) = default;

    void CreateInfantry(const Point&);

    void CreateHorseman(const Point&);

    void CreateMage(const Point&);

    void SetHero(const Hero &);

    std::vector<std::shared_ptr<Unit> > GetArmy();

private:
    std::vector<std::shared_ptr<Unit> > army_;
    std::shared_ptr<UnitFactory> factory_;
    std::shared_ptr<Hero> hero_;
};


#endif //TP_PLAYER_H
