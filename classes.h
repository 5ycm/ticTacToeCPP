#include <string>
#include <iostream>
#include <array>
#include <string>
#include <random>
#include <algorithm>

class Board{

    public:
    std::string arr[3][3];
    void cmpMove();
    void perMove();
    void print_board();
    int checkWin(std::string s);
    Board(){
        for(int i = 0; i < 3 ;i++){
        for(int j = 0; j< 3; j++){
            arr[i][j] = " ";
        }
    }
    }
    
    
    



};