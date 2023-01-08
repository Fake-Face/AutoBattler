#pragma once

enum Minion
{
	// [PRICE = 1] 
	LANCEUR_DE_PIERRE, 	//	[ATK = 2] [HP = 1] [MANA = 2]
	GOBELIN, 			//	[ATK = 3] [HP = 1] [MANA = 1]
	FANTASSIN, 			// 	[ATK = 2] [HP = 1] [MANA = 2]
	BANDIT, 			// 	[ATK = 2] [HP = 2] [MANA = 1]
	DRUIDE, 			// 	[ATK = 1] [HP = 3] [MANA = 2]
	MOINE,				// 	[ATK = 1] [HP = 2] [MANA = 2]

	// [PRICE = 2] 
	VOLEUR,				//	[ATK = 4] [HP = 4] [MANA = 2]
	GUERRIER,			//	[ATK = 5] [HP = 3] [MANA = 3]
	ARCHER,				//	[ATK = 4] [HP = 4] [MANA = 3]
	MAGE,				//	[ATK = 3] [HP = 5] [MANA = 3]
	GOULE,				//	[ATK = 4] [HP = 5] [MANA = 2]
	PRETRE,				//	[ATK = 3] [HP = 4] [MANA = 3]

	// [PRICE = 3] 
	ARBALETRIER,		//	[ATK = 5] [HP = 4] [MANA = 3]
	SORCIER,			//	[ATK = 4] [HP = 5] [MANA = 4]
	CHEVALIER,			//	[ATK = 5] [HP = 5] [MANA = 4]
	ASSASSIN,			//	[ATK = 6] [HP = 4] [MANA = 3]
	DEMON,				//	[ATK = 5] [HP = 5] [MANA = 4]
	EVEQUE,				//	[ATK = 4] [HP = 6] [MANA = 4]

	// [PRICE = 4] 
	PALADIN,			//	[ATK = 6] [HP = 6] [MANA = 5]
	MASSACREUR,			//	[ATK = 7] [HP = 6] [MANA = 5]
	ARCHIDEMON,			//	[ATK = 6] [HP = 7] [MANA = 4]
	ARCANISTE,			//	[ATK = 5] [HP = 6] [MANA = 5]
	CARDINAL,			//	[ATK = 5] [HP = 7] [MANA = 5]
	ARQUEBUSIER			//	[ATK = 7] [HP = 6] [MANA = 4]
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
	DEMI_DIEU,		// [ATK = 9] [HP = 10] [MANA = 8] [PASSIVE = ]
	PAPE,			// [ATK = 5] [HP = 9] [MANA = 7] [PASSIVE = ]
	ROI,			// [ATK = 5] [HP = 5] [MANA = 7] [PASSIVE = ]
	ROI_DEMON,		// [ATK = 5] [HP = 5] [MANA = 8] [PASSIVE = ]
	TERREUR,		// [ATK = 5] [HP = 5] [MANA = 7] [PASSIVE = ]
	SUPRA_ENTITE,	// [ATK = 5] [HP = 5] [MANA = 8] [PASSIVE = ]

	// [PRICE = 5]	
	DIEU,			// [ATK = 5] [HP = 5] [MANA = 10] [PASSIVE = ]
	SAINT,			// [ATK = 5] [HP = 5] [MANA = 10] [PASSIVE = ]
	EMPEREUR,		// [ATK = 5] [HP = 5] [MANA = 10] [PASSIVE = ]
	SATAN,			// [ATK = 5] [HP = 5] [MANA = 10] [PASSIVE = ]
	TYRAN,			// [ATK = 5] [HP = 5] [MANA = 10] [PASSIVE = ]	
	ENERGIE_SUPREME	// [ATK = 5] [HP = 5] [MANA = 10] [PASSIVE = ]
	
};