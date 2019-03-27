//
// Created by iusup on 26.03.2019.
//

#ifndef TP_HERODIRECTOR_H
#define TP_HERODIRECTOR_H

#include "HeroBuilder.h"

class HeroDirector {
public:
    void ConstructShaman(HeroBuilder &);

    void ConstructWizard(HeroBuilder &);

    void ConstructKnight(HeroBuilder &);

    void ConstructBerserk(HeroBuilder &);
};


#endif //TP_HERODIRECTOR_H
