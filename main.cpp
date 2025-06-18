#include "classes.h"


int main(){
    Board b;
    b.print_board();
    int moveCount = 0;
   
    std::string begin;
    int who = 0;
    std::cout << "Would you like the first move: y or n" << std::endl;
    std::cin >> begin;
    while(begin != "y" && begin!= "n"){
        std::cout << "Invalid input, try again:" << std::endl;
        std::cin >> begin;
    }
   
    if(begin == "n"){
        who = 1;
    }


    system("clear");
    std::cout << "You may type 'h' during ANY of your turns for help. enter 'q' to quit." << std::endl;
    
    while(moveCount < 10){

        //check for win
        int pWin = b.checkWin("O");
        if(pWin == 1){
            std::cout<< " You have won, great job!!" << std::endl;
            exit(1);
        }
        int cWin = b.checkWin("X");
        if(cWin == 1){
            std::cout<< "The Computer won, try again!" << std::endl;
            exit(1);
        }
        if(moveCount == 9){
            std::cout << "Nobody won! try again!" << std::endl;
            return 0;
        }



        if(who == 0){ //0 = player turn;
            b.perMove();

            who = 1;
        }
        else if(who == 1){ //1 = computer turn;
            b.cmpMove();

            who = 0;
        }
        moveCount++;
    }


    std::cout << "Nobody won! try again!" << std::endl;
    return 0;

}