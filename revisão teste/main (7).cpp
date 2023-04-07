#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//questão anterior
void printArray(int arr[], int iN) {
    cout << "{ ";
    for (int i = 0; i < iN; i++) {
        cout << arr[i];
        if (i < iN - 1) {
            cout << ", ";
        }
    }
    cout << " }" << endl;
}


void operarArrays(int arra[], int arrb[], char charOperacao, int iN ) {
    switch (charOperacao) {
        case '+':
            for (int i = 0; i < iN; i++) {
                arra[i] += arrb[i];
            }
            break;
        case '-':
            for (int i = 0; i < iN; i++) {
                arra[i] -= arrb[i];
            }
            break;
        default:
            cout << "Operação inexistente!" << endl;
            break;
    }
}


int main() {
    int a[] = { 1, 2, 3, 4, 5 };
    int b[] = { 2, 4, 1, 2, 3 };
    operarArrays(a, b, '+', 5);
    printArray(a, 5); // { 3, 6, 4, 6, 8 }

    operarArrays(a, b, '-', 5);
    printArray(a, 5); // { 1, 2, 3, 4, 5 }

    operarArrays(a, b, '%', 5); // Operação inexistente!
    return 0;
}
