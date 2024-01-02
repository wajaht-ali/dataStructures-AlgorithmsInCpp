// #include<iostream>
// using namespace std;

// //stack implementation using class
// class Stack{
//     public:
//         int size;
//         int *arr;
//         int top;
        
//     Stack(int size) {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }

//     void push(int element) {
//         if(size - top > 1) {
//             top++;
//             arr[top] = element;
//         }
//         else {
//             cout<<"Stack is overflow...";
//         }
//     }
//     void pop() {
//         if(top == -1) {
//             cout<<"Stack is underflow...";
//         }
//         else {
//             arr[top--];
//         }
//     }
//     int peek() {
//         if(top >=0 && top < size) {
//             return arr[top];
//         }
//         else {
//             cout<<"Stack is empty...";
//         }
//     }
//     bool isEmpty() {
//         if(top == -1) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }
// };

// int main() {
//     Stack s(5);
//     s.push(2);
//     s.pop()
//     cout<<s.peek();
//     return 0;
// }
#include<iostream>
using namespace std; 

class Stack {
    public:
        int size;
        int top;
        int *arr;

        Stack(int size) {
            this->size = size;
            arr= new int[size];
            top = -1;
        }

        void push(int element) {
            if(top < size) {
                top++;
                arr[top] = element;
            }
            else {
                cout<<"Sack overflow..."<<endl;
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
            if(top >= 0 && top < size) {
                return arr[top];
            }
            else {
                cout<<"Stack is empty"<<endl;
            }
        }
        bool isEmpty() {
            if(top == -1) {
                return true;
            }
            else {
                return false;
            }
        }
};

int main() {
    Stack st(5);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.peek();
    // st.pop();
    // st.pop();
    // st.pop();
    cout<<st.isEmpty();
    cout<<endl;
    // st.pop();
    // cout<<st.peek();
    return 0;
}