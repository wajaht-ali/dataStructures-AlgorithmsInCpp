#include<iostream>
using namespace std;

// Polymorphism:- Existing in more than one form or state
//Two types of polymorphism:- 
// 1) Compile time p.m,  2) Run time morphism
// > 1) Function overloading:-
class Animal {
    public:
        // void hello() {
        //     cout<<"Hello there"<<endl;
        // }
        // void hello(string str) {
        //     cout<<"Hii there "<< str <<endl;
        // }
        void speak() {
            cout<<"Speaking ";
        }
};

// 2) Run-time polymorphism:-
//  >Func over riding:- Three rules, func name and arg must be same, inheritance is imp.
class Dog: public Animal {
    public: 
        void speak() {
            cout<<"Barking ";
        }
};
int main() {

    Dog obj;
    obj.speak();
    // Animal obj;
    // obj.hello("Wajahat");
    
    return 0;
}