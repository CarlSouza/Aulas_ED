// exemplos de ponteiros
#include<iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main ()
{
    // crie um variavel tipo inteiro com valor 234
    int Numero=234;
    cout<<"Valor de numero antes é "<<Numero<<endl;
    // crie um ponteiro com nome ponteiro que aponta para um tipo int
    int* Ponteiro=&Numero; // inicializar o ponteiro , outra alternativa ponteiro=Numero
    //troque o valor de Numero para 1456 usando o Ponteiro
    *Ponteiro=1456 ; // deferenciamento
    //Coloque o valor de Numero da Tela usando o Ponteiro
    cout<<"Valor de Numero agora é : "<<*Ponteiro<<endl;
    // mostre o endereço de memoria
    cout<<"O endereço de ponteiro é "<<&Ponteiro<<endl;
    // são iguais !!!
    cout<<"Valor contido em Ponteiro "<<Ponteiro<<endl;
    cout<<"O endereço de numero  é "<<&Numero<<endl;
    
    //crie outro ponteiro com nome OutroPTr;
    //Faça OutroPtr apontar para mesma variavelque ptr apontar
    int* OutroPtr=Ponteiro; // ou OutroPtr=&Numero
    
    //Usando o ponteiro some 200 ao valor contido em Numero
    *Ponteiro+=200; // ou *Ponteiro= *Ponteiro +200
    //Usando OutroPtr coloque na tela o valor de  Numero
    cout<<"O valor de Numero "<<*OutroPtr<<endl;
}