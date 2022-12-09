#pragma once
#include <string>
#include <stdio.h>

class Card
{
protected:
    int cardID;
private:
    std::string cardName;
    int life;
    bool isAlive;
    int attack;
    int manaCost;
    int goldCost;

public:
    Card(int p_cardID, std::string p_cardName, int p_life, int p_attack, int p_manaCost, int p_goldCost);
    ~Card();

    void useOn(Card card);
};