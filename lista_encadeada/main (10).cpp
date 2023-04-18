// lista encadeada exemplo generico
/* Base 
scruct Node{
    int Data;
    Node *next;
};

//função para acrescentar:
void insert(nodePtr& head, int Data)
{
 //head inicia , temp : temporaria , 
 nodePtr tempPtr;
 tempPtr=new Node;
 tempPtr->data =data;
 tempPtr->next=head;
 head= tempPtr;
}


int main () 
{
    nodePrt head;
    head=headNode;
    headNode->data=20;// inicializar
    headNode->next= NULL;
    cout<<
    
    insert(head ,30);
    nodePtr tmp;
    tmp=head;
    
    while (tmp!=NULL)
    {
        cout<< tmp->data<<endl;
        tmp=tmp->next;
    }
}


*/

#include<iostream>
// dados do aluno ,matricula, nome nota proximo
using std::cout;
using std::cin;
using std::string;
using std::endl;


// criamos a estrutura aluno
struct Aluno {
    // propriedades
    std::string nome;
    int matricula;
    float media;
    Aluno* proximo;
};

struct Fila {
    Aluno* inicio;
    Aluno* fim;
};

void inicializarFila(Fila& fila) {
    fila.inicio = NULL;
    fila.fim = NULL;
}

bool estaVazia(Fila& fila) {
    return fila.inicio == NULL;
}

void enfileirar(Fila& fila, std::string nome, int matricula, float media) {
    Aluno* novoAluno = new Aluno;
    novoAluno->nome = nome;
    novoAluno->matricula = matricula;
    novoAluno->media = media;
    novoAluno->proximo = NULL;

    if (estaVazia(fila)) {
        fila.inicio = novoAluno;
    } else {
        fila.fim->proximo = novoAluno;
    }

    fila.fim = novoAluno;
}

void desenfileirar(Fila& fila) {
    if (estaVazia(fila)) {
        std::cout << "A fila esta vazia" << std::endl;
    } else {
        Aluno* alunoRemovido = fila.inicio;
        fila.inicio = fila.inicio->proximo;
        std::cout << "Aluno removido: " << alunoRemovido->nome << " (Matricula: " << alunoRemovido->matricula << ", Media: " << alunoRemovido->media << ")" << std::endl;
        delete alunoRemovido;
    }
}
// imprimir a fila
void imprimir(Fila& fila) {
    if (estaVazia(fila)) {
        std::cout << "A fila esta vazia" << std::endl;
    } else {
        Aluno* current = fila.inicio;
        while (current != NULL) {
            std::cout << "Nome: " << current->nome << " (Matricula: " << current->matricula << ", Media: " << current->media << ")" << std::endl;
            current = current->proximo;
        }
    }
}

int main() {
    Fila filaDeAlunos;
    inicializarFila(filaDeAlunos);

    enfileirar(filaDeAlunos, "Carlos", 12345, 8.5);
    enfileirar(filaDeAlunos, "Nicole", 54321, 7.2);
    enfileirar(filaDeAlunos, "Rafa", 98765, 9.0);
    enfileirar(filaDeAlunos, "ademir", 56789, 8.8);

    imprimir(filaDeAlunos);

    desenfileirar(filaDeAlunos);
    desenfileirar(filaDeAlunos);

    imprimir(filaDeAlunos);

    return 0;
}

