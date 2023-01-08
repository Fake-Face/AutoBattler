#include "Player.hpp"

Player::Player(int health, std::string name, bool alive, int gold){
    this->health = health;
    this->player_name = name;
    this->alive = alive;
    this->gold = gold;
}

void Player::printAttr(){
    std::cout<<health<<std::endl;
    std::cout<<player_name<<std::endl;
    std::cout<<(true ? "true" :"false")<<std::endl;
    std::cout<<gold<<std::endl;
}

void Player::display(){
    std::cout<<player_name<<":"<<health<<"PV,"<<mana<<"mana"<<hand.size()<<" cartes"<<"\n";
}