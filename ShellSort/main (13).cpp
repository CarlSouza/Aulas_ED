#include <iostream>

using std::cout;
using std::endl;

// Definição da estrutura de um nó da doubly linked list
struct Node {
    int iData;
    struct Node* Next;
    struct Node* Previus;
};

// Função para imprimir os elementos da doubly linked list
void printNode(Node* head)
{
    cout << "{";
    while (head != nullptr) {
        cout << head->iData;
        if (head->Next != nullptr) {
            cout << " ";
        }
        head = head->Next;
    }
    cout << "}" << endl;
}


// Função para inserir um novo nó no final da doubly linked list
void insertNodeAtEnd(Node** head, int iVal)
{
    Node* newNode = new Node;
    newNode->iData = iVal;
    newNode->Previus = nullptr;
    newNode->Next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->Next != nullptr) {
            current = current->Next;
        }
        current->Next = newNode;
        newNode->Previus = current;
    }
}

// Função para inserir um novo nó no início da doubly linked list
void insertNodeAtBeginning(Node** head, int iVal)
{
    Node* newNode = new Node;
    newNode->iData = iVal;
    newNode->Previus = nullptr;
    newNode->Next = *head;

    if (*head != nullptr) {
        (*head)->Previus = newNode;
    }

    *head = newNode;
}


// Função para realizar o Shell Sort em uma doubly linked list
void shellSort(Node** head)
{
    // Verifica se a doubly linked list está vazia ou possui apenas um nó
    if (*head == nullptr || (*head)->Next == nullptr)
        return;

    int ilength = 0;
    Node* current = *head;

    // Calcula o tamanho da doubly linked list
    while (current != nullptr) {
        ilength++;
        current = current->Next;
    }

    // Converte a doubly linked list em um array temporário
    int* iTempArray = new int[ilength];
    current = *head;
    for (int i = 0; i < ilength; i++) {
        iTempArray[i] = current->iData;
        current = current->Next;
    }

    // Aplica o algoritmo Shell Sort no array temporário
    for (int gap = ilength / 2; gap > 0; gap /= 2) {
        //achei no site como gap , vou colocar gap
        for (int i = gap; i < ilength; i++) {
            int iTemp = iTempArray[i];
            int j;
            for (j = i; j >= gap && iTempArray[j - gap] > iTemp; j=j- gap) {
                iTempArray[j] = iTempArray[j - gap];
            }
            iTempArray[j] = iTemp;
        }
    }

    // Atualiza os valores da doubly linked list com o array ordenado
    current = *head;
    for (int i = 0; i < ilength; i++) {
        current->iData = iTempArray[i];
        current = current->Next;
    }

    delete[] iTempArray;
}



int main()
{
    //iniciar a lista
    Node* head = nullptr;

    // Inserção dos elementos na doubly linked list
    insertNodeAtEnd(&head, 12);
    insertNodeAtEnd(&head, 64);
    insertNodeAtEnd(&head, 54);
    insertNodeAtBeginning(&head, 2);
    insertNodeAtBeginning(&head, 3);

    cout << "Doubly linked list antes da ordenação: ";
    printNode(head);

    shellSort(&head);

    cout << "Doubly linked list após a ordenação: ";
    printNode(head);

    // Libera a memória alocada pela doubly linked list
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->Next;
        delete temp;
    }

    return 0;
}
