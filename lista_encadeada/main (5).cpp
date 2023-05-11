//lista encadeada
//criar um nó
// printar um nó
// adicionar elementos 
//remover
//trocar de posição
//acessar algum nó em especifico

#include <iostream>
// criar a Lista:( datos:informações  e um  ponteiro)
struct Node
{
  int iData;
  struct Node* Next;
};
// printar a lista, recebe o nó como parametro
void printList(struct Node*);
// adcionar elementos no final: recebe o nó e valor a ser adicionado
void AddToEnd(struct Node*, int);
// remover : recebe o nó
void pop(struct Node*);
// remover um elemento em uma posição específica
void RemoveAt(struct Node* , int );
// adiconar, em qualquer posição ,recebe o nó , a posição e valor a ser adcionado
void Add(struct Node*,int ,int);




using namespace std;

int main()
{
    
    //vamos declarar os nós
    struct Node* head=nullptr; // devemos iniciar os nos
    struct Node* body=nullptr; 
    struct Node* tail=nullptr;
    
    // vamos usar 3 nos 
    head=(struct Node*)malloc(sizeof(struct Node));
    body=(struct Node*)malloc(sizeof(struct Node));
    tail=(struct Node*)malloc(sizeof(struct Node));
    
    
    head->iData=10;
    head->Next=body;
    head->Next=nullptr;
    
    body->iData=7;
    body->Next=tail;
    
    tail->iData=101;
    tail->Next=nullptr;

    printList(head); 
    AddToEnd(tail,12);
    RemoveAt(head, 2); // Exemplo: remover o segundo elemento da lista
    
    
   AddToEnd(head,11);
   printList(head);


    return 0;
}
// vamos printar a Lista
void printList(struct Node* no)
{
    while (no !=nullptr)
    {
        cout<<"Dado do nó "<<no->iData<<endl;
        no=no->Next; //atualiza o ponteiro "no" para apontar para o próximo elemento da lista encadeada
    }
}
// vamos adicionar elementos agora, por default ele entra no final

void AddToEnd(struct Node* elemento, int iVal) //parâmetro elemento do tipo struct Node*
{
    struct Node* proximo = nullptr; //  inicialização da variável proximo
    proximo = (struct Node*)malloc(sizeof(struct Node)); // Alocação de memória para o novo nó
    proximo->iData = iVal; // Definindo o valor do dado do novo nó como iVal
    proximo->Next = nullptr; // Definindo o próximo nó como nullptr (fim da lista)

    if (elemento == nullptr) {
        elemento = proximo;
        return;
    }
   

    // Nesse ponto, você precisa adicionar o novo nó ao final da lista
    while (elemento->Next != nullptr)/*Este é um loop while que percorre a lista encadeada, 
    começando no nó inicial (elemento).*/
    { 
        elemento=elemento->Next;//atualizamos o valor de elemento para o próximo nó na lista encadeada,
    }
    elemento->Next=proximo;/*Após sair do loop, temos certeza de que elemento aponta para o último 
    nó da lista encadeada.elemento->Next para proximo. Dessa forma, proximo se torna o novo último
    nó da lista*/
}

// remover :por default remove o ultimo elemento;
void pop(struct Node* elemento)//parâmetro elemento do tipo struct Node*
{
    while (elemento ->Next->Next !=nullptr)/*: Este é um loop while que percorre a lista encadeada até
    o penúltimo nó. */
    {
        elemento=elemento->Next;/*atualizamos o valor de elemento para o próximo nó na lista encadeada. 
        Isso nos permite percorrer a lista um nó de cada vez.*/
    }
    
    free(elemento->Next);// remove o último nó da lista.
    elemento->Next=nullptr;/*Após liberar o último nó
    Isso faz com que o penúltimo nó se torne o novo último nó da lista, garantindo que a lista esteja 
    corretamente terminada.*/
}

// vamos adicionar em qualquer posição:
void Add(struct Node* elemento, int iVal, int iPos)
{
    struct Node* proximo=nullptr;
    proximo=(struct Node*)malloc(sizeof(struct Node));
    proximo->iData=iVal;
    proximo->Next=nullptr;// indicando que ele é o último nó da lista.
    
    while ((elemento->Next !=nullptr)&&(iPos>1))
    {
        elemento=elemento->Next;/* atualizamos o valor de elemento para o próximo nó na lista encadeada.
        Isso nos permite percorrer a lista um nó de cada vez e avançar em direção à posição desejada.
        */
        iPos--;/*Decrementamos o valor de iPos a cada iteração do loop, para nos aproximarmos da posição 
        em que o novo nó será inserido.*/
    }
    
    proximo->Next=elemento->Next;
    elemento->Next=proximo;
}

// remover um elemento em uma posição específica
void RemoveAt(struct Node* head, int position)
{
    if (head == nullptr)
    {
        cout << "A lista está vazia." << endl;
        return;
    }

    struct Node* currentNode = head;
    struct Node* previousNode = nullptr;

    // Caso especial: remover o primeiro elemento
    if (position == 1)
    {
        head = currentNode->Next;
        free(currentNode);
        return;
    }

    // Percorrer a lista até a posição desejada
    int currentPosition = 1;
    while (currentNode != nullptr && currentPosition < position)
    {
        previousNode = currentNode;
        currentNode = currentNode->Next;
        currentPosition++;
    }

    // Verificar se a posição está além do tamanho da lista
    if (currentNode == nullptr)
    {
        cout << "A posição especificada está além do tamanho da lista." << endl;
        return;
    }

    // Remover o nó na posição desejada
    previousNode->Next = currentNode->Next;
    free(currentNode);
}


