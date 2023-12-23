#include <iostream>
using namespace std;

class Hero
{
private:
    int health;
    char level;

public:
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char l)
    {
        level = l;
    }
};


int main()
{
    Hero Ali;
    Ali.setHealth(50);
    cout << Ali.getHealth() << endl;
    Ali.setLevel('A');
    cout << Ali.getLevel();
    //39 mins done
    return 0;
}