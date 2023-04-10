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
    
    int iNum1=42;
    int iNum2=666;
    
    //Ponteiro constante, não é nao possivel muda-lo
    int* const ptrNum1=&iNum1;
    *ptrNum1=7;
    //ptrNum1=&iNum2;
    
    //Ponteiro para uma constante
    const int*ptrNum2=&iNum2;
    ptrNum2=&iNum1;// mudando a direção do ponteiro
    
    const int* const ptrNum3=&iNum1;
    //ptrNum3=&iNum2;
    
    cout<<"PTR1 "<<ptrNum1<<endl;
    cout<<"Valor de PTR1"<<&ptrNum1<<endl;//deferencia
    cout<<"=================="<<endl;
    
    cout<<"Endereço de iNum1"<<&iNum1<<endl;
    cout<<"PTR2 "<<ptrNum2<<endl;
    cout<<"Valor de PTR2"<<&ptrNum2<<endl;
    cout<<"=================="<<endl;
    
    cout<<"Endereço de iNum1"<<&iNum1<<endl;
    cout<<"PTR3 "<<ptrNum3<<endl;
    cout<<"Valor de iNum1 "<<iNum1<<endl;
    cout<<"Valor de PTR3"<<*ptrNum3<<endl;
    cout<<"=================="<<endl;
    
    return 0;
}