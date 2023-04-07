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

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << is_prime(n) << std::endl;
    return 0;
}
