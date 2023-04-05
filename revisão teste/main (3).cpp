//leia uma string e impra ela de traz pra frente


#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// is Par, insira um inteiro N, feito isso , leia todos os inteiros positivos de 1 até N e retorne os pares;

int main ()
{
    int iN;
    cin>>iN;
    
    for (int i=0;i<=iN-1;i++)
    {
        if (i%2==0)
        {
          cout<<i<<endl;     
        }
    }
    
    return 0;
}
