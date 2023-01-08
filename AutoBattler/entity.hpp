#pragma once

enum Minion
{
	// [PRICE = 1] 
	FANTASSIN, 			// 	[ATTACK = 2] [LIFE = 1] [MANA = 2]
	BANDIT, 			// 	[ATTACK = 2] [LIFE = 2] [MANA = 1]
	LANCEUR_DE_PIERRE, 	//	[ATTACK = 2] [LIFE = 1] [MANA = 2]
	DRUIDE, 			// 	[ATTACK = 1] [LIFE = 3] [MANA = 2]
	GOBELIN, 			//	[ATTACK = 3] [LIFE = 1] [MANA = 1]
	MOINE,				// 	[ATTACK = 1] [LIFE = 2] [MANA = 2]

	// [PRICE = 2] 
	GUERRIER,			//	[ATTACK = 5] [LIFE = 3] [MANA = 3]
	VOLEUR,				//	[ATTACK = 5] [LIFE = 5] [MANA = 2]
	ARCHER,				//	[ATTACK = 4] [LIFE = 3] [MANA = 3]
	MAGE,				//	[ATTACK = 3] [LIFE = 5] [MANA = 3]
	GOULE,				//	[ATTACK = 5] [LIFE = 3] [MANA = 2]
	PRETRE,				//	[ATTACK = 3] [LIFE = 4] [MANA = 3]

	// [PRICE = 3] 
	CHEVALIER,			//	[ATTACK = 6] [LIFE = 4] [MANA = 4]
	ASSASSIN,			//	[ATTACK = 6] [LIFE = 6] [MANA = 3]
	ARBALETRIER,		//	[ATTACK = 5] [LIFE = 4] [MANA = 3]
	SORCIER,			//	[ATTACK = 4] [LIFE = 6] [MANA = 4]
	DEMON,				//	[ATTACK = 6] [LIFE = 5] [MANA = 4]
	EVEQUE,				//	[ATTACK = 4] [LIFE = 5] [MANA = 4]

	// [PRICE = 4] 
	PALADIN,			//	[ATTACK = 7] [LIFE = 5] [MANA = 4]
	MASSACREUR,			//	[ATTACK = 7] [LIFE = 7] [MANA = 5]
	ARQUEBUSIER,		//	[ATTACK = 6] [LIFE = 5] [MANA = 4]
	ARCANISTE,			//	[ATTACK = 5] [LIFE = 6] [MANA = 5]
	ARCHIDEMON,			//	[ATTACK = 7] [LIFE = 5] [MANA = 4]
	CARDINAL,			//	[ATTACK = 5] [LIFE = 7] [MANA = 5]
};

enum Spell
{
	// [PRICE = 1]
	BREUVAGE_DE_VIE,		// PLAYER, CARD
	BREUVAGE_DE_FORCE,		// CARD
	BREUVAGE_DE_MANA,		// PLAYER
	BREUVAGE_DE_BOUCLIER,	// CARD
	BREUVAGE_DE_DEGATS,		// PLAYER, CARD

	// [PRICE = 2]
	FIOLE_DE_VIE,			// PLAYER, CARD
	FIOLE_DE_FORCE,			// CARD
	FIOLE_DE_MANA,			// PLAYER
	FIOLE_DE_BOUCLIER,		// CARD
	FIOLE_DE_DEGATS,		// PLAYER, CARD

	// [PRICE = 3]
	POTION_DE_VIE,			// PLAYER, CARD
	POTION_DE_FORCE,		// CARD
	POTION_DE_MANA,			// PLAYER
	POTION_DE_BOUCLIER,		// CARD
	POTION_DE_DEGATS,		// PLAYER, CARD

	// [PRICE = 4]
	REMEDE_DE_VIE,			// PLAYER, CARD
	REMEDE_DE_FORCE,		// CARD
	REMEDE_DE_MANA,			// PLAYER
	REMEDE_DE_BOUCLIE,		// CARD
	REMEDE_DE_DEGATS,		// PLAYER, CARD
	
	// [PRICE = 5]
	ELIXIR_DE_VIE,			// PLAYER, CARD
	ELIXIR_DE_FORCE,		// CARD
	ELIXIR_DE_MANA,			// PLAYER
	ELIXIR_DE_BOUCLIER,		// CARD
	ELIXIR_DE_DEGATS		// PLAYER, CARD
};

enum Hero
{
	// [PRICE = 4]
	DEMI_DIEU,		// [ATTACK = 8] [LIFE = 11] [MANA = 8] [PASSIVE = régénère les LIFE de 1LIFE d'une carte à chaque tour]
	PAPE,			// [ATTACK = 8] [LIFE = 10] [MANA = 7] [PASSIVE = donne un bouclier de 3LIFE à une carte sur le plateau]
	ROI,			// [ATTACK = 9] [LIFE = 10] [MANA = 7] [PASSIVE = augmente les LIFE de 2LIFE d'une carte sur le plateau]
	ROI_DEMON,		// [ATTACK = 10] [LIFE = 9] [MANA = 8] [PASSIVE = attaque le joueur ou une carte de manière aléatoire]
	TERREUR,		// [ATTACK = 9] [LIFE = 9] [MANA = 7] [PASSIVE = augmente les dégats de 2 d'une carte sur le plateau]
	SUPRA_ENTITE,	// [ATTACK = 10] [LIFE = 11] [MANA = 8] [PASSIVE = une cartes du joueur attaquent l'adversaire en ignorant les boucliers]

	// [PRICE = 5]	
	DIEU,			// [ATTACK = 10] [LIFE = 14] [MANA = 10] [PASSIVE = régénère les LIFE de 1LIFE de toutes les cartes à chaque tour]
	SAINT,			// [ATTACK = 10] [LIFE = 12] [MANA = 9] [PASSIVE = donne un bouclier de 5LIFE à toutes les cartes sur le plateau]
	EMPEREUR,		// [ATTACK = 10] [LIFE = 11] [MANA = 9] [PASSIVE = augmente les LIFE de 4LIFE d'une carte sur le plateau]
	SATAN,			// [ATTACK = 14] [LIFE = 12] [MANA = 10] [PASSIVE = attaque le joueur et une carte de manière aléatoire]
	TYRAN,			// [ATTACK = 11] [LIFE = 12] [MANA = 10] [PASSIVE = augmente les dégats de 2 de toutes les cartes sur le plateau]]	
	ENERGIE_SUPREME	// [ATTACK = 12] [LIFE = 13] [MANA = 10] [PASSIVE = toutes les cartes du joueur attaquent l'adversaire en ignorant les boucliers]
};

struct spawnProbabilities
{
	float probaHero = 0.2;
	float probaSpell = 0.4;
	float probaMinion = 0.4;
} typedef spawnProb;