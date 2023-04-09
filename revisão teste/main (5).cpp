// tempo de jogo:

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;


// como imprimir tabuleiros 


void print_game1(char game[]) {
    for (int i = 0; i < 12; i++) {
        std::cout << game[i] << " ";
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }
}


void print_game2(char game[]) {
    for (int i = 0; i < 12; i++) {
        std::cout << game[i] << " ";
        if ((i + 1) % 4 == 0) {
            cout << endl;
        }
    }
}


void print_games(int num[]){
    for(int i=0;i<=25;i++){
        cout<<num[i]<<"0";
        if((i+1)%5==0){
            cout<<endl;
        }
    }
}
int main() {
    char game[12] = {'c','a','r','l','o','s',' ','E','M','A','p',' '};
    int num[25]={1,2,3,4,5,6,7,5,7,8,9,3,4,5,6,7,8,3,67,7,6,8,7,0,9};
    print_game1(game);
    print_game2(game);
    print_games(num);
   
    return 0;
}
