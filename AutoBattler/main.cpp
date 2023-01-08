#include <string>
#include "economy.hpp"

int main()
{
	Player *p1 = new Player(100, "Flo");
	Economy e1 = Economy();
	Card c = Card(0, "carte", 10, 15, 5, 3);
	int round = 0;

	p1->printAttr();
	
	round++;
	printf("Round: %d\n", round);
	e1.EarnByRound(p1, round);
	e1.EarnGoldPercentages(p1);
	p1->printAttr();

	round = 4;
	printf("Round: %d\n", round);
	e1.EarnByRound(p1, round);
	e1.EarnGoldPercentages(p1);
	p1->printAttr();

	round++;
	printf("Round: %d\n", round);
	e1.EarnByRound(p1, round);
	e1.EarnGoldPercentages(p1);
	p1->printAttr();

	e1.GoldBuy(p1, c);
	p1->printAttr();
	e1.GoldSell(p1);
	p1->printAttr();
	e1.GoldRefresh(p1);
	p1->printAttr();
	e1.GoldRefresh(p1);
	p1->printAttr();

	return 0;
}