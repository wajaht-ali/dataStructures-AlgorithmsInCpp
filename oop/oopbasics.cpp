#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;

    Hero() {
        cout<<"Default constructor: "<<endl;
        
    }

    //paramerterized constructor
    Hero(int health, char level) {
        this->health = health;
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