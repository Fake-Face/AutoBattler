#include "player.hpp"

Player::Player(int l, std::string name) {
    life = l;
    player_name = name;
    l>0 ? alive = true : alive = false;
    currentGold = 5;
    maxGold = 100;
}

void Player::printAttr() {
    printf("\n");
    std::cout << life << std::endl;
    std::cout << player_name << std::endl;
    std::cout << (true ? "true" : "false") << std::endl;
    std::cout << currentGold << std::endl;
    printf("\n");
}