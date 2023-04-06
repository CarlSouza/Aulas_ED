/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void printArray(int arr[], int size) {
    cout << "{ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << " , ";
        }
    }
    cout << " }" << endl;
}

int main() {
    int arr[] = {1, 1, 2, 3, 5, 8, 13};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);

    return 0;
}
