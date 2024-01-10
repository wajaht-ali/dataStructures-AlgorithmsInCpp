#include <iostream>
using namespace std;

// Reaching at nth stair problem:
//  description: If you jump one step or two step at a time, then in how many jumps you will reach up to 'nth' stair.

int nStairDest(int n)
{
    // base cases
    if (n < 0)
    { // suppose your are one step behind the 1st stair
        return 0;
    }
    if (n == 0)
    { // here you're standing on the first stair,
        return 1;
    }
    // recursive relation
    int ans = nStairDest(n - 1) + nStairDest(n - 2);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int ans = nStairDest(n);
    cout << ans;
    return 0;
}