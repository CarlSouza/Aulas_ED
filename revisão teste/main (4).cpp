// tempo de jogo:

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;


// criar uma função que determinar o vencedor

// imprime o tabuleiro:
void print_game(char game[]) {
    for (int i = 0; i < 9; i++) {// tamanhdo do tabuleiro
        cout << game[i] << " ";
        if ((i + 1) % 3 == 0) {// quantidade de linhas
           cout <<endl;
        }
    }
}
//confere o vencedor
bool check_win(char game[], char symbol) {
    // por linhas
    for (int i = 0; i < 9; i += 3) {
        if (game[i] == symbol && game[i + 1] == symbol && game[i + 2] == symbol) {
            return true;
        }
    }
    // por colunas
    for (int i = 0; i < 3; i++) {
        if (game[i] == symbol && game[i + 3] == symbol && game[i + 6] == symbol) {
            return true;
        }
    }
    // por diagonais
    if (game[0] == symbol && game[4] == symbol && game[8] == symbol) {
        return true;
    }
    if (game[2] == symbol && game[4] == symbol && game[6] == symbol) {
        return true;
    }
    return false;
}
//move a jogada
void make_move(char game[], int index, char symbol) {
    if (game[index] != ' ') {
        cout << "Jogada inválida!" << endl;
        return;
    }
    game[index] = symbol;
    print_game(game);
    if (check_win(game, symbol)) {
        cout << "Parabéns! O jogador '" << symbol << "' venceu!" << endl;
    }
}
// teste da funcao
int main() {
    char game[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    print_game(game);
    make_move(game, 4, 'X');
    make_move(game, 4, 'O');
    make_move(game, 0, 'X');
    make_move(game, 8, 'X');
    return 0;
}
