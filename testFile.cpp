#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "wajahat";
    char ch;
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i+1; j < str.length(); j++)
        {
            if(str[i] == str[j]) {
                ch = str[i];
                count = count + 1;
            }
        }
    }
    cout<<count<<" "<<ch<<endl;
    return 0;
}