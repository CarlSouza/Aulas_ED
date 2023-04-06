//leia uma string e impra ela de traz pra frente


#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;


bool is_prime(int N)
{
    for (int i=2; i<=N ;i++)
        if(N%i!=0){
            return true;
        }else 
        {
            return false;
        }
}
// não consegui imprimir apenas uma vez!!!
int main ()
{
    int iNum,primo;
    cin>>iNum;
    primo=is_prime(iNum);
    if (primo==true)
    {
        cout<<iNum<< " é primo !";
    }
    else {
        cout<<iNum<<" não é primo !!";
    }
    
    return 0;
}
