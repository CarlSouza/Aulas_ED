/*insertSort: começando do segundo [1]comparamos com o primeiro[0],se ele for menor trocamos(dependen da ordem)
 ao inserir um elemento ,comparamos com o anterior ,se ele for menor trocamos*/
#include<iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;

// imprimir uma lista:
void printList(int array[],int iLenght)
{
    cout<<"{";
    for(int i=0;i<=iLenght;i++)
    {
        cout<<array[i]<< " ,";
        /*if(i==iLenght)
        {
            cout<<array[i];
        }*/
        
    }cout<<"}";
}

// trocar elementos:
void swap (int& iVal1,int& iVal2)
{
    int iTemp=iVal1;
    iVal1=iVal2;
    iVal2=iTemp;
}

//insertSort 
void insertSort(int array[], int ilenght)
{
    //imaginemos que o vetor é separado em duas partes :à esquerda está ordenado,e à direita desordenado
    for(int j=1;j<ilenght;j++)
    {
        int iTemp=array[j];// essa variavel temporaria guarda o valor inserido
        int i=j-1;//loop de dentro, que olha para a parte já ordenada
        
        while(iTemp<array[i]&& i>=0)/* teremos dois critérios de parada
        Nosso loop quebra quando achamos um valor na parte na parte ordenada menor que o guardado
        (iTemp) ou quando chegamos no final do vetor*/
        {
            array[i+1]=array[i];
            i--;
            //Quando chegamos aqui 
            //
            //
            //
        }
        array[i+1]=iTemp;
        }
    }

int main(){
    
    
    // crie uma lista de inteiros
    int array[]={4,7,2,5,4,0};
    int arraySize=sizeof(array)/sizeof(array[0]);
    
    cout<<"Array original :" ;
    printList(array,arraySize);
    
    //Vamos ordenar
    insertSort(array,arraySize);
    cout<<"Lista ordenada :";
    printList(array,arraySize);
    
}