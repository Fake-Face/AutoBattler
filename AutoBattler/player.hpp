#pragma once
#include <iostream>

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
    Player(int l, std::string name);
    //~Player();

    void printAttr();
};

