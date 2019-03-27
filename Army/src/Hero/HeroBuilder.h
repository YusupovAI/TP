//
// Created by iusup on 27.03.2019.
//

#ifndef TP_HEROBUILDER_H
#define TP_HEROBUILDER_H

#include "Hero.h"
#include <memory>

class HeroBuilder {
public:
    void Reset();

    virtual void BuildWeapon() = 0;

    virtual void BuildAbility() = 0;

    virtual void BuildCharacteristics() = 0;

    void BuildPosition(const Point&);

    std::shared_ptr<Hero> GetResult();

    virtual ~HeroBuilder() = default;

protected:
    std::shared_ptr<Hero> result_;
};


#endif //TP_HEROBUILDER_H
