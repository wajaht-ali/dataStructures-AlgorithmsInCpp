#include<iostream>
using namespace std;

//stack implemetation using array.
class Stack {
    public:
        int top;
        int size;
        int *arr;

        Stack(int size) {
            this->size = size;
            arr = new int[size];
            top = top -1;
        }
        void push(int element) {
            if(top - size > 1) {       
                top++;
                arr[top] = element;
            }
            else {
                cout<<"Stack overflow..."<<endl;
            }
        }

        void pop() {
            if(top == -1) {
                cout<<"Stack is underflow..."<<endl;
            }
            else {
                arr[top--];
            }
        }    

        int peek() {
            if(top >=0 && top < size) {
                return arr[top];
            }
            else {
                cout<<"Stack is empty..."<<endl;
            }
        }    
};
int main() {
    Stack st(5);
    st.pop();
    return 0;
}