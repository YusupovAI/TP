#ifndef TP_GAME_H
#define TP_GAME_H
#include "Player.h"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

class Game final {

public:
    Game(const Player&, const Player&);
    Game() = delete;
    void Draw();
    void Play();

private:
    unsigned int turn_;
    enum PlayerTurns { F_PLAYER_TURN, S_PLAYER_TURN} cur_turn_;
    Player player1_, player2_;

    void DrawField();
    void DrawUnits();

    sf::RenderWindow window_;
    sf::RectangleShape ceil_;
};

#endif
