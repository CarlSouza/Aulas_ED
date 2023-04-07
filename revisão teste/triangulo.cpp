#include <iostream>
#include <string> // incluir este cabeçalho

using namespace std;

int main (){
    
  int iN;
  cin>>iN;
  //imprime o triangulo
  cout<<"seu triângulo terá : "<<iN<<" linhas"<<endl;
  
  for (int i=0;i<=iN;i++)//colunas
  {
    for (int j=0;j<=i;j++)//linhas
    {
        cout<<"#" ;
    } cout<<endl;
    
  }
  // imprime o triangulo invertido:
   for (int i=iN;i>=0;i--)//colunas
  {
    for (int j=i-1;j>=0;j--)//linhas
    {
        cout<<"#" ;
    } cout<<endl;
    
  }
  
  return 0;
}
