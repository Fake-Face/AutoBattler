#pragma once
#include "game.hpp"

Game::Game(std::string name)
{
    player1->changeName(name);
    player2->changeName("Bot");
    economy = Economy();
    render = Render();
}

Game::~Game()
{
    player1->~Player();
    player2->~Player();
    economy.~Economy();
    render.~Render();
}

//Distribution 5 cartes a chaque
void Game::startGame(Card card)
{
    Deck *d = new Deck(card.makeDeckCard(card));
    
    d->shuffle();
    
    for(int i=0; i<10; i++){
        if(i%2 == 0){
            handPlayer.push_back(d->draw());
        }
        else{
            handBot.push_back(d->draw());
        }
    }
}

//Choix carte à poser sur le board
void handToBoard(Player p, int carte_A, int carte_B, int carte_C)
{

}