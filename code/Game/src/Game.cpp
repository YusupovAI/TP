#include "Game.h"
#include "SFML/Graphics.hpp"
#include "windows.h"
#include <algorithm>

Game::Game(const Player& player1, const Player& player2) : player1_(player1), player2_(player2), turn_(0), 
	current_turn_(Game::PlayerTurns::F_PLAYER_TURN), 
	window_(sf::RenderWindow(sf::VideoMode(800, 600), "Strategy")),
	current_unit_(nullptr),
	painter_() ,
	visit_("./log.txt") {};



short Game::Play() {
    while (window_.isOpen() ) {
        sf::Event event;
	window_.pollEvent(event);
	if (event.type == sf::Event::Closed) {break;}
	
	if (event.type == sf::Event::MouseButtonPressed) {
	    if (event.key.code == sf::Mouse::Left) {
		sf::Vector2i pos = sf::Mouse::getPosition(window_);
		Point position(pos.x / 40, pos.y / 40);
		auto unit = (current_turn_ == PlayerTurns::F_PLAYER_TURN ? GetFirstPlayerUnit(position) : GetSecondPlayerUnit(position));
		if (unit != nullptr) {current_unit_ = unit;}
	    } else if (event.key.code == sf::Mouse::Right) {
	        sf::Vector2i pos = sf::Mouse::getPosition(window_);
		Point position(pos.x / 40, pos.y / 40);
		if (current_unit_ != nullptr && CeilFree(position)) {current_unit_->Move(position);}
		auto unit = (current_turn_ == PlayerTurns::F_PLAYER_TURN ? GetSecondPlayerUnit(position) : GetFirstPlayerUnit(position));
		if (current_unit_ != nullptr && unit != nullptr) {
		    current_unit_->Offense(unit);
		    if (unit->GetHP() == 0) {
			std::vector<std::shared_ptr<Unit> >& army = (current_turn_ == PlayerTurns::F_PLAYER_TURN ? player2_.GetArmy() : player1_.GetArmy());
			auto iter = std::remove_if(army.begin(), army.end(), [](const std::shared_ptr<Unit>& unit) {return unit->GetHP() == 0;});
			army.erase(iter);
			if (player1_.GetHero()->GetHP() == 0) {return 2;};
			if (player2_.GetHero()->GetHP() == 0) {return 1;};
		    }
		}
	    }
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
	    Sleep(200);
	    	    NextTurn();
	}

	Draw();
    }
}



void Game::Draw() {
    auto& hero1 = player1_.GetHero();
    auto& hero2 = player2_.GetHero();
    painter_.Draw(window_, player1_.GetArmy(), player2_.GetArmy(), hero1, hero2);
}

void Game::NextTurn() {
    current_unit_ = nullptr;
    switch (current_turn_) {
	case PlayerTurns::F_PLAYER_TURN: {
	    for (auto& unit:player2_.GetArmy()) {unit->Update();}
	    current_turn_ = PlayerTurns::S_PLAYER_TURN;
	    player2_.GetHero()->Update();
	    break;
	}
	case PlayerTurns::S_PLAYER_TURN: {
	    for (auto& unit:player1_.GetArmy()) {unit->Update();}
	    current_turn_ = PlayerTurns::F_PLAYER_TURN;
	    player1_.GetHero()->Update();
	    break;
	}
	default:
	    break;
    }
    for (auto& unit:player1_.GetArmy()) {visit_.Visit(unit);}
    visit_.Visit(player1_.GetHero());
    for (auto& unit:player2_.GetArmy()) {visit_.Visit(unit);}
    visit_.Visit(player2_.GetHero());
}

bool Game::CeilFree(const Point& p) const {
    return  GetFirstPlayerUnit(p) == nullptr && GetSecondPlayerUnit(p) == nullptr;
}

std::shared_ptr<Unit> Game::GetFirstPlayerUnit(const Point& p) const {
    for (auto& unit:player1_.GetArmy()) {
	if (unit->GetPosition() == p) {return unit;}
    }
    if (player1_.GetHero()->GetPosition() == p) {return player1_.GetHero();}
    return nullptr;
}

std::shared_ptr<Unit> Game::GetSecondPlayerUnit(const Point& p) const {
    for (auto& unit:player2_.GetArmy()) {
	if (unit->GetPosition() == p) {return unit;}
    }
    if (player2_.GetHero()->GetPosition() == p) {return player2_.GetHero();}
    return nullptr;
}
