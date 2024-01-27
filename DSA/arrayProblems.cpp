#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }  
    cout<<endl;
}

void swapAlternate(int arr[], int size) {
    for(int i=0; i<size; i+=2) {
        if(i+1 < size) {
            // swap(arr[i], arr[i+1]);
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {
    int even[8] = {3, 4, 5, 2, 1, 6, 8, 9};
    int size = sizeof(even)/sizeof(even[0]);
    int odd[5] = {9, 6, 7, 4, 3};
    int len = sizeof(odd)/sizeof(odd[0]);

    swapAlternate(even, size);
    printArray(even, size);

    cout<<endl;

    swapAlternate(odd, len);
    printArray(odd, len);
    // cout<<size<<" "<<len;
    return 0;
}