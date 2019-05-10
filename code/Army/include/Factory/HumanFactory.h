//
// Created by iusup on 23.03.2019.
//

#ifndef TP_HUMANFACTORY_H
#define TP_HUMANFACTORY_H

#include "UnitFactory.h"
#include "SFML/Graphics.hpp"

class HumanFactory final : public UnitFactory {
public:
    HumanFactory();

    std::shared_ptr<Unit> CreateInfantry(const Point &) const override;

    std::shared_ptr<Unit> CreateHorseman(const Point &) const override;

    std::shared_ptr<Unit> CreateMage(const Point &) const override;

private:
    sf::CircleShape infantry_model_;
    sf::CircleShape mage_model_;
    sf::CircleShape horseman_model_;
};


#endif //TP_HUMANFACTORY_H
