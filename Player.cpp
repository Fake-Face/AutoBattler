#include "Player.hpp"

Player::Player(int l, std::string name, bool alive){
    life = l;
    player_name = name;
    alive = alive;
}

void Player::printAttr(){
    std::cout<<life<<std::endl;
    std::cout<<player_name<<std::endl;
    std::cout<<(true ? "true" :"false")<<std::endl;
}