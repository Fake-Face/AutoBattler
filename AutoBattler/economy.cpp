#include "economy.hpp"

Economy::Economy(int p_goldGive, int p_goldPay, int p_refreshCost)
{
    goldGive = p_goldGive;
    goldPay = p_goldPay;
    refreshCost = p_refreshCost;
}

Economy::~Economy()
{
}

void Economy::give(Player player, int goldGive)
{
    player.currentGold += goldGive;
}

void Economy::pay(Player player, int goldPay)
{
    player.currentGold -= goldPay;
}

void Economy::refresh()
{
    Economy::refreshCost++;
}