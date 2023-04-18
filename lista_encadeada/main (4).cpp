// Lista encadea 1
#include<iostream>
// dados do aluno ,matricula, nome nota proximo
using std::cout;
using std::cin;
using std::string;
using std::endl;

struct aluno // estrutura aluno
{
  int matricula ;
  string nome;
  float nota;
  aluno *next; // criamos um ponteiro aluno ,dentro da struct
};


int main ()
{
    aluno *i,*a,*p;// i- inicio, a -temporario , p -movimentação dos alunos
    a =new aluno;
    
    i=a; //iniciando a lista
    a->matricula=100;
    a->nome="Carlos";
    a->nota=78;
    a->next=NULL;
    p=a;
    
    // novo aluno 
    a =new aluno;
    p->next=a;
    a->matricula=101;
    a->nome="Nicole";
    a->nota=78;
    a->next=NULL;
    p=a;
    
      // novo aluno 
    a =new aluno;
    p->next=a;
    a->matricula=102;
    a->nome="Maria";
    a->nota=89;
    a->next=NULL;
    p=a;
    
    // verificar a lista
    p=i;
    while (p!=NULL){
    cout<<p->matricula<<"/"<<p->nome<<"/"<<p->nota<<endl;
    p=p->next;
    }
    /*segundo aluno
    p=p->next;
    cout<<p->matricula<<"/"<<p->nome<<"/"<<p->nota<<endl;*/
    
    
    return 0;
}