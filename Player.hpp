#pragma once
#include <iostream>
#include "Cards.hpp"

class Player{
    private:
        std::string player_name;
        bool alive;
        int mana;
        int gold;
        int maxGold;
        int maxMana;
        int health;
        std::vector<Cards> hand;
        std::vector<Cards> deck;

    public:
        Player(int l,std::string name,bool alive,int gold);
        //~Player();
        //getters
        void printAttr();
        int getHealth(){return health;}
        int getMana(){return mana;}
        std::string getName(){return player_name;}
        std::vector<Cards> getCards(){return hand;}

        //setters
        void setHealth(int h){health = h;}
        void setMana(int m){mana = m;}
        void addCard(Cards c){ hand.push_back(c);}
        void display();

};


