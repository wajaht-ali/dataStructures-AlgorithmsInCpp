#include <iostream>
using namespace std;

// Recursion:- A phenomenon is which func calls itself till the base case.
int factorial(int n)
{
    //base case
    if (n == 0)
    {
        return 1;
    }
    // recursive relation
    return n * factorial(n - 1);
}

//Power function using recursion
int expo(int n)
{
    //base case
    if (n == 0)
    {
        return 1;
    }
    //recursive relation
    return 2 * expo(n - 1);
}

//counting using recursion
void print(int n) {
    //base case
    if(n == 0) {
        return ;
    }
    //recursive relation
    cout<< n << endl;
    print (n-1);
}
int main()
{
    int n;
    cout << "enterNum: ";
    cin >> n;

    // FACTORIAL USING FUNCTION:
    //  int ans = factorial(n);
    //  cout << "Your answer is: " << ans;

    // FIND POWER OF 2 USING RECURSIVE RELATION...
    // int ans = expo(n);
    // cout << ans;

    // COUNTING USING RECURSION
    print(n);

    // factorial example using for loop:- Can be found as:;;
    //  int fact = 1;
    //  for(int i = n; i>0; i--) {
    //      fact *= i;
    //  }
    //  cout<<fact;
    return 0;
}