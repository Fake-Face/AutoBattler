#include <iostream>
#include <vector>

enum EntityType{
    SHIELDER,
    HEALER,
    ATTACKER
};

enum SType{
    HEAL_BOOSTER,
    DAMAGE_BOOSTER,
    CARD_ATTACKER,
    PLAYER_ATTACKER,
    CARD_SHIELDER,
    PLAYER_SHIELDER,
    CARD_HEALER,
    PLAYER_HEALER
};

class Cards{
    private:
        int manaCost;
        int goldCost;
        int life;
        int attack;
        std::string name;
};

class Hero : public Cards{
    EntityType type;
    std::string passive;
    std::string attackSpe;
};

class Deck: public Cards{
    private:
        std::vector <Cards> deck;
        std::vector <Cards> handdeck;
        std::vector <Cards> boarddeck;
    public:
        void shuffle();
};