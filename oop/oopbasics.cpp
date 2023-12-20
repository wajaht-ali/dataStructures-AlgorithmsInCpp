#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;
    void print() {
        cout<<" Hii there";
    }
};
int main()
{
    Hero ali;
    ali.health = 80;
    ali.level = 'A';
    ali.print();
    cout<<endl;
    cout << ali.health << " " << ali.level;
    return 0;
}