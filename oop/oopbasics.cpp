#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;

    Hero() {
        cout<<"Default constructor: "<<endl;
        cout<<"I'm default constructor"<<endl;
        
    }

    //paramerterized constructor
    Hero(int health, char level) {
        this->health = health;  //the keyword "this" points toward the current object.
        this->level = level;
    }

    void print() {
        cout<<health<<" "<<level;
    }
};


int main()
{
    //static object creation
    Hero ali;

    //dynamic object creation
    Hero *h = new Hero(50, 'A');
    
    ali.print();
    return 0;
}