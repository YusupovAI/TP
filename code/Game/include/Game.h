#ifndef TP_GAME_H
#define TP_GAME_H
#include "Player.h"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "Painter.h"

class Game final {

public:
    Game(const Player&, const Player&);
    Game() = delete;
    void Draw();
    void Play();

private:
    unsigned int turn_;
    enum PlayerTurns { F_PLAYER_TURN, S_PLAYER_TURN} current_turn_;
    Player player1_, player2_;
    void NextTurn();

    Painter painter_;
    sf::RenderWindow window_;
    std::shared_ptr<Unit> current_unit_;
};

#endif
