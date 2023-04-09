// tempo de jogo:

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//o pedra-papel-tesoura-lagarto-Spock


// criar um função que determinar o vencedor
int jogada(string jog1, string jog2) {
    if (jog1 == "tesoura" && jog2 == "papel") {
        return 1;
    } else if (jog1 == "papel" && jog2 == "pedra") {
        return 1;
    } else if (jog1 == "pedra" && jog2 == "lagarto") {
        return 1;
    } else if (jog1 == "lagarto" && jog2 == "Spock") {
        return 1;
    } else if (jog1 == "Spock" && jog2 == "tesoura") {
        return 1;
    } else if (jog1 == "tesoura" && jog2 == "lagarto") {
        return 1;
    } else if (jog1 == "lagarto" && jog2 == "papel") {
        return 1;
    } else if (jog1 == "papel" && jog2 == "Spock") {
        return 1;
    } else if (jog1 == "Spock" && jog2 == "pedra") {
        return 1;
    } else if (jog1 == "pedra" && jog2 == "tesoura") {
        return 1;
    } else if (jog1 == jog2) {
        return 0;
    } else {
        return 2;
    }
}
//função dentro de um loop para uma melhor de 3:

int main() {
    int placar1 = 0;
    int placar2 = 0;
    int vencedor = 0;

    while (placar1 < 2 && placar2 < 2) {
        string jog1, jog2;
        cin >> jog1 >> jog2;

        int resultado = jogada(jog1, jog2);

        if (resultado == 1) {
            placar1++;
            cout << "Primeiro jogador venceu a jogada!\n";
        } else if (resultado == 2) {
            placar2++;
            cout << "Segundo jogador venceu a jogada!\n";
        } else {
            cout << "Empate!\n";
        }

        cout << "Placar: " << placar1 << " x " << placar2 << "\n";
    }

    if (placar1 == 2) {
        vencedor = 1;
    } else {
        vencedor = 2;
    }

    cout << "Bazinga! O jogador " << vencedor << " ganhou!\n";

    return 0;
}
