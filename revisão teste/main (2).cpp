// tempo de jogo:

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//contadores e acumuladores   part1


int main() 
{

  int iContador=1;
  int iSoma=0;
  for(int i=0;i<=100;i++)
  {
    if(i%2==0){
        iContador++;
        iSoma=iSoma+i;
        cout<<i<<endl;
    }     
  }
  cout<<"Esse programa se repetiu "<<iContador<<" vezes "<<endl;
          cout<<"A soma deles é "<<iSoma<<endl;
          
      
          
  cout<<"======================"<<endl;
  cout<<"Soma da pa co N termos ";

  int contador=1;
  int N=5;
  int soma=0;
  //primeiro termo
  
  for(int i=0;i<=N;i+=2)
  {
      soma+=i;
      
      cout<<i<<"+";
      contador++;
  }  cout<<"0 =";
  cout<<soma<<" , ";
  cout<<" Essa PA tem "<<contador <<" Termos" ;
  

  
  return 0;
}