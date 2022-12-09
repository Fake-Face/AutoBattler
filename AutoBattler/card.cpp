#include "card.hpp"

Card::Card(int p_cardID, std::string p_cardName, int p_life, int p_attack, int p_manaCost, int p_goldCost)
{
    cardID = p_cardID;
    cardName = p_cardName;
    life = p_life;
    p_life > 0 ? isAlive = true : isAlive = false;
    attack = p_attack;
    manaCost = p_manaCost;
    goldCost = p_goldCost;
}

Card::~Card()
{
}

void Card::useOn(Card card)
{
    //TODO
    //ID 0: Attack card
    //ID 1: Attack multiple cards
    //ID 2: Attack player
    //ID 3: special ID for Hero
}