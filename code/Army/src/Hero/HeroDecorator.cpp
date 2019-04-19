#include "Hero/HeroDecorator.h"

HeroDecorator::HeroDecorator(std::shared_ptr<Hero> hero) : hero_(hero) {};

void HeroDecorator::Attack(std::shared_ptr<Unit> enemy) {
	hero_->Attack(enemy);
}

void HeroDecorator::Attacked(unsigned int damage) {
	hero_->Attacked(damage);

