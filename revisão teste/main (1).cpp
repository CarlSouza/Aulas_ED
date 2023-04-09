// tempo de jogo:

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;

    
int main() 
{
  float fA,fB,fC;
  float fx1,fx2,fDelta;
  float frealPart;
  float fimaPart;
  cout<<"Digite os coeficientes da equação de 2° grau "<<endl;
  cin>>fA>>fB>>fC;
  cout<<"Os coeficientes são a= "<<fA<<" b= "<<fB<<" c="<<fC;
  cout<<"As raízes são :"<<endl;
  fDelta=fB*fB-4*fA*fC;
  if(fDelta<0)
  {
         frealPart = -fB / (2 * fA);
         fimaPart = sqrt(-fDelta) / (2 * fA);
        
         cout << "As raizes sao: " << frealPart << " + " << fimaPart << "i e "
                  << frealPart << " - " << fimaPart << "i" << endl;
  } else {
    fx1=(-fB+sqrt(fDelta))/(2*fA)  ;
    fx2=(-fB-sqrt(fDelta))/(2*fA)  ;
    
  }
  cout<<fx1<<" ,"<<fx2;
  return 0;
}