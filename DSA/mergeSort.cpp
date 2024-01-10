#include <iostream>
using namespace std;

void merge(int *arr, int s, int e) {

}
void mergeSort(int *arr, int str, int end)
{
    // base case
    if (str > end)
    {
        return;
    }

    int mid = (str + end) / 2;

    // sorting left part
    mergeSort(arr, str, mid);
    // soring right part
    mergeSort(arr, mid + 1, end);

    //sort both sorted arrays
    merge(arr, str, end);
}
int main()
{
    int arr[7] = {2, 4, 1, 6, 7, 0, 5};
    int n = 7;

    mergeSort(arr, 0, n - 1);
    return 0;
}