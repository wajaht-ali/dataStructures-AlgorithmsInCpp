#include<iostream>
using namespace std;

class Hero{
    private:
        int health;
        char level;
    public:

    Hero(){
        cout<<"Simple constructor called!!!"<<endl;
    }

    //setting values of protected
    void setAttr(int h, char l) {
        health = h;
        level = l;
    }
    //getting values of protected
    void getAttr() {
        cout<<health<<" "<<level;
    }
};

int main() {
    Hero Ali;
    // Ali.setAttr(100, 'A');
    // Ali.getAttr();

    // Hero Khan(Ali);
    // cout<<endl;
    // Khan.getAttr();

    //Static & dynamic memory allocation

    char *ch = new char;
    *ch = 'A';
    cout<<ch;
    return 0;
}