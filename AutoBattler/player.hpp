#pragma once
#include <iostream>
#include "card.hpp"

class Player {
private:
    std::string player_name;
    bool alive;
    int currentMana;
    int maxMana;
    int life;

public:
    int currentGold;
    int maxGold;
    //Card handDeck[5];
    
    Player(int l, std::string name);
    ~Player();

    void printAttr();

    //Setter
    void changeGold(int gold);
    void changeName(std::string name);

    //Getter
    int getGold();
    int getLife();
    int getMana();

};

