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



#include <iostream>


struct Node {
    int data;
    Node* next;
};

class LinkedList {
    private:
        Node* head;

    public:
        LinkedList() {
            head = NULL;
        }
        //inclue elementos na lista
        void add(int value) {
            Node* newNode = new Node;
            newNode->data = value;
            newNode->next = NULL;

            if (head == NULL) {
                head = newNode;
            } else {
                Node* current = head;
                while (current->next != NULL) {
                    current = current->next;
                }
                current->next = newNode;
            }
        }
        // imprime os elementos da lista 
        void print() {
            Node* current = head;
            while (current != NULL) {
                std::cout << current->data << " ";
                current = current->next;
            }
            std::cout << std::endl;
        }
};

int main() {
    LinkedList myList;

    myList.add(1);
    myList.add(2);
    myList.add(3);
    myList.add(4);
    myList.add(5);
    myList.add(6);
    
    myList.print();

    return 0;
}
