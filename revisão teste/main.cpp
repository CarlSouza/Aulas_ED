// tempo de jogo:

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

    
int main() 
{
  int iComeço,iFinal,iX;
  cout<<" que hosas o jogo começou e terminou  ?"<<endl;
  cin>>iComeço>>iFinal;
  
  iX=((iFinal-iComeço)+24)%24;
  if(iX<0)
  {
    iX=iX*(-1);    
  } 
  cout<<"O jogo Durou "<<iX<<" horas"; 
     
  return 0;
}