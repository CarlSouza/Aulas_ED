// Arimetica de ponteiros
#include<iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;


int main ()
{
    int vet[6]={1,23,-78,900,234};
    int *ptr;
    ptr =vet; //prt =&vet
    cout<<ptr<<endl;
    
    cout<<ptr++<<endl;//ptr+1
    cout<<*ptr<<endl; // proximo elemento do vetor 23
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;//900
    
    // todos os elementos do vetor:
    cout<<"{ ";
    for(int i=0;i<=5;i++)
    {
      cout<<vet[i]<<" ,"    <<"Seu endereço é "<<&vet[i] <<endl;
      cout<<*(ptr+i)<< "Seu endereço é "<<ptr[i] << endl;
    }
    cout<<" } "<<endl;
    
    cout<<"Endereços com aritmetica de Ponteiros "<<endl;
    cout<<"Valor obtido em prt"<<ptr<<endl;
    cout<<"(prt+0) endereço "<<(ptr+0)<<" Valor: "<<*(ptr +0)<<endl;
    cout<<"(prt+1) endereço "<<(ptr+1)<<" Valor: "<<*(ptr +1)<<endl;
     // desloca uma unidade de tamanho (4) 
    cout<<"(prt+2) endereço "<<(ptr+2)<<" Valor: "<<*(ptr +2)<<endl;
    // desloca duas unidadse de tamanho (8) 
    cout<<"(prt+3) endereço "<<(ptr+3)<<" Valor: "<<*(ptr +3)<<endl;
    cout<<"(prt+4) endereço "<<(ptr+4)<<" Valor: "<<*(ptr +4)<<endl;
    cout<<"Valor contido em ptr: "<<ptr<<endl;
    
    
    return 0;
}