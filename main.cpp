#include <iostream>
#include "Player.hpp"

int main()
{
	std::string name;
	int reponse;
	std::cout<<"Choisissez votre nom dans le jeu"<<std::endl;
	std::cin>>name;
	Player p1(30,name,true, 3);
	std::cout<<"Que voulez-vous faire?"<<"\n";
	std::cout<<"Attaquer (1), "<<"Piocher (2), "<<"Passer (3)."<<"\n";
	std::cin>>reponse;

	if(reponse == 1){
		std::cout<<"coucou vous allez attaquer"<<"\n";
	}
	else if(reponse == 2){
		std::cout<<"coucou vous allez piocher"<<"\n";
	}
	else if(reponse == 3){
		std::cout<<"coucou vous allez passer votre tour"<<"\n";
	}
	//p1.printAttr();
	//p1.display();
	return 0;
}