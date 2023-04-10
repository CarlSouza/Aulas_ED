

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
    std::cout << is_prime(n) << std::endl;// por padrão sempre retornar verdadeiro
    return 0;
}
