// Lstruct : criar tipos part3
//vetores e ponteiros


#include<iostream>
// dados do aluno ,matricula, nome nota proximo
using std::cout;
using std::cin;
using std::string;
using std::endl;

struct Carro
{
    // dados : caracteristicas propriedades
    string nome;
    string cor;
    int pot;
    int Val;
    
    //funçoes/metodos : os parametros são os mesmo das propriedades
    //inseriri valores
    // meteodos: nome_da_var.metedo()
    void insere(string stNome,string stCor, int iPot,int iVal)
    {
        nome=stNome;
        cor=stCor;
        pot=iPot;
        Val=iVal;
    }
    
    void mostra()
    {
    cout<< "Nome do carro "<<nome<<endl;
    cout<< "Cor do carro "<<cor<<endl;
    cout<< "Potencia do carro "<<pot<<endl;
    cout<< "valor do carro "<<Val<<endl; 
    }
    
};


int main()
{
    Carro *carro=new Carro[5];
    
    Carro car1,car2,car3,car4,car5;
    
    //alocando os carros
    carro[0]=car1;
    carro[1]=car2;
    carro[2]=car3;
    carro[3]=car4;
    carro[4]=car5;
    
     //aplicando o metodo insere:
    carro[0].insere(" Marquinhos","vermelho",140,400);
    carro[1].insere(" Relampago","Azul",240,300);
    carro[2].insere(" Luxo","rosa",220,450);
    carro[3].insere(" Raio","Amarelo",40,1400);
    carro[4].insere(" Dark","preto",400,100);
    
    for (int i=0;i<=5;i++)
    {
        carro[i].mostra();
    }

    return 0;
    

}