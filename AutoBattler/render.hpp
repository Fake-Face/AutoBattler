#pragma once
#include "player.hpp"

class Render
{
public:
	Render();
	~Render();

	void printMinion();
	void printSpell();
	void printHero();
	void printShop();
	void printPlayerStats(Player *player1, Player *player2);
	void printBoardSeparator();
	void printHandSeparator();
};