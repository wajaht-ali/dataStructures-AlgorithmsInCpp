#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node* &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

bool search(Node* &head, int target) {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == target) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 4);
    insertAtTail(tail, 6);
    print(head);

    cout<<endl;
    int ans = search(head, 7);
    cout<<ans;
    return 0;
}