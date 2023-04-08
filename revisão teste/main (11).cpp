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

//função do item anterior:
bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
//função atual
int count_primes(int n) {
    if (n == 1) {
        return 0;
    } else {
        int count = count_primes(n - 1);
        if (is_prime(n)) {
            count++;
        }
        return count;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << count_primes(n) << std::endl;
    return 0;
}
