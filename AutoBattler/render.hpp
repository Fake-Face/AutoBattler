#pragma once
#include "player.hpp"

class render
{
public:
	render();
	~render();

	void printMinion();
	void printSpell();
	void printHero();
	void printShop();
	void printPlayerStats(Player *player1, Player *player2);
};