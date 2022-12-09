#pragma once
#include <iostream>

class Player {
private:
    std::string player_name;
    bool alive;
    int currentMana;
    int maxGold;
    int maxMana;
    int life;

public:
    int currentGold;
    Player(int l, std::string name, bool alive, int gold);
    //~Player();

    void printAttr();
};

