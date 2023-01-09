#pragma once
#include "card.hpp"
#include <string>
#include <vector>
#include <algorithm>

class Deck
{
private:
    std::vector<Card> cardList;

public:
    Deck(std::vector<Card> p_cardList);
    ~Deck();

    void shuffle();
    Card draw();
};