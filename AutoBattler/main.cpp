#include <string>
#include "economy.hpp"
#include "render.hpp"
#include "player.hpp"

int main()
{
    std::string name;
    std::cout<<"Choisissez le nom de votre joueur"<<"\n";
    std::cin>>name;
    Player *p1 = new Player(30, name);
    Player *p2 = new Player(30, "Bot");
    Economy e = Economy();
    Render r = Render();
    Card c = Card(0, "carte", 10, 3, 2, 3);
    
    int round = 0;
    int choice = 0;
/*    while(round <= 20){
        printf("Round %d\n", round);
        e.EarnByRound(p1, round); 
        e.EarnByRound(p2, round);
    //    r.printPlayerStats(p1, p2);
        round++;
    }*/

    while(p1->getLife() != 0 || p2->getLife() != 0){
        std::cout<< "Bot"<<"\n";
        std::cout<< "-------------"<<"\n";
        std::cout<<name<<"\n";
        std::cout<<"\n";
        //std::cout<<"Gold player 1: "<<p1->currentGold<<"\n";
      //  std::cout<<"Gold player 2: "<<p2->currentGold<<"\n";
        r.printPlayerStats(p1,p2);
        std::cout<<"Que voulez vous faire?: Piocher (1), Poser (2), Passer (3): ";
        std::cin>>choice;
        if(choice == 1){
            //piocher
        }
        else if(choice == 2){
            //attaquer
            int res;
            std::cout<<"Vous voulez poser un héros (1) ou un minion (2) ou un spell?"<<"\n";
            std::cin>>res;
            if(res == 1)
                r.printHero();
            if(res == 2)
                r.printMinion();
            if(res == 3)
                r.printSpell();
        }
        else if(choice == 3){
            //passer
        }
    }
    return 0;
}