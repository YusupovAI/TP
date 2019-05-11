#ifndef TP_PAINTER_H
#define TP_PAINTER_H

#include <vector>
#include <memory>
#include "Unit/Unit.h"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

class Painter final {

public:
    Painter();
    void Draw(sf::RenderWindow& window, std::vector<std::shared_ptr<Unit> >&, std::vector<std::shared_ptr<Unit> >&);

private:
    void DrawUnit(sf::RenderWindow& window, std::shared_ptr<Unit>&);
    void DrawField(sf::RenderWindow& window);
    size_t x_, y_;
    sf::RectangleShape ceil_;
    size_t move_model_;
};

#endif
