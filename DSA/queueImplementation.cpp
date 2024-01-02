#include<iostream>
using namespace std;

class Queue {
    public:
        int size;
        int *arr;
        int front;
        int rear;

        Queue(int size) {
            arr = new int[size];
            front = 0;
            rear = 0;
        }

        void enqueue(int element) {
            if(rear == size) {
                cout<<"Sorry, Queue is full."<<endl;
            }
            else {
                arr[rear] = element;
                rear ++;
            }
            cout<<endl;
        }

        void dequeue() {
            if(front == rear) {
                cout<<"Sorry, Queue is empty."<<endl;
            }
            else {
                arr[front] = -1;
                front++;

                if(front == rear) {
                    front = 0;
                    rear = 0;
                }
            }
            cout<<endl;
        }

        int onFront() {
            if(front == rear) {
                return -1;
            }
            else {
                return arr[front];
            }
            cout<<endl;
        }

        bool isEmpty() {
            if(front == rear) {
                return 0;
            }
            else {
                return 1;
            }
            cout<<endl;
        }
};
int main() {
    Queue q(5);
    q.enqueue(4);
    q.enqueue(5);
    cout<<q.onFront();
    q.dequeue();
    q.dequeue();
    cout<<q.onFront();
    cout<<q.isEmpty();
    return 0;
}