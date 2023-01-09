#pragma once
#include "card.hpp"
#include "player.hpp"
#include "economy.hpp"
#include "render.hpp"
#include "deck.hpp"

class Game
{
public:
    Player *player1;
    Player *player2;
    Economy economy;
    Render render;
    std::vector<Card> fullDeck;
    std::vector<Card> handPlayer;
    std::vector<Card> handBot;
    std::vector<Card> boardPlayer;
    std::vector<Card> boardBot;

    Game(std::string name);
    ~Game();

    void startGame(Card card);
    void handToBoard(int carte_A, int carte_B, int carte_C);
};