//Aula 20:Selection short

#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

struct Node {
    int data;
    Node* next;
};

void swap(Node* node1, Node* node2) {
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}

void SelectionSort(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        Node* smallest = current;
        Node* temp = current->next;
        while (temp != nullptr) {
            if (temp->data < smallest->data) {
                smallest = temp;
            }
            temp = temp->next;
        }
        swap(current, smallest);
        current = current->next;
    }
}

void printList(Node* head) {
    cout << "{";
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr) {
            cout << ",";
        }
        head = head->next;
    }
    cout << "}";
}

int main() {
    // Criando a linked list
    Node* head = new Node{42, nullptr};
    Node* second = new Node{6, nullptr};
    Node* third = new Node{7, nullptr};
    Node* fourth = new Node{666, nullptr};
    Node* fifth = new Node{13, nullptr};
    Node* sixth = new Node{0, nullptr};

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "Linked List original: ";
    printList(head);
    cout << endl;

    SelectionSort(head);

    cout << "Linked List ordenada: ";
    printList(head);
    cout << endl;

    // Liberando a memória
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
