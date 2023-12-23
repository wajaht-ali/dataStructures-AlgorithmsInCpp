#include<iostream>
using namespace std;

// void printArray(int arr[], int size) {
//     for(int i=0; i<size; i++) {
//         cout<<arr[i]<<" ";
//     }
// }
// int getMaxim(int arr[], int len) {
//     int max = INT32_MIN;
//     for(int i=0; i<len; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     return max;
// }

bool linearSearch(int arr[], int len, int key) {
    for(int i=0; i<len; i++) {
        if(arr[i] == key) {
            return 1;
        }        
    }
    return 0;
}

// int getMax(int arr[], int len) {
//     int mx = INT32_MIN;
//     for(int i=0; i<len; i++) {
//         mx = max(mx, arr[i]);
//     }
//     return mx;
// }

int main() {
    int size, key;
    cout<<"enterLength: ";
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    cout<<endl;
    //Search for the key
    cout<<"enterKeyToSearch: ";
    cin>>key;

    bool found = linearSearch(arr, size, key);
    if(found) {
        cout<<"testCasePassed!"<<endl;
    }
    else {
        cout<<"testCaseFailed!";
    }
    return 0;
}