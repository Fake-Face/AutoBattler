#include "deck.hpp"

Deck::Deck(std::vector<Card> p_cardList)
{
    cardList = p_cardList;
}

Deck::~Deck()
{
}

void Deck::shuffle()
{
    std::random_shuffle(cardList.begin(), cardList.end());
}

Card Deck::draw()
{
    Card draw_card = cardList.back();
    cardList.pop_back();
    return draw_card;
}