#include <iostream>
#include <string> // incluir este cabeçalho

using namespace std;

int find_ones(int n) {
    int num = 1;
    int num_digits = 1;
    while (num % n != 0) {
        num = (num * 10 + 1) % n;
        num_digits++;
    }
    return num_digits;
}

int main() {
    int n;
    cin >> n;
    cout << find_ones(n) << endl;
    return 0;
}
