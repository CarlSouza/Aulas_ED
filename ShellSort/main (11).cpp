/* shellSort em uma array:
Divide a lista em dois e compara os elementos correspondentes em cada metade
Depois divide novamente por 2, e por 2 sempre trocando , até chegar no final*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//shellSort

int ShellSort(int arri[],int iLenght){
    
    for(int meio=iLenght/2; meio>0 ;meio/=2 )
    {
        /* Realize uma ordenação por inserção com espaçamento para este tamanho de espaçamento.
        Os primeiros elementos do espaçamento a[0..meio-1] já estão ordenados com espaçamento
        continue adicionando mais um elemento até que o arranjo inteiro esteja
        ordenado com espaçamento.*/
        
        for (int i=meio;i< iLenght;i++){
            
            /* Adiciona a[i] aos elementos que já foram ordenados com o espaçamento
            Salva a[i] em temp e cria um "buraco" na posição */
           
            int iTemp=arri[i];
            
            /*Troque os elementos anteriores já ordenados com o espaçamento até encontrar a posição 
            correta para a*/
            for (int j=i;j>= meio && arri[j-meio]>iTemp;j=j-meio){
                arri[j]=arri[j-meio];
                
            //Coloque a variavel temporaria no local
            arri[j]=iTemp;
            }
            
        }
        
    }return 0;
    
}

//vamos imprimir a lista
void printArray(int arri[],int ilenght){
    cout<<"{";
    for(int i=0;i<=ilenght;i++){
        cout<<arri[i]<< " ";
    }cout<<"}";
}

int main()
{
    // testanto
    int arri1[]={2,5,1,3,3,7,9,5,4,1};
    int Size1=sizeof(arri1)/sizeof(arri1[0]);
    
    printArray(arri1,Size1);
    cout<<"================";
    cout<<"Hello World";

    return 0;
}
