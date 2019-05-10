//
// Created by iusup on 28.03.2019.
//

#include "Player.h"

Player::Player(std::shared_ptr<UnitFactory> factory) : factory_(factory) {}

void Player::CreateHorseman(const Point& p) {
    army_.push_back(factory_->CreateHorseman(p));
}

void Player::CreateInfantry(const Point& p) {
    army_.push_back(factory_->CreateInfantry(p));
}

void Player::CreateMage(const Point& p) {
    army_.push_back(factory_->CreateMage(p));
}

void Player::SetHero(const Hero &hero) {
    hero_ = std::make_shared<Hero>(hero);
}

std::vector<std::shared_ptr<Unit> >& Player::GetArmy() {
    return this->army_;
}
