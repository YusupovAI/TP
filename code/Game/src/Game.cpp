#include "Game.h"
#include "SFML/Graphics.hpp"

Game::Game(const Player& player1, const Player& player2) : player1_(player1), player2_(player2), turn_(0), 
	cur_turn_(Game::PlayerTurns::F_PLAYER_TURN), 
	window_(sf::RenderWindow(sf::VideoMode(800, 600), "Strategy")),
	ceil_(sf::RectangleShape(sf::Vector2f(40, 40))) {};

void Game::Play() {
    while (window_.isOpen() ) {
        sf::Event event;
	window_.pollEvent(event);
	if (event.type == sf::Event::Closed) {break;}
	Draw();
    }
}

void Game::Draw() {
    window_.clear();
    DrawField();
    DrawUnits();
    window_.display();
}

void Game::DrawField() {
    unsigned int green = 128;
    ceil_.setPosition(sf::Vector2f(0, 0));
    ceil_.setFillColor(sf::Color(0, green, 0));
    for (int x = 0; x < 20; ++x) {
	ceil_.setPosition(sf::Vector2f(40 * x, 0));
	for (int y = 0; y < 15; ++y) {
		window_.draw(ceil_);
		ceil_.move(sf::Vector2f(0, 40));
		green ^= 64;
		ceil_.setFillColor(sf::Color(0, green, 0));
	}
    }
}

void Game::DrawUnits() {
    for (auto& unit:player1_.GetArmy()) {
	sf::CircleShape& shape = *(unit->GetShape());
	shape.setPosition(sf::Vector2f(unit->GetPosition().X() * 40 + 4, unit->GetPosition().Y() * 40 + 4));
	window_.draw(shape);
    }
    for (auto& unit:player2_.GetArmy()) {
	sf::CircleShape& shape = *(unit->GetShape());
	shape.setPosition(sf::Vector2f(unit->GetPosition().X() * 40 + 4, unit->GetPosition().Y() * 40 + 4));
	window_.draw(shape);
    }
}
