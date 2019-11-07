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
#include <string>
#include <fstream>



int main(int argc, char* argv[]) {
    Player player1(std::make_shared<OrcFactory>(OrcFactory())), player2(std::make_shared<HumanFactory>(HumanFactory()));
    HeroDirector director1;
    HeroDirector director2;
    director1.ChangeBuilder(std::make_shared<OrcHeroBuilder>());
    director2.ChangeBuilder(std::make_shared<HumanHeroBuilder>());

    std::string filename("field.txt");
    std::ifstream in(filename);

    for (int y = 0; y < 7; ++y) {
	    std::string current;
	in >> current;
	for (int x = 0; x < 20; ++x) {
	    if (current[x] == 'H') {player1.CreateHorseman(Point(x, y));}
	    if (current[x] == 'I') {player1.CreateInfantry(Point(x, y));}
	    if (current[x] == 'M') {player1.CreateMage(Point(x, y));}
	    if (current[x] == '*') {
		if (argc > 1 && std::string(argv[1]) == std::string("Wise")) {
        	    player1.SetHero(*(director1.CreateWiseHero(Point(x, y))));
    		} else {
		    player1.SetHero(*(director1.CreateMightyHero(Point(x, y))));
    		}
	    } 
	}
    }

    std::string tmp;
    in >> tmp;
    
    for (int y = 8; y < 15; ++y) {
	std::string current;
	in >> current;
	for (int x = 0; x < 20; ++x) {
	    if (current[x] == 'H') {player2.CreateHorseman(Point(x, y));}
	    if (current[x] == 'I') {player2.CreateInfantry(Point(x, y));}
	    if (current[x] == 'M') {player2.CreateMage(Point(x, y));}
	    if (current[x] == '*') {
		if (argc > 2 && std::string(argv[2]) == std::string("Wise")) {
        	    player2.SetHero(*(director2.CreateWiseHero(Point(x, y))));
    		} else {
		    player2.SetHero(*(director2.CreateMightyHero(Point(x, y))));
    		}
	    } 
	}
    }

    in.close();


    Game game(player1, player2);

    short result = game.Play();
    if (result == 1) {
	std::cout << "First player won";
    } 
    if (result == 2) {
	std::cout << "Second player won";
    }
    return 0;
}
