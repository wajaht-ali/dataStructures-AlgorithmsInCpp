#include <iostream>
using namespace std;

bool isPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (a[s] != a[e])
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
// string reverse(char arr[], int n)
// {
//     int str = 0;
//     int end = n - 1;

//     while (str < end)
//     {
//         char temp = arr[str];
//         arr[str] = arr[end];
//         arr[end] = temp;
//         str++;
//         end--;
//     }
//     return arr;
// }
int main()
{
    char arr[20];
    int len = sizeof(arr);
    cout << "...";
    cin >> arr;
    cout << endl;

    // cout << arr << endl;
    // reverse(arr, len);
    // cout<<arr<<endl;
    cout << "is palindrome? " << endl;
    isPalindrome(arr, len);
    return 0;
}