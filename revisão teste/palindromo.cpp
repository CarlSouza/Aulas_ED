//Palindromo  

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(string word) {
    int len = word.length();
    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string palavra;
    cout << "digite aqui sua palavra ";
    cin >> palavra;
    if (isPalindrome(palavra)) //default já pé true
    {
        cout << palavra << " é um palindromo" << endl;
    } else {
        cout << palavra << " não é palindrome." << endl;
    }
    return 0;
}

 





