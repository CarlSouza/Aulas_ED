/* shellSort em uma  linked List
Divide a lista em dois e compara os elementos correspondentes em cada metade
Depois divide novamente por 2, e por 2 sempre trocando , até chegar no final*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//linke lista
struct Node
{
   int iData;
   struct Node* Next;
};

//imprimir a lista
void PrintNode(struct Node* head)
{
    cout << "{";
    while (head != nullptr)
    {
        cout << head->iData;
        if (head->Next != nullptr) {
            cout << " , ";
        }
        head = head->Next;
    }// evita que a "," apareça no final da lista
    cout << "}";
}

// Função para realizar o Shell Sort em uma linked list
void ShellSort(struct Node** head)
{
    // Verifica se a linked list está vazia ou possui apenas um nó
    if (*head == nullptr || (*head)->Next == nullptr)
        return;

    struct Node* current = *head;
    int length = 0;

    // Calcula o tamanho da linked list
    while (current != nullptr)
    {
        length++;
        current = current->Next;
    }

    // Converte a linked list em um array temporário
    int* tempArray = new int[length];
    current = *head;
    for (int i = 0; i < length; i++)
    {
        tempArray[i] = current->iData;
        current = current->Next;
    }

    // Aplica o algoritmo Shell Sort no array temporário
    for (int gap = length / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < length; i++)
        {
            int temp = tempArray[i];
            int j;
            for (j = i; j >= gap && tempArray[j - gap] > temp; j -= gap)
            {
                tempArray[j] = tempArray[j - gap];
            }
            tempArray[j] = temp;
        }
    }

    // Atualiza os valores da linked list com o array ordenado
    current = *head;
    for (int i = 0; i < length; i++)
    {
        current->iData = tempArray[i];
        current = current->Next;
    }

    delete[] tempArray;
}

int main()
{
    // Criação da linked list
    struct Node* head = nullptr;
    struct Node* second = nullptr;
    struct Node* third = nullptr;

    head =(struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    
    //inserir valores nas listas  
    head->iData = 12;
    head->Next = second;

    second->iData = 34;
    second->Next = third;

    third->iData = 54;
    third->Next = nullptr;

    cout << "Linked list antes da ordenação:" << endl;
    PrintNode(head);

    ShellSort(&head);
    
    cout<<"=============="<<endl;
    
    cout << "Linked list após a ordenação:" << endl;
    PrintNode(head);

    // Libera a memória alocada pela linked list
    delete head;
    delete second;
    delete third;

    return 0;
}
