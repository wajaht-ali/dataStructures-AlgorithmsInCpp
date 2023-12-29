#include<iostream>
using namespace std;

class Employee {
    //encapsulation of wrapping up the data members in a private shell
    private:
        char level;
        int salary;

    public: 
        void setAttr(int sal, char lev) {
            this->level = lev;
            this->salary = sal;
        }

        void getAttr() {
            cout<<this->salary<<" "<<this->level<<endl;
        } 
};
int main() {
    Employee Ali;
    Ali.setAttr(100, 'A');
    Ali.getAttr();
    return 0;
}