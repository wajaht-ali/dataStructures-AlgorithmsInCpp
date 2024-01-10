#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "Source " << src << " Destination " << dest << endl;
    // Base case:
    if (src == dest)
    {
        cout << "Punch gya ghar!" << endl;
        return; // base case mein return lazmi hota hy, nhi tw infinite
    }

    // recursive relation
    src = src + 1;
    reachHome(src, dest);
}

// Febbonacci series
int febbonacci(int n)
{
    // base case:- there will be two base cases for each of two nums.
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    // recursive relation
    int ans = febbonacci(n - 1) + febbonacci(n - 2);
    return ans;
}
int main()
{
    // REACHING AT DESTINATION PROBLEM
    //  int src = 1, dest = 10;
    //  reachHome(src, dest);

    // FEBONACCI SERIES:-
    int n;
    cout << "enterPrompt: ";
    cin >> n;

    // int ans = febbonacci(n);
    // cout << ans;

    // febbonacci series using 'for' loop
    
    return 0;
}