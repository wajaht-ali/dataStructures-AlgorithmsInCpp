#include <iostream>
using namespace std;

// Linkedlist is a 'linear dynamic data structure', a collection of nodes.
// How to create a node of linkedlist?
class Node
{ // a single node of the LinkedList
public:
    int data;
    Node *next;

    // creating a node using constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void printLinkedList(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        count = count + 1;
    }

    cout << endl <<"Total elements in List: "<< count;
}
int main()
{
    Node *node1 = new Node(10); // created a new node

    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 8);
    insertAtHead(head, 9);
    insertAtTail(tail, 11);
    insertAtTail(tail, 12);

    printLinkedList(head);
    return 0;
}