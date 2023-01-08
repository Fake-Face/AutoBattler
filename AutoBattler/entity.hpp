#pragma once

enum Minion
{
	// [PRICE = 1] 
	FANTASSIN, 			// 	[ATK = 2] [HP = 1] [MANA = 2]
	BANDIT, 			// 	[ATK = 2] [HP = 2] [MANA = 1]
	LANCEUR_DE_PIERRE, 	//	[ATK = 2] [HP = 1] [MANA = 2]
	DRUIDE, 			// 	[ATK = 1] [HP = 3] [MANA = 2]
	GOBELIN, 			//	[ATK = 3] [HP = 1] [MANA = 1]
	MOINE,				// 	[ATK = 1] [HP = 2] [MANA = 2]

	// [PRICE = 2] 
	GUERRIER,			//	[ATK = 5] [HP = 3] [MANA = 3]
	VOLEUR,				//	[ATK = 5] [HP = 5] [MANA = 2]
	ARCHER,				//	[ATK = 4] [HP = 3] [MANA = 3]
	MAGE,				//	[ATK = 3] [HP = 5] [MANA = 3]
	GOULE,				//	[ATK = 5] [HP = 3] [MANA = 2]
	PRETRE,				//	[ATK = 3] [HP = 4] [MANA = 3]

	// [PRICE = 3] 
	CHEVALIER,			//	[ATK = 6] [HP = 4] [MANA = 4]
	ASSASSIN,			//	[ATK = 6] [HP = 6] [MANA = 3]
	ARBALETRIER,		//	[ATK = 5] [HP = 4] [MANA = 3]
	SORCIER,			//	[ATK = 4] [HP = 6] [MANA = 4]
	DEMON,				//	[ATK = 6] [HP = 5] [MANA = 4]
	EVEQUE,				//	[ATK = 4] [HP = 5] [MANA = 4]

	// [PRICE = 4] 
	PALADIN,			//	[ATK = 7] [HP = 5] [MANA = 4]
	MASSACREUR,			//	[ATK = 7] [HP = 7] [MANA = 5]
	ARQUEBUSIER,		//	[ATK = 6] [HP = 5] [MANA = 4]
	ARCANISTE,			//	[ATK = 5] [HP = 6] [MANA = 5]
	ARCHIDEMON,			//	[ATK = 7] [HP = 5] [MANA = 4]
	CARDINAL,			//	[ATK = 5] [HP = 7] [MANA = 5]
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
	DEMI_DIEU,		// [ATK = 8] [HP = 11] [MANA = 8] [PASSIVE = régénère les HP de 1HP d'une carte à chaque tour]
	PAPE,			// [ATK = 8] [HP = 10] [MANA = 7] [PASSIVE = donne un bouclier de 3HP à une carte sur le plateau]
	ROI,			// [ATK = 9] [HP = 10] [MANA = 7] [PASSIVE = augmente les HP de 2HP d'une carte sur le plateau]
	ROI_DEMON,		// [ATK = 10] [HP = 9] [MANA = 8] [PASSIVE = attaque le joueur ou une carte de manière aléatoire]
	TERREUR,		// [ATK = 9] [HP = 9] [MANA = 7] [PASSIVE = augmente les dégats de 2 d'une carte sur le plateau]
	SUPRA_ENTITE,	// [ATK = 10] [HP = 11] [MANA = 8] [PASSIVE = une cartes du joueur attaquent l'adversaire en ignorant les boucliers]

	// [PRICE = 5]	
	DIEU,			// [ATK = 10] [HP = 14] [MANA = 10] [PASSIVE = régénère les HP de 1HP de toutes les cartes à chaque tour]
	SAINT,			// [ATK = 10] [HP = 12] [MANA = 9] [PASSIVE = donne un bouclier de 5HP à toutes les cartes sur le plateau]
	EMPEREUR,		// [ATK = 10] [HP = 11] [MANA = 9] [PASSIVE = augmente les HP de 4HP d'une carte sur le plateau]
	SATAN,			// [ATK = 14] [HP = 12] [MANA = 10] [PASSIVE = attaque le joueur et une carte de manière aléatoire]
	TYRAN,			// [ATK = 11] [HP = 12] [MANA = 10] [PASSIVE = augmente les dégats de 2 de toutes les cartes sur le plateau]]	
	ENERGIE_SUPREME	// [ATK = 12] [HP = 13] [MANA = 10] [PASSIVE = toutes les cartes du joueur attaquent l'adversaire en ignorant les boucliers]
};

struct spawnProbabilities
{
	float probaHero = 0.2;
	float probaSpell = 0.4;
	float probaMinion = 0.4;
} typedef spawnProb;