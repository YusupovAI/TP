#ifndef TP_HERODECORATOR_H
#define TP_HERO_DECORATOR_H

#include "Hero/Hero.h"
#include "Point.h"
#include <memory>
#include "Unit/Unit.h"

class HeroDecorator : public Hero{
	public:
		explicit HeroDecorator(std::shared_ptr<Hero> hero);
		virtual void Attack(const std::shared_ptr<Unit> enemy);
		virtual void Attacked(const unsigned int damage);
		virtual void Cast(std::shared_ptr<Unit>);
		virtual ~HeroDecorator() = default;
	private:
		std::shared_ptr<Hero> hero_;
}

#endif
