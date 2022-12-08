#pragma once
#include <string>
#include <vector>

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