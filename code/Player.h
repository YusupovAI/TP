//
// Created by iusup on 28.03.2019.
//

#ifndef TP_PLAYER_H
#define TP_PLAYER_H

#include <memory>
#include <vector>
#include "WarriorFactory.h"
#include "Hero.h"
#include "HeroDirector.h"
#include "Unit.h"

class Player final {
public:
    Player(std::shared_ptr<WarriorFactory>);

    void CreateInfantry();

    void CreateHorseman();

    void CreateMage();

    void SetHero(const Hero &);

private:
    std::vector<std::shared_ptr<Unit> > army_;
    std::shared_ptr<WarriorFactory> factory_;
    std::shared_ptr<Hero> hero_;
};


#endif //TP_PLAYER_H
