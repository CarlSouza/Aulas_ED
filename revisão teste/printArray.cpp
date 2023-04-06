/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void printArray(int arr[],int N)
{
   cout<<" { ";
   for (int i=0;i<=N ; i++ )
   {
       cout<<arr[i];
        if (i<=N-1)
        {
          cout<<",";    
        }
   }
   
   cout<<" }";
}


int main() {
    
    int arr1[]={9,4,5,3,2,1};
    int iN=sizeof(arr1) / sizeof(arr1[0]);//numero de elementos de um array ;
    int arr[] = {1, 1, 2, 3, 5, 8, 13};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    cout<<"\n ================="<<endl;
    
    printArray(arr1, iN);

    return 0;
}

