#pragma once
#include "player.hpp"

class Economy
{
public:
	int goldGive;
	int goldPay;
	int refreshCost;

	Economy(int p_goldGive, int p_goldPay, int p_refreshCost);
	~Economy();

	void give(Player player, int goldGive);
	void pay(Player player, int goldPay);
	void refresh();
};