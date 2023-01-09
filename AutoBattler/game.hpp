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
    int round;

    Game(std::string name);
    ~Game();

    void startGame(Player *p1, Player *bot, Card card);
    void handToBoard(Player *p, int carte_A, int carte_B, int carte_C);
    int fight(Player *p1, Player *p2);
    void endRound(int value, Player *p, Player *bot);
};