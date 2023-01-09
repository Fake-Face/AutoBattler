#pragma once
#include "game.hpp"

Game::Game(std::string name)
{
    player1->changeName(name);
    player2->changeName("Bot");
    economy = Economy();
    render = Render();
    round = 0;
}

Game::~Game()
{
    player1->~Player();
    player2->~Player();
    economy.~Economy();
    render.~Render();
}

//Distribution 5 cartes a chaque
void Game::startGame(Player *p1, Player *bot, Card card)
{
    Deck *d = new Deck(card.makeDeckCard(card));
    
    d->shuffle();
    
    for(int i=0; i<10; i++){
        if(i%2 == 0){
            p1->handDeck.push_back(d->draw());
        }
        else{
            bot->handDeck.push_back(d->draw());
        }
    }
}

//Choix carte à poser sur le board
void handToBoard(Player *p, int carte_A, int carte_B, int carte_C)
{
    p->boardDeck.push_back(p->handDeck[carte_A]);
    p->boardDeck.push_back(p->handDeck[carte_B]);
    p->boardDeck.push_back(p->handDeck[carte_C]);
}

//Fonction de combat
int fight(Player *p, Player *bot)
{
    srand(time(NULL));
    int random = rand() % 3;

    for(int i=0; i<3; i++){
        Card c_player = p->boardDeck[i];
        Card c_bot = bot->boardDeck[random];
        
        c_bot.setCardLife(c_bot.getCardLife() - c_player.getCardAttack());   
    }

    for(int i=0; i<3; i++){
        Card c_bot = bot->boardDeck[i];
        Card c_player = p->boardDeck[random];
        
        c_player.setCardLife(c_player.getCardLife() - c_bot.getCardAttack());   
    }

    for(int i=0; i<3; i++){
        if(p->boardDeck[i].getCardLife() <= 0){
            p->boardDeck.erase(p->boardDeck.begin() + i);
        }
        if(bot->boardDeck[i].getCardLife() <= 0){
            bot->boardDeck.erase(bot->boardDeck.begin() + i);
        }
    }

    if(!p->boardDeck.empty() && !bot->boardDeck.empty()){
        return 0;
    }
    else if(p->boardDeck.empty()){
        p->changeLife(bot->boardDeck.size()*3);
        return 1;
    }
    else if(bot->boardDeck.empty()){
        bot->changeLife(p->boardDeck.size()*3);
        return 2;
    }
    else if(p->boardDeck.empty() && bot->boardDeck.empty()){
        return 3;
    }
}

void Game::endRound(int value, Player *p, Player *bot)
{
    if(value == 1){
        bot->score++;
    }
    else if(value == 2){
        p->score++;
    }
    else if(value == 3){
        p->score++;
        bot->score++;
    }
    round++;
}