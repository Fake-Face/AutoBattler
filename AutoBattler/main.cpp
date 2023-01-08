#include <string>
#include "economy.hpp"
#include "render.hpp"

int main()
{
	Player *p1 = new Player(30, "Flo");
	Player *p2 = new Player(30, "Lukas");
	Economy e = Economy();
	render r = render();
	Card c = Card(0, "carte", 10, 3, 2, 3);
	

	int round = 0;

	while(round <= 20){
		printf("Round %d\n", round);
		e.EarnByRound(p1, round); e.EarnByRound(p2, round);
		r.printPlayerStats(p1, p2);
		round++;
	}
	
	return 0;
}