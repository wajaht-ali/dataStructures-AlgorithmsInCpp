#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    } 
}

int main() {
    int odd[7] = {3, 1, 4, 5, 2, 0, 7};

    bubbleSort(odd, 7);
    
    for(int i=0; i<7; i++) {
        cout<<odd[i]<<" ";
    }
    return 0;
}