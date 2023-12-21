#include <iostream>
#include <string>
using namespace std;

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }

    return 0;
}

bool checkPalindrome(string str)
{
    int len = str.length(), s = 0, e = len - 1;

    while (s < e)
    {
        if (str[s] != str[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    string str, temp = "";

    cout << "enterPrompt: ";
    cin >> str;

    //string validation
    for (int i = 0; i < str.length(); i++)
    {
        if (valid(str[i]))
        {
            temp.push_back(str[i]);
        }
    }

    //lowercasing of characters
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = toLowerCase(temp[i]);
    }

    // final decision making
    int oP = checkPalindrome(temp);
    if (oP == 1)
    {
        cout << "testCasePassed!!!" << endl;
    }
    else
    {
        cout << "testCaseFailed***";
    }
    return 0;
}