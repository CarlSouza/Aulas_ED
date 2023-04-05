/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// faça um função que retorne o modulo de um numero, sem usar bibliotecas

double modulo(double Num )
{
  if (Num>=0){
      return Num;
  }else 
  {
      return Num*(-1);    
  }    
}

int main()
{
    
    double dX;
    cout<< " escolha um numero bonito";
    cin>>dX;
    cout<<" o valor absoluto de "<<dX<<" é "<<modulo(dX); 
    

    return 0;
}
