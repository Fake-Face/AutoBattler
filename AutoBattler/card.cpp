#include "card.h"

Card::Card(int p_cardID, std::string p_cardName, int p_life, int p_attack, int p_manaCost, int p_goldCost)
{
    cardID = p_cardID;
    cardName = p_cardName
    life = p_life;
    p_life>0 ? isAlive = true : isAlive = false;
    attack = p_attack;
    manaCost = p_manaCost;
    goldCost = p_goldCost;
}

Card::~Card()
{
}

void Card::useOn(Card card)
{
    if(card.cardID == 0){

    }
}