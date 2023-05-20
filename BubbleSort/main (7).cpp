#include <iostream>
#include<chrono>

using std::cout;
using std::cin;
using std::endl;
using std::string;
//using std::chrono;

//BubbleSort ordem crescente :
//Comparamos de 2 em 2
// criar uma função que imprime a lista
void printArray(int array[],int ilen)
{
    for(int i=0;i< ilen;i++)
    {cout<<array[i]<< " ";
        
    }
}

// troca dois elementos de posição
void swapValue(int& iVal1,int& iVal2)
{
    int itemp=iVal1;
    iVal1=iVal2;
    iVal2=itemp;
}

//Bubble short
void BubbleSort(int arry[],int len)
{
   for(int j=0;j< len;j++)// percorre a lista
     for(int i=0;i< len;i++)// repete o processo (n-1) vezes
     {
        if (arry[i]>=arry[i+1]){ // se o elemento é maior do que o da esqueda entaõ trocamos
             swapValue(arry[i],arry[i+1]);
        }
        
     }
}

//Super BubbleSort: otimzada

void SuperBubbleSort(int arr[],int len)
{
  
  bool bUnorded=false;
  
  for (int j=0;j<=len-1; j++)
  {
      bUnorded=false;
      //Cada vez que passamos pela arry, temos a garantida de que o último é o maior, logo otimizamos
         for(int i=0;i<=len-1 ;i++)
          { 
              if(arr[i]>=arr[i+1])
              {
                swapValue(arr[i],arr[i+1]);
                bUnorded=true;
                  
              }
         }
         if (bUnorded==false) break;

}
}


int main()
{
    //primeira versão
    int arriNumber[]={4,9,2,1,7,8};
    int arrSize = sizeof(arriNumber)/sizeof(arriNumber[0]);
    
    int arri2[]={3,7,666,42,57};
    int arri2Size=sizeof(arri2)/sizeof(arri2);
    
    cout<<"vamos ver a lista original"<< endl;
    printArray(arriNumber,arrSize);
    
    cout<<"Lista ordenada " ;
    BubbleSort(arriNumber,arrSize);
    printArray(arriNumber,arrSize);
    
    //segunda versão
    
    int arriNum[]={7,6,666,42};
    int size=sizeof(arriNum)/sizeof(arriNum[0]);
    
    cout<<"Antes"<<endl;
    printArray(arriNum,size);
    cout<<"Depois"<<endl ;
    BubbleSort(arriNum,size);
    printArray(arriNum,size);
   
    
    
    return 0;
}    
    