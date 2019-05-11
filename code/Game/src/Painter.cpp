#include "Painter.h"
#include "SFML/Window.hpp"
#include "SFML/Window.hpp"

Painter::Painter() : x_(20), y_(15), move_model_(4), ceil_(sf::RectangleShape(sf::Vector2f(40, 40))) {};


void Painter::Draw(sf::RenderWindow& window, std::vector<std::shared_ptr<Unit> >& army1, std::vector<std::shared_ptr<Unit> >& army2) {
    window.clear();
    DrawField(window);
    for (auto& unit:army1) {
        DrawUnit(window, unit);
    }
    for (auto&  unit:army2) {
	DrawUnit(window, unit);
    }
    window.display();
}

void Painter::DrawField(sf::RenderWindow& window) {
    unsigned int green = 128;
    ceil_.setPosition(sf::Vector2f(0, 0));
    ceil_.setFillColor(sf::Color(0, green, 0));
    for (int x = 0; x < x_; ++x) {
	ceil_.setPosition(sf::Vector2f(40 * x, 0));
	for (int y = 0; y < y_; ++y) {
		window.draw(ceil_);
		ceil_.move(sf::Vector2f(0, 40));
		green ^= 64;
		ceil_.setFillColor(sf::Color(0, green, 0));
	}
    }
}


void Painter::DrawUnit(sf::RenderWindow& window, std::shared_ptr<Unit>& unit) {
    sf::CircleShape& shape = *(unit->GetShape());
    shape.setPosition(sf::Vector2f(unit->GetPosition().X() * 40 + 4, unit->GetPosition().Y() * 40 + 4));
    window.draw(shape);
}
