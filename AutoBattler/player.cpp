#include "player.hpp"

Player::Player(int l, std::string name, bool alive, int gold) {
    life = l;
    player_name = name;
    alive = alive;
    currentGold = gold;
}

void Player::printAttr() {
    std::cout << life << std::endl;
    std::cout << player_name << std::endl;
    std::cout << (true ? "true" : "false") << std::endl;
    std::cout << currentGold << std::endl;
}