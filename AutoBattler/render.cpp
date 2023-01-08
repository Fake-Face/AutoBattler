#include "render.hpp"
#include <iostream>

render::render()
{
}

render::~render()
{
}

void render::printMinion()
{
	std::cout << "╔═══╗" << std::endl;
	std::cout << "║ M ║" << std::endl;
	std::cout << "╚═══╝" << std::endl;
}

void render::printSpell()
{
	std::cout << "╔═══╗" << std::endl;
	std::cout << "║ S ║" << std::endl;
	std::cout << "╚═══╝" << std::endl;
}

void render::printHero()
{
	std::cout << "╔═══╗" << std::endl;
	std::cout << "║ H ║" << std::endl;
	std::cout << "╚═══╝" << std::endl;
}

void render::printShop()
{
	std::cout << "■■■■■■■■■■ SHOP ■■■■■■■■■■" << std::endl;
}

void printBoardSeparator()
{
	std::cout << "═════════════════════════════════════" << std::endl;
}

void printHandSeparator()
{
	std::cout << "----------------------------------------------------" << std::endl;
}

void render::printPlayerStats(Player *player1, Player *player2)
{
	printf("\n");
	printf("╔══════ PLAYER 1 ═══════╗\t\t ╔══════ PLAYER 2 ═══════╗\n");
	printf("║  LIFE : %d ♥\t\t║\t\t ║  LIFE : %d ♥\t\t ║\n", player1->getLife(), player2->getLife());
	printf("║  MANA : %d ●\t\t║\t\t ║  MANA : %d ●\t\t ║\n", player1->getMana(), player2->getMana());
	printf("║  GOLD : %d G\t\t║\t\t ║  GOLD : %d G\t\t ║\n", player1->getGold(), player2->getGold());
	printf("╚═══════════════════════╝\t\t ╚═══════════════════════╝\n");
	printf("\n");
}
