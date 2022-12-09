#include <string>
#include "economy.hpp"

int main()
{
	Player p1 = Player(100, "Flo");
	Economy e1 = Economy();
	Card c = Card(0, "carte", 10, 15, 5, 3);
	int round = 0;

	p1.printAttr();

	e1.EarnByRound(p1, round);
	round++;
	printf("\n");
	e1.EarnByRound(p1, round);
	round++;
	printf("\n");
	e1.EarnByRound(p1, round);
	round++;
	printf("\n");
	e1.EarnByRound(p1, round);
	p1.printAttr();
	e1.GoldRefresh(p1, round);
	p1.printAttr();
	e1.GoldBuy(p1, c);
	p1.printAttr();
	e1.GoldSell(p1);
	round++;
	printf("\n");
	e1.EarnByRound(p1, round);
	round++;
	printf("\n");
	e1.EarnByRound(p1, round);
	round++;
	printf("\n");
	e1.EarnByRound(p1, round);
	p1.printAttr();

	return 0;
}