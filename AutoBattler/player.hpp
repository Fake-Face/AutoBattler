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
    int score;
    std::vector<Card> handDeck;
    std::vector<Card> boardDeck;
    
    Player();
    ~Player();

    void printAttr();

    //Setter
    void changeGold(int gold);
    void changeName(std::string name);
    void changeLife(int life);

    //Getter
    int getGold();
    int getLife();
    int getMana();
    std::string getName();
};

