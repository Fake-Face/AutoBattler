#include "economy.hpp"

Economy::Economy()
{
    goldRefresh = 2;
    checkRound = 0;
}

Economy::~Economy()
{
}

void Economy::EarnByRound(Player *player, int var)
{
    int currentGold = player->getGold();

    if(currentGold <= player->maxGold)
    {
        if(var==1 || var ==2){
            player->changeGold(2);
        }
        else if(var == 3){
            player->changeGold(3);
        }
        else if(var >= 4){
            player->changeGold(4);
        }


        if(0 <= currentGold && currentGold <= 9){
            player->changeGold(0);
        }
        else if(10 <= currentGold && currentGold <= 19){
            player->changeGold(1);
        }
        else if(20 <= currentGold && currentGold <= 29){
            player->changeGold(2);
        }
        else if(30 <= currentGold && currentGold <= 39){
            player->changeGold(3);
        }
        else if(40 <= currentGold && currentGold <= 49){
            player->changeGold(4);
        }
        else if(50 <= currentGold && currentGold <= player->maxGold){
            player->changeGold(5);
        }


        int newCurrentGold = player->getGold();
        
        if(newCurrentGold > player->maxGold){
            player->currentGold = player->maxGold;
        }
    }
}

void Economy::GoldBuy(Player *player, Card card)
{
    player->changeGold(-card.goldCost);
}

void Economy::GoldSell(Player *player)
{
    player->changeGold(1);
}

void Economy::GoldRefresh(Player *player)
{
    player->changeGold(-goldRefresh);
    goldRefresh++;
}