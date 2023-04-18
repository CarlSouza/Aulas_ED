// Lstruct : criar tipos part3
//vetores e ponteiros


#include<iostream>
// dados do aluno ,matricula, nome nota proximo
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main ()
{
    int *p;
    int vetor[10];
    p=&vetor[0];
    *p=10;// desferrenciamento, colo o valor 10 na posição 0 do vetor
    cout<<p<<endl;
    
    p=&vetor[1];
    *p=20;
    cout<<p<<endl;
    
    *(p+=1);
    *p=30;// coloca 30 na posição 2 do vetor
    cout<<vetor[0]<<" "<<vetor[1]<<" "<<vetor[2]<<endl;
    cout<<p<<endl;// e acumula os tamanhos 
    
    return 0;
}
