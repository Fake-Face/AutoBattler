#define _CRT_SECURE_NO_WARNINGS

#include "menu.h"
#include <string.h>
#include <stdio.h>

void menu()
{
	int e;
	int action;
	int fin = 1;
	

	char partie = 'r';
	char ReturnMenu = 'p';
	char Menu = 'm';

	char name[50];
	//sPlayer player;
	//sPlayer* pplayer = &player;

	int actionbis;
	printf("Menu du jeu : \n");
	printf("Que voulez vous faire ? \n");
	printf("1. Nom du joueur \n");
	printf("2. Lancer une partie \n");
	printf("3. Quitter\n");

	printf("VOTRE CHOIX : /n");

	e = scanf("%d", &action);

	while (!fin);
	{
		switch (action)
		{
		case 1:
			char* Name;
			printf("taille maximale : 50 caractères \n");
			printf("Nom du joueur : \n");
			e = scanf("%s", &Name);
		default:
			break;
		case 2:

			break;

		case 3:
			fin++;
			break;
		}
	}
}
