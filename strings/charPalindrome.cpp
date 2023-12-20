#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char name[], int n)
{
    int str = 0;
    int end = n - 1;

    while (str < end)
    {
        if (toLowerCase(name[str]) != toLowerCase(name[end]))
        {
            return 0;
        }
        else
        {
            str++;
            end--;
        }
    }
    return 1;
}

int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[20];
    cout << "enterPrompt: ";
    cin >> arr;
    cout << endl;

    int len = getLength(arr);
    cout << endl;
    cout << "isPalindrome?" << endl;

    int oP = checkPalindrome(arr, len);
    if (oP == 1)
    {
        cout << "testCasePassed" << endl;
    }
    else
    {
        cout << "testCaseFailed";
    }
    return 0;
}