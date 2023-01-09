#include "card.hpp"
#include "entity.hpp"

Card::Card(int p_cardID, std::string p_cardName, int p_life, int p_attack, int p_manaCost, int p_goldCost)
{
    cardID = p_cardID;
    cardName = p_cardName;
    life = p_life;
    p_life > 0 ? isAlive = true : isAlive = false;
    attack = p_attack;
    manaCost = p_manaCost;
    goldCost = p_goldCost;
}

Card::~Card()
{
}

std::vector<Card> makeDeckCard(Card card)
{
	// PRICE = 1
	card.deckCard.push_back(Card(0, "Fantassin", 1, 2, 2, 1));
	card.deckCard.push_back(Card(0, "Bandit", 2, 2, 1, 2));
	card.deckCard.push_back(Card(0, "Lanceur de pierre", 1, 2, 2, 1));
	card.deckCard.push_back(Card(0, "Druide", 3, 1, 2, 1));
	card.deckCard.push_back(Card(0, "Gobelin", 1, 3, 1, 1));
	card.deckCard.push_back(Card(0, "Moine", 2, 1, 2, 1));

	// PRICE = 2
	card.deckCard.push_back(Card(0, "Guerrier", 3, 5, 3, 2));
	card.deckCard.push_back(Card(0, "Voleur", 5, 5, 3, 2));
	card.deckCard.push_back(Card(0, "Archer", 3, 4, 3, 2));
	card.deckCard.push_back(Card(0, "Mage", 5, 3, 3, 2));
	card.deckCard.push_back(Card(0, "Goule", 3, 5, 2, 2));
	card.deckCard.push_back(Card(0, "Pretre", 4, 3, 3, 2));

	// PRICE = 3
	card.deckCard.push_back(Card(0, "Chevalier", 4, 6, 4, 3));
	card.deckCard.push_back(Card(0, "Assassin", 6, 6, 3, 3));
	card.deckCard.push_back(Card(0, "Arbaletrier", 4, 5, 3, 3));
	card.deckCard.push_back(Card(0, "Sorcier", 6, 4, 4, 3));
	card.deckCard.push_back(Card(0, "Demon", 5, 6, 4, 3));
	card.deckCard.push_back(Card(0, "Eveque", 5, 4, 4, 3));

	// PRICE = 4
	card.deckCard.push_back(Card(0, "Paladin", 5, 7, 4, 4));
	card.deckCard.push_back(Card(0, "Massacreur", 7, 7, 5, 4));
	card.deckCard.push_back(Card(0, "Arquebusier", 5, 6, 4, 4));
	card.deckCard.push_back(Card(0, "Arcaniste", 6, 5, 5, 4));
	card.deckCard.push_back(Card(0, "Archidemon", 5, 7, 4, 4));
	card.deckCard.push_back(Card(0, "Cardinal", 7, 5, 5, 4));

	// PRICE = 1
	card.deckCard.push_back(Card(3, "Breuvage de vie", 1, 0, 2, 1));
	card.deckCard.push_back(Card(0, "Breuvage de force", 1, 0, 2, 1));
	card.deckCard.push_back(Card(2, "Breuvage de mana", 1, 0, 2, 1));
	card.deckCard.push_back(Card(0, "Breuvage de bouclier", 1, 0, 2, 1));
	card.deckCard.push_back(Card(3, "Breuvage de degats", 1, 0, 2, 1));

	// PRICE = 2
	card.deckCard.push_back(Card(3, "Fiole de vie", 2, 0, 3, 2));
	card.deckCard.push_back(Card(0, "Fiole de force", 2, 0, 3, 2));
	card.deckCard.push_back(Card(2, "Fiole de mana", 2, 0, 3, 2));
	card.deckCard.push_back(Card(0, "Fiole de bouclier", 2, 0, 3, 2));
	card.deckCard.push_back(Card(3, "Fiole de degats", 2, 0, 3, 2));

	// PRICE = 3
	card.deckCard.push_back(Card(3, "Potion de vie", 3, 0, 4, 3));
	card.deckCard.push_back(Card(0, "Potion de force", 3, 0, 4, 3));
	card.deckCard.push_back(Card(2, "Potion de mana", 3, 0, 4, 3));
	card.deckCard.push_back(Card(0, "Potion de bouclier", 3, 0, 4, 3));
	card.deckCard.push_back(Card(3, "Potion de degats", 3, 0, 4, 3));

	// PRICE = 4
	card.deckCard.push_back(Card(3, "Remede de vie", 4, 0, 5, 4));
	card.deckCard.push_back(Card(0, "Remede de force", 4, 0, 5, 4));
	card.deckCard.push_back(Card(2, "Remede de mana", 4, 0, 5, 4));
	card.deckCard.push_back(Card(0, "Remede de bouclier", 4, 0, 5, 4));
	card.deckCard.push_back(Card(3, "Remede de degats", 4, 0, 5, 4));

	// PRICE = 5
	card.deckCard.push_back(Card(3, "Elixir de vie", 5, 0, 6, 5));
	card.deckCard.push_back(Card(0, "Elixir de force", 5, 0, 6, 5));
	card.deckCard.push_back(Card(2, "Elixir de mana", 5, 0, 6, 5));
	card.deckCard.push_back(Card(0, "Elixir de bouclier", 5, 0, 6, 5));
	card.deckCard.push_back(Card(3, "Elixir de degats", 5, 0, 6, 5));

	// PRICE = 4
	card.deckCard.push_back(Card(4, "Demi-Dieu", 11, 8, 8, 4));
	card.deckCard.push_back(Card(4, "Pape", 10, 8, 7, 4));
	card.deckCard.push_back(Card(4, "Roi", 10, 9, 7, 4));
	card.deckCard.push_back(Card(4, "Roi Demon", 9, 10, 8, 4));
	card.deckCard.push_back(Card(4, "Terreur", 9, 9, 7, 4));
	card.deckCard.push_back(Card(4, "Supra-Entite", 11, 10, 8, 4));
	
	// PRICE = 5
	card.deckCard.push_back(Card(4, "Dieu", 14, 10, 10, 5));
	card.deckCard.push_back(Card(4, "Saint", 12, 10, 9, 5));
	card.deckCard.push_back(Card(4, "Empereur", 11, 10, 9, 5));
	card.deckCard.push_back(Card(4, "Satan", 12, 14, 10, 5));
	card.deckCard.push_back(Card(4, "Tyran", 11, 12, 10, 5));
	card.deckCard.push_back(Card(4, "Entite Supreme", 12, 13, 10, 5));

	return card.deckCard;
}

int Card::getCardLife(){
	return life;
}

int Card::getCardAttack(){
	return attack;
}

void Card::setCardLife(int card_life){
	life = card_life;
}