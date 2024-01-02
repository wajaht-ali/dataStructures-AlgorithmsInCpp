#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    //for asscending order
    // for(int i=0; i<n-1; i++) {
    //     int minIndex = i;
    //     for(int j=i+1; j<n; j++) {
    //         if(arr[j] < arr[minIndex]) { //for desscending: use ">" sign instead of "<".
    //             minIndex = j;
    //         }
    //     }
    //     swap(arr[minIndex], arr[i]);
    // }

    //for desscending order
    for(int i=0; i<n-1; i++) {
        int minIndex = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] > arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int even[6] = {4, 0, -2, 1, 2, 6};
    selectionSort(even, 6);
    for(int i=0; i<6; i++) {
        cout<<even[i]<<" ";
    }
    return 0;
}