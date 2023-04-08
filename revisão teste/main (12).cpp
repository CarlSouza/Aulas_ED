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


int main(){
    
     //Caracter
    char cValue = 'E';
    cout << "cValue: " << cValue << "\n Tamanho cValue: " << sizeof(cValue) << endl;
    cout << "(int) cValue: " << int(cValue) << endl;

    char cPalavraPreferida1 = 77;
    char cPalavraPreferida2 = 0x41;
    char cPalavraPreferida3 = 0b1110000;


    cout<<"primeira palavra "<<endl;
    cout << cValue;
    cout << cPalavraPreferida1;
    cout << cPalavraPreferida2;
    cout << cPalavraPreferida3<<endl;
    
    cout<<"segunda palavra "<<endl;
    char cPalavra1='A';
    char cPalavra2=0x4D;
    char cPalavra3=79;
    char cPalavra4=0b1010010;
    
    cout<<cPalavra1<<cPalavra2<<cPalavra3<<cPalavra4<<endl;
    
    
    cout<<"terceira  palavra "<<endl;
    char cLetra1=01101101;
    cout<<cLetra1;
    
    


    return 0;
}
