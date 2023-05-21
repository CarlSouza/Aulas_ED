#include<iostream>
using namespace std;

// double linked list
struct double_linked_list {
    int iData;
    struct double_linked_list* Next;
    struct double_linked_list* Previus;
};

// imprimir a lista
void printList(struct double_linked_list* no) {
    struct double_linked_list* temp = no;
    cout << endl;
    while (temp != nullptr) {
        cout << temp->iData << " ";
        temp = temp->Next;
    }
}

// Função de trocar swap
void swap(int& iVal1, int& iVal2) {
    int iTemp = iVal1;
    iVal1 = iVal2;
    iVal2 = iTemp;
}

// colocar nós no início da lista
void insertAtTheBegin(struct double_linked_list** start_ref, int iData) {
    struct double_linked_list* current = new double_linked_list;
    current->iData = iData;
    current->Next = *start_ref;
    if (*start_ref != nullptr)
        (*start_ref)->Previus = current;
    *start_ref = current;
}

// aplicar BubbleSort na lista duplamente encadeada
void BubbleSort(struct double_linked_list* first) {
    int swapped, i;
    struct double_linked_list* current;
    struct double_linked_list* last = nullptr;
    
    // checar se a lista está vazia
    if (first == nullptr)
        return;

    do {
        swapped = 0;
        current = first;

        while (current->Next != last) {
            if (current->iData > current->Next->iData) {
                swap(current->iData, current->Next->iData);
                swapped = 1;
            }
            current = current->Next;
        }
        last = current;
    } while (swapped);
}

int main() {
    int arr1[] = { 1, 4, 2, 11, 2, 23, 65, 1, 5, 7 };
    int list_size = sizeof(arr1) / sizeof(arr1[0]);

    // iniciando a lista
    struct double_linked_list* start = nullptr;

    // vamos criar uma lista encadeada a partir do arr1[]
    // nossa lista será 1->1->2->2->4->5->7->11->23->65
    for (int i = 0; i < list_size; i++) {
        insertAtTheBegin(&start, arr1[i]);
    }

    cout << "Lista original:" << endl;
    printList(start);
    cout << "=============" << endl;
    cout << "Lista ordenada:" << endl;
    BubbleSort(start);
    printList(start);

    return 0;
}

