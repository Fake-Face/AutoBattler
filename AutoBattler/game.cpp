#pragma once
#include "game.hpp"

Game::Game(std::string name)
{
    player1->changeName(name);
    player2->changeName("Bot");
    economy = Economy();
    render = Render();
}

Game::~Game()
{
    player1->~Player();
    player2->~Player();
    economy.~Economy();
    render.~Render();
}

