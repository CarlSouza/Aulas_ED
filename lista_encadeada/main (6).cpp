// Lstruct : criar tipos part1
//metodos funções part2


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
    // chamar o carro
    Carro car1,car2,car3;
    //primeiro carro
    car1.nome="Marquinhos";
    car1.cor="Vermelho";
    car1.pot=450;
    car1.Val=139;
    
    // segundo carro
    /*car2.nome="Relampago";
    car2.cor="Azul";
    car2.pot=490;
    car2.Val=250;*/
    
    // saida:carro1 
    cout<< "Nome do carro"<<car1.nome<<endl;
    cout<< "Cor do carro"<<car1.cor<<endl;
    cout<< "Potencia do carro"<<car1.pot<<endl;
    cout<< "valor do carro"<<car1.Val<<endl;
    
     cout<<"==================="<<endl;
    cout<<"Aplicando método: <nome_da_var>.<nome_do_método>();"
    /* saida:carro2 
    cout<< "Nome do carro"<<car2.nome<<endl;
    cout<< "Cor do carro"<<car2.cor<<endl;
    cout<< "Potencia do carro"<<car2.pot<<endl;
    cout<< "valor do carro"<<car2.Val<<endl;*/
    
    car2.insere(" Relampago","azul",490,250);
    car3.insere("Lixo","Rosa",400,300);
    
    car1.mostra();
    cout<<"==================="<<endl;
    car2.mostra();
    cout<<"==================="<<endl;
    car3.mostra();
    
    
    
    return 0;
    

}
