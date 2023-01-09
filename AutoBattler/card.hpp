#pragma once
#include <string>
#include <stdio.h>
#include <vector>
#include "entity.hpp"

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

public:
    int goldCost;
    std::vector<Card> deckCard;
    
    Card(int p_cardID, std::string p_cardName, int p_life, int p_attack, int p_manaCost, int p_goldCost);
    ~Card();

	// void minionList();
	// void spellList();
    // void heroList();

    std::vector<Card> makeDeckCard(Card card);

    //Getter
    int getCardLife();
    int getCardAttack();

    //Setter
    void setCardLife(int card_life);
};