#pragma once
#include <iostream>
#include "Cards.hpp"

class Player{
    private:
        std::string player_name;
        bool alive;
        int currentMana;
        int currentGold;
        int maxGold;
        int maxMana;
        int life;
        Cards cards;
    public:
        Player(int l,std::string name,bool alive,int gold);
        //~Player();

        void printAttr();
};


