//ponteiros:pointers

#include <iostream>

using  std::cout;
using  std::cin;
using  std::endl;
using  std::string;
// ponteiros

//Revisão:
//Build-in Array(C-style) vs Array/Vector
// Vector que for fazer programa  
//Array para estrutra de Dados e algortimos
//C-style x string

int cubo(int* );

//int somaVetor(const int[],const size_t); não fazer

int somaVetor(const int*,const size_t);


int main()
{
    
    int iValor=3;
    int iResultado=0;
    
    iResultado=cubo(&iValor);
    
    cout<<"Resultado "<<iResultado<<endl;
    cout<<"=================="<<endl;
    
    // o nome de um vetor é como se fosse um ponteiro constante para o primeiro elemento
    int arriValores[3]={0,1,2};
    iResultado=somaVetor(arriValores,3);
    
    
    return 0;
}

int cubo(int*ptrNum )
{
   return *ptrNum* *ptrNum* *ptrNum;    
}

/*int somaVetor(const int valores[],const size_t tamVetor)
{
    return -42;
}*/ // não podemos fazer isso


int somaVetor(const int* valores,const size_t tamVetor)
{
   return -42;
}

