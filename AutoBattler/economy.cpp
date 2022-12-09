#include "economy.hpp"

Economy::Economy()
{
    goldRefresh = 2;
    checkRound = 0;
}

Economy::~Economy()
{
}

void Economy::EarnByRound(Player player, int var)
{
    int goldRound;

    if(var == 0){
        goldRound = 0;
        player.currentGold += goldRound;
    }
    else if(var==1 || var ==2){
        goldRound = 2;
        player.currentGold += goldRound;
    }
    else if(var == 3){
        goldRound = 3;
        player.currentGold += goldRound;
    }
    else{
        goldRound = 4;
        player.currentGold += goldRound;
    }


    if(10 <= player.currentGold <= 19){
        player.currentGold += 1;
    }
    else if(20 <= player.currentGold <= 29){
        player.currentGold += 2;
    }
    else if(30 <= player.currentGold <= 39){
        player.currentGold += 3;
    }
    else if(40 <= player.currentGold <= 49){
        player.currentGold += 4;
    }
    else if(50 <= player.currentGold <= player.maxGold){
        player.currentGold += 5;
    }
}

void Economy::GoldBuy(Player player, Card card)
{
    player.currentGold -= card.goldCost;
}

void Economy::GoldSell(Player player)
{
    player.currentGold += 1;
}

void Economy::GoldRefresh(Player player, int var)
{
    player.currentGold -= goldRefresh;
    goldRefresh++;
}