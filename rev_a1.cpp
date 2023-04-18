#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void printList(struct Node* sNode);
void addToList(struct Node* elem, int n);
void pop(struct Node* elem);

int main() {
    struct Node* head = nullptr;

    head = (struct Node*) malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next = nullptr;

    // printList(head);
    addToList(head, 12);
    
    printList(head);
    
    return 0;
}

void printList(struct Node* sNode) {
    while(sNode != nullptr) {
        cout << sNode -> data << endl;
        sNode = sNode -> next;
    }
};
void addToList(struct Node* elem, int n) {
    struct Node* proximo = nullptr;
    proximo = (struct Node*) malloc(sizeof(struct Node));

    proximo -> data = n;
    proximo -> next = nullptr;

    while (elem -> next != nullptr) {
        elem = elem -> next;
    };

    elem -> next = proximo;
    
};
void pop(struct Node* elem) {
    while (elem -> next -> next != nullptr) 
    {
        elem = elem -> next;
    };

    free(elem -> next);

    elem-> next = nullptr;
    
}

