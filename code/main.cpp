#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include <iostream>
#include "Game.h"
#include "Factory/HumanFactory.h"
#include "Factory/OrcFactory.h"
#include "Player.h"
#include "Point.h"
#include "Unit/DoubleAttackUnit.h"
#include <iostream>




int main() {
    Player player1(std::make_shared<OrcFactory>(OrcFactory())), player2(std::make_shared<HumanFactory>(HumanFactory()));
    player1.CreateHorseman(Point(0, 0));
    player1.CreateHorseman(Point(1, 0));
    player2.CreateHorseman(Point(0, 14));
    Game game(player1, player2);
    game.Play();
    return 0;
}
