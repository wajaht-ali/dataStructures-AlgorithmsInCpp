// Find the minimum distance between any two occurences of the minimum integer in the array.
#include <iostream>
using namespace std;

int minElem(int arr[], int n)
{
    int mn = INT_FAST32_MAX;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, arr[i]);
    }
    return mn;
}

int main()
{

    int arr[] = {5, 1, 2, 3, 4, 1, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find the minimum element in the array
    int ans = minElem(arr, size);

    return 0;
}

/*
    #include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { 5, 1, 2, 3, 4, 1, 2, 1 };

    int n = sizeof(arr) / sizeof(arr[0]);
    int min_dist = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] == *min_element(arr, arr + n)) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] == *min_element(arr, arr + n)) {
                    min_dist = min(min_dist, j - i);
                }
            }
        }
    }
    cout << min_dist << endl;
    return 0;
}

*/