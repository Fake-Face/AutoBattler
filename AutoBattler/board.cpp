#pragma once
#include "board.hpp"
#include "card.hpp"

Board::Board(Player* p_player, int cardOnBoard, int cardInHand)
{
	Player* player = p_player;
	
	if (cardOnBoard > maxCardOnBoard)
	{
		std::cout << "Too many cards on board, max is " << maxCardOnBoard << std::endl;
	}
	
	if (cardInHand > maxCardInHand)
	{
		std::cout << "Too many cards in hand, max is " << maxCardInHand << std::endl;
	}
}