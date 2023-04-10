// tempo de jogo:

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::string;


// josefo :usando recursão

int josephus(int n, int k)//n-soldados ,k-esima morte
{
    if (n == 1)
        return 1;
    else
        
        return (josephus(n - 1, k) + k - 1) % n + 1;
}
 
// Dtestando a função
int main()
{
    cout << "O vencedor é  " << josephus(40, 2)<<endl;
    cout << "O vencedor é  " << josephus(11, 2)<<endl;
    cout << "O vencedor é  " << josephus(5, 2)<<endl;
    
    cout<<"=================================="<<endl;
    
    cout << "O vencedor é  " << josephus(6, 3)<<endl;
    cout << "O vencedor é  " << josephus(1234, 233)<<endl;
    return 0;
}
 
// This code is contributed by shubhamsingh10
   

