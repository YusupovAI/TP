#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include <iostream>


int main() {
	sf::RenderWindow window(sf::VideoMode(1000, 800), "Strategy"); 
	sf::RectangleShape shape(sf::Vector2f(40, 40));
	shape.setFillColor(sf::Color(0, 128, 0));
	//sf::Vector2i position;
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {window.close();}	
		}
		/*if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
			position = sf::Mouse::getPosition();
			std::cout << position.x << ' ' << position.y << '\n';
		}*/
		window.clear();
		for (int i = 0; i < 25; ++i) {
			for (int j = 0; j < 20; ++j) {
				shape.setFillColor(sf::Color(0, ((i + j) % 2 == 0 ? 128 : 64), 0));
				window.draw(shape);
				shape.move(sf::Vector2f(0, 40));
							}
			shape.setPosition(sf::Vector2f(40 * i + 40,0)); 
		}
		shape.setFillColor(sf::Color(0, 128, 0));
		window.draw(shape);
		window.display();
		shape.setPosition(sf::Vector2f(0, 0));
	}

	return 0;
}
