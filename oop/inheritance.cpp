#include<iostream>
using namespace std;

class Human {
    public:
        int height;
        int weight;
        int age;

    public:
        int getHeight() {
            return this->height;
        }

        void setWeight(int w) {
            this->weight = w;
        }

        void getAction() {
            cout<<"Working...";
        }
};

//Male class inheriting it's parent class...
class Male: public Human {
    public:
        string color;
};

int main() {

    Male object1;
    cout << object1.age;
    object1.getAction();
    return 0;
}