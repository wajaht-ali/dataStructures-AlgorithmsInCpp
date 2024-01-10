#include <iostream>
using namespace std;

void mergeSort(int *arr1, int n, int *arr2, int m, int *arr3)
{
    int i = 0, j = 0, mainIndex = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[mainIndex++] = arr1[i++];
        }
        else
        {
            arr3[mainIndex++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[mainIndex++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[mainIndex++] = arr2[j++];
    }
}
void print(int *arr3, int n)
{
    cout << "Your merged sorted array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }
}
int main()
{
    int x, y;

    cout << "Enter size 1: ";
    cin >> x;

    cout << "Enter size 2: ";
    cin >> y;

    int z = x + y;
    int *arr1 = new int[x];
    int *arr2 = new int[y];
    int *arr3 = new int[z];

    cout << "Enter array 1: ";
    for (int i = 0; i < x; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;

    cout << "Enter array 2: ";
    for (int i = 0; i < y; i++)
    {
        cin >> arr2[i];
    }
    cout << endl;

    mergeSort(arr1, x, arr2, y, arr3);
    print(arr3, z);
    delete arr1;
    delete arr2;
    delete arr3;
    return 0;
}