#include "deck.h"

deck::deck(std::vector<Card> p_cardList)
{
    cardList = p_cardList;
}

deck::~deck()
{
}

void deck::shuffle()
{
    std::random_shuffle(cardList.begin(), cardList.end());
}

Card deck::draw()
{
    Card draw_card = cardList.back();
    cardList.pop_back();
    return draw_card;
}