//
// Created by iusup on 23.03.2019.
//

#ifndef TP_ORCFACTORY_H
#define TP_ORCFACTORY_H

#include "UnitFactory.h"
#include "SFML/Graphics.hpp"

class OrcFactory final : public UnitFactory {
public:
    OrcFactory();

    std::shared_ptr<Unit> CreateInfantry(const Point &) const override;

    std::shared_ptr<Unit> CreateHorseman(const Point &) const override;

    std::shared_ptr<Unit> CreateMage(const Point &) const override;

private:
    sf::CircleShape infantry_model_;
    sf::CircleShape mage_model_;
    sf::CircleShape horseman_model_;

};


#endif //TP_ORCFACTORY_H
