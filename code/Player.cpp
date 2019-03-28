//
// Created by iusup on 28.03.2019.
//

#include "Player.h"

Player::Player(std::shared_ptr<WarriorFactory> factory) : factory_(factory) {}

void Player::CreateHorseman() {
    army_.push_back(factory_->CreateHorseman());
}

void Player::CreateInfantry() {
    army_.push_back(factory_->CreateInfantry());
}

void Player::CreateMage() {
    army_.push_back(factory_->CreateMage());
}

void Player::SetHero(const Hero &hero) {
    hero_ = std::make_shared(hero);
}
