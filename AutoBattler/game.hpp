#pragma once
#include "card.hpp"
#include "player.hpp"
#include "economy.hpp"
#include "render.hpp"

class Game
{
public:
    Player *player1;
    Player *player2;
    Economy economy;
    Render render;

    Game(std::string name);
    ~Game();

    
};