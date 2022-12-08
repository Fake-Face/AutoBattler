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
    if(cardID == 0){
        int choose;
        printf("Choose a card to use on: \n");
        scanf("%d", &choose);
        //TODO: use card on choosen card from enemy boardDeck
    }
    else if(cardID == 1){
        int n=0;
        int value;
        while(GetKeyState(VK_ESCAPE) & 0x8000/*TODO || n>=deckBoard <=> si on a choisi tt les cartes adverses*/){
            printf("Choose a card to use on or press ESCAPE to leave: \n");
            scanf("%d", &value);
            Card card_choose = deckBoard[value];
        }
    }
}