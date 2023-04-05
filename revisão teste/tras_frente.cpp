//leia uma string e impra ela de traz pra frente


#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;



int main ()
{
    int n;
    string strPalavraMagica;
    string strNovaPalavra;
    
    cout<<"Escreva uma palavra mágica "<<endl;
    cin>>strPalavraMagica;
    n=strPalavraMagica.length();
    cout<<n<<endl;
    
    cout<<"A palava invertida é ";
    for(int i=n;i>=0;i--)
    {
      strNovaPalavra[n-i]==strPalavraMagica[i]; 
      cout<<strPalavraMagica[i];
      cout<<strNovaPalavra[n-i];
    }
    //for (int i= length ())
    
    
 
    return 0;
}
