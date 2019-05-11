#include "Game.h"
#include "SFML/Graphics.hpp"

Game::Game(const Player& player1, const Player& player2) : player1_(player1), player2_(player2), turn_(0), 
	current_turn_(Game::PlayerTurns::F_PLAYER_TURN), 
	window_(sf::RenderWindow(sf::VideoMode(800, 600), "Strategy")),
	current_unit_(nullptr),
	painter_() {};

void Game::Play() {
    while (window_.isOpen() ) {
        sf::Event event;
	window_.pollEvent(event);
	if (event.type == sf::Event::Closed) {break;}
	Draw();
    }
}



void Game::Draw() {
    painter_.Draw(window_, player1_.GetArmy(), player2_.GetArmy());
}

void Game::NextTurn() {
    current_unit_ = nullptr;
    switch (current_turn_) {
	case PlayerTurns::F_PLAYER_TURN: {
	    for (auto& unit:player2_.GetArmy()) {unit->Update();}
	    current_turn_ = PlayerTurns::S_PLAYER_TURN;
	    break;
	}
	case PlayerTurns::S_PLAYER_TURN: {
	    for (auto& unit:player1_.GetArmy()) {unit->Update();}
	    current_turn_ = PlayerTurns::F_PLAYER_TURN;
	    break;
	}
	default:
	    break;
    }
}
