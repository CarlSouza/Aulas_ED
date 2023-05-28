//Aula 20:Selection short
#include<iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;

void SelectionSort(int arri[],int iLenght)
{
    int iTemp;// variavel temporaria que guarda o valor que a gente precisa
    for (int i=0;i<iLenght;i++){ // loop externo
        for(int j=0;j<iLenght;j++){//Lopp interno
            if (arri[i]>arri[j]) //if (arri[i]<arri[j]) inverse
            {
                iTemp=arri[j];//guarda e troca a variavel do loop de dentro com o de fora
                arri[j]=arri[i];
                arri[i]=iTemp;
                /*
                iTemp=arri[i];//guarda e troca a variavel do loop de dentro com o de fora
                arri[i]=arri[j];
                arri[j]=iTemp;
                */
            }
        }
    }
}

void InverseSelectionSort(int arri[],int iLenght)
{
    int iTemp;// variavel temporaria que guarda o valor que a gente precisa
    for (int i=0;i<iLenght;i++){ // loop externo
        for(int j=0;j<iLenght;j++){//Lopp interno
            if (arri[i]<arri[j]) 
            {
                iTemp=arri[j];//guarda e troca a variavel do loop de dentro com o de fora
                arri[j]=arri[i];
                arri[i]=iTemp;
                /*
                iTemp=arri[i];//guarda e troca a variavel do loop de dentro com o de fora
                arri[i]=arri[j];
                arri[j]=iTemp;
                */
            }
        }
    }
}


void printList(int arri[], int iLength) {
    cout << "{";
    for (int i = 0; i < iLength; i++) {
        if (i == iLength - 1) {
            cout << arri[i];
        } else {
            cout << arri[i] << ",";
        }
    }
    cout << "}";
}

int main()
{
    int arriNum[]={42,6,7,666,13,0};
    int arriSize=sizeof(arriNum)/sizeof(arriNum[0]);
    
    cout<<"Array original "<<endl;
    printList(arriNum,arriSize);
    
    cout<<"======================"<<endl;
    
    SelectionSort(arriNum,arriSize);
    cout<<"Array ordenada "<<endl;
     printList(arriNum,arriSize);
     
    cout<<"====================="<<endl; 
    InverseSelectionSort(arriNum,arriSize);
    cout<<"Array inversa ordenada "<<endl;
    printList(arriNum,arriSize);
     
      
     
    return 0;
}
