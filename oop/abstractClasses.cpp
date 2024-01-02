#include<iostream>
using namespace std;

class Base{
    public:
        virtual void show() = 0;        //pure virtual function
};

class Derv1: public Base {
    public:
        void show() {
            cout<<"Derived 1"<<endl;
        }
};

class Derv2: public Base {
    public:
        void show() {
            cout<<"Derived 2"<<endl;
        };
};
int main() {
    // Base obj;         Can't make object of an abstract class
    Base* arr[2];
    Derv1 obj1;
    Derv2 obj2;
    arr[0] = &obj1;
    arr[1] = &obj2;

    arr[0]->show();
    arr[1]->show();
    return 0;
}