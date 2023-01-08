#pragma once
#include <iostream>
#include "card.hpp"
#include "player.hpp"

// INCLUDES

class Board
{
public:
	int maxCardOnBoard = 3;
	int maxCardInHand = 5;

	Player* player1;
	Player* player2;

	Board(Player* p_player, int cardOnBoard, int cardInHand);
	~Board();
	
	void placeCardOnBoard(Player* player, Card card);
};

