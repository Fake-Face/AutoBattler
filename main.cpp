#include <iostream>
#include "Player.hpp"

int main()
{
	std::string name;
	std::cout<<"Choisissez votre nom dans le jeu"<<std::endl;
	std::cin>>name;
	Player p1(30,name,true, 3);
	p1.printAttr();
	return 0;
}