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
#include "Hero/HumanHeroBuilder.h"
#include "Hero/OrcHeroBuilder.h"
#include "Hero/HeroDirector.h"




int main(int argc, char* argv[]) {
    Player player1(std::make_shared<OrcFactory>(OrcFactory())), player2(std::make_shared<HumanFactory>(HumanFactory()));
    HeroDirector director1;
    HeroDirector director2;
    director1.ChangeBuilder(std::make_shared<OrcHeroBuilder>());
    director2.ChangeBuilder(std::make_shared<HumanHeroBuilder>());


    player1.CreateHorseman(Point(0, 0));
    player1.CreateHorseman(Point(1, 0));
    player1.CreateMage(Point(2, 0));
    player1.CreateInfantry(Point(3, 0));
    player1.CreateInfantry(Point(4, 0));
    if (argv[0] == "Wise") {
        player1.SetHero(*(director1.CreateWiseHero(Point(5, 0))));
    } else {
	player1.SetHero(*(CreateMightyHero(Point(5, 0))));
    }
    player1.CreateInfantry(Point(6, 0));
    player1.CreateInfantry(Point(7, 0));
    player1.CreateMage(Point(8, 0));
    player1.CreateHorseman(Point(9, 0));
    player1.CreateHorseman(Point(10, 0));


    player2.CreateHorseman(Point(19, 14));
    player2.CreateHorseman(Point(18, 14));
    player2.CreateMage(Point(17, 14));
    player2.CreateInfantry(Point(16, 14));
    player2.CreateInfantry(Point(15, 14));
    if (argv[1] == "Wise") {
    	player2.SetHero(*(director2.CreateWiseHero(Point(14, 14))));
    } else {
	player2.SetHero(*(director2.CreateMightyHero(Point(14, 14))));
    }
    player2.CreateInfantry(Point(13, 14));
    player2.CreateInfantry(Point(12, 14));
    player2.CreateMage(Point(11, 14));
    player2.CreateHorseman(Point(10, 14));
    player2.CreateHorseman(Point(9, 14));


    Game game(player1, player2);
    game.Play();
    return 0;
}
