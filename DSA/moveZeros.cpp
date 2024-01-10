#include <iostream>
using namespace std;

void moveZerosToRight(int arr[], int n)
{
    int nonZero = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[nonZero]);
            nonZero++;
        }
    }
}

void moveZerosToLeft(int arr[], int n)
{
    int nonZero = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 0)
        {
            swap(arr[j], arr[nonZero]);
            nonZero++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[8] = {1, 0, 0, 3, 0, 0, 5, 6};
    int arr2[8] = {4, 0, 7, 8, 0, 0, 9, 11};
    int n = 8;
    int n2 = 8;

    moveZerosToRight(arr, n);
    moveZerosToLeft(arr2, n2);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}