#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node*);
void addToEnd(struct Node*, int);
void pop(struct Node*);
void add(struct Node*, int, int);

int main() {
    struct Node* head = nullptr;

    head = (struct Node*) malloc(sizeof(struct Node));

    head -> data = 33;
    head -> next = nullptr;
    
    cout << "Add to list\n";
    addToEnd(head, 12);
    printList(head);

    cout << "Remove to list \n";
    pop(head);
    printList(head);

    cout << "Add to list\n";
    add(head, 1, 12);
    add(head, 3, 7);
    add(head, 2, 70);
    printList(head);
    
    
    return 0;
}

void printList(struct Node* sNode){
    while(sNode != nullptr) {
        cout << sNode -> data << endl;
        sNode = sNode -> next;
    }
}

void addToEnd(struct Node* elem, int n) {
    struct Node* proximo = nullptr;
    proximo = (struct Node*) malloc(sizeof(struct Node));
    
    proximo -> data = n;
    proximo -> next = nullptr;
    
    while (elem -> next != nullptr) {
        elem = elem -> next;
    }
    
    elem -> next = proximo;
}

void pop(struct Node* elem) {
    while (elem -> next -> next != nullptr) {
        elem = elem -> next;
    }
    
    free(elem -> next);
    elem -> next = nullptr;
}

void add(struct Node* elem, int pos, int n) {
    struct Node* proximo = nullptr;
    proximo = (struct Node*) malloc(sizeof(struct Node));
    
    proximo -> data = n;
    proximo -> next = nullptr;

    while ((elem -> next != nullptr) && (pos > 1)) {
        elem = elem -> next;
        pos--;
    }
    
    proximo -> next = elem -> next;
    elem -> next = proximo;
}
