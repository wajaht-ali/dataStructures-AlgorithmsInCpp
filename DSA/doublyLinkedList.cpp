#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int d) {
            this->data = d;
            this->prev = NULL;
            this->next = NULL;
        }
};

void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head) {
    Node* temp = head;
    int len = 0;
    while(temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    // insertAtHead(head, 9);
    // insertAtHead(head, 8);
    insertAtTail(tail, 11);
    cout<<getLength(head);
    cout<<endl;
    print(head);
    return 0;
}