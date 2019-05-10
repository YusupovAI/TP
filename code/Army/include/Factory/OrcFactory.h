//
// Created by iusup on 23.03.2019.
//

#ifndef TP_ORCFACTORY_H
#define TP_ORCFACTORY_H

#include "UnitFactory.h"
#include "SFML/Graphics.hpp"
#include <memory>

class OrcFactory final : public UnitFactory {
public:
    OrcFactory() = default;

    std::shared_ptr<Unit> CreateInfantry(const Point &) const override;

    std::shared_ptr<Unit> CreateHorseman(const Point &) const override;

    std::shared_ptr<Unit> CreateMage(const Point &) const override;


};


#endif //TP_ORCFACTORY_H
