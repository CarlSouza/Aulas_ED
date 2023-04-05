#Funções recursivas  , series de Finocci e fatorial
#include <iostream>

using  std::cin;
using  std::cout;
using  std::endl;
using  std::string;


int fatorial(int);
int fibonacci(int);

void contador(int iNum, int iCont=0); 
 
int main ()
{
    contador(10);
    cout<<"================================="<<endl;
    
    int n,fat;
    cin>>n;
    fat=fatorial(n);
    
    cout<<"O fatorial de "<<n<< " é " <<fat<< endl;
    
    int x,fib;
    cin>>x;
    fib=fibonacci(4);
    cout<<"O "<<x<<" ésimo numero de fibonacci é "<<fib;
    
    cout<<"================================="<<endl;
    return 0;
    
}
//sem recursão
/*void contador (int iNum)
{
 for (int i=0;i<=iNum;i++)
 {
   cout<<i<<endl;    
 }*/
 
 void contador (int iNum,int iCont)
 {
    cout<<iCont<<endl;
    if (iNum>iCont)
    {
        contador(iNum,++iCont);
    } 
 }
 
 int fatorial(int iNum)
 {
    if (iNum==0){ 
    return 1;
        
    }
    return iNum*fatorial(iNum-1) ;  
 }
 
int fibonacci(int iNum)
{
    if (iNum==0){
        return 1;
    }
    return fatorial(iNum-1)+fatorial(iNum-2);
        
        
    }
