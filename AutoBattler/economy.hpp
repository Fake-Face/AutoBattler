#pragma once
#include "player.hpp"
#include "card.hpp"

class Economy
{
private:
	int checkRound;
	
public:
	int goldRefresh;

	Economy();
	~Economy();

	void EarnByRound(Player player, int var);
	void GoldBuy(Player player, Card card);
	void GoldSell(Player player);
	void GoldRefresh(Player player, int var);
};