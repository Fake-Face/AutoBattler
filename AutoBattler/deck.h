#pragma once
#include "card.h"
#include <string>
#include <vector>
#include <algorithm>

class deck
{
private:
    std::vector<Card> cardList;
public:
    deck(std::vector<Card> p_cardList);
    ~deck();

    void shuffle();
    Card draw();
};