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

int main()
{
    
    //Variável: referência direta para um valor( conteúdo de uma área de memória)
    //Ponteiro: referência indireta para um valor
    
    //Declarar um ponteiro:
    
    //int* ptrInt=0;// é importante inicializar ponteiro(colocar valor)
    //int* prt=NULL;// antigamente
    int* ptrInt=nullptr; // atualmente 
    
    cout<<"PTR "<<ptrInt<<endl;
    cout<<"Endereço de PTR"<<&ptrInt<<endl;
    cout<<"=================="<<endl;
    
   int iNumMagico=42;
   cout<<"Endereço de iNumMagico "<<&iNumMagico<<endl;
   
   // endereço de iNumMagico x Ponteiro
   ptrInt=&iNumMagico;
   cout<<"PTR "<<ptrInt<<endl;
   cout<<"=================="<<endl;
   
   // tamanhos de tipos:
   
   cout<<"Tamanho de Tipos: "<<endl;
   cout<<"Tamanho de char: "<<sizeof(char)<<endl;
   cout<<"Tamanho de int: "<<sizeof(int)<<endl;
   cout<<"Tamanho de double: "<<sizeof(double)<<endl;
   cout<<"=================="<<endl;
   
    // tamanhos de  Ponteiros tipos:
   
   cout<<"Tamanho de Ponteiros de Tipos: "<<endl;
   cout<<"Tamanho de char*: "<<sizeof(char*)<<endl;
   cout<<"Tamanho de int*: "<<sizeof(int*)<<endl;
   cout<<"Tamanho de double*: "<<sizeof(double*)<<endl;
   cout<<"=================="<<endl;
   
   // operador unario : deferenciar...corta caminho
   cout<<"PTR "<<ptrInt<<endl;
    cout<<"Valor de PTR"<<*ptrInt<<endl;
    cout<<"=================="<<endl;
   
    return 0;
}