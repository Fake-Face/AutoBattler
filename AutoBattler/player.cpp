#include "player.hpp"

Player::Player()
{
    life = 30;
    life>0 ? alive = true : alive = false;
    currentGold = 3;
    maxGold = 99;
    currentMana = 20;
}

Player::~Player()
{
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

//Setter
void Player::changeGold(int gold) {
    currentGold += gold;
}
void Player::changeName(std::string name) {
    player_name = name;
}
void Player::changeLife(int p_life) {
    life -= p_life;
}

//Getter
int Player::getGold() {
    return currentGold;
}
int Player::getLife() {
    return life;
}
int Player::getMana() {
    return currentMana;
}
std::string Player::getName() {
    return player_name;
}