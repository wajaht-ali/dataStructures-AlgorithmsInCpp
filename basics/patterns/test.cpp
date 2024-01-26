#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, i, ans;
    cout << "enterPrompt: ";
    cin >> n;
    cout << endl;

    i = 1, ans = 0;
    bool flag = false;
    if (n == 0)
    {
        flag = true;
    }
    else
    {

        while (i <= n)
        {
            if (i % 2 == 0)
            {
                ans += i;
                i = i + 1;
            }
            else
            {

                i = i + 1;
            }
        }
    }
    if (flag == true)
    {
        cout << "Sorry! not possible" << endl;
    }
    else
    {
        cout << ans;
    }
    return 0;
}