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
    Card handDeck[5];
    
    Player();
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

