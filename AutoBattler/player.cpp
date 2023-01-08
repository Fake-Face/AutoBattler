#include "player.hpp"

Player::Player(int l, std::string name) {
    life = l;
    player_name = name;
    l>0 ? alive = true : alive = false;
    currentGold = 5;
    maxGold = 99;
    currentMana = 20;
}

void Player::printAttr() {
    printf("\n");
    printf("--------------------\n");
    printf("Player name: %s \n", player_name.c_str());
    printf("Player life: %d \n", life);
    printf("Player gold: %d \n", currentGold);
    printf("--------------------\n");
    printf("\n");
}

void Player::changeGold(int gold) {
    currentGold += gold;
}

int Player::getGold() {
    return currentGold;
}
int Player::getLife() {
    return life;
}
int Player::getMana() {
    return currentMana;
}