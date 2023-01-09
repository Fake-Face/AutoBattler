#pragma once
#include "card.hpp"
#include <string>
#include <vector>
#include <algorithm>

class Deck
{
public:
    std::vector<Card> cardList;
    
    Deck(std::vector<Card> p_cardList);
    ~Deck();

    void shuffle();
    Card draw();
};