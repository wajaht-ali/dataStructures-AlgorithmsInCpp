#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int key, int row, int col) {   
    for(int row=0; row<2; row++) {
        for(int col=0; col<3; col++) {
            if(arr[row][col] == key) {
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    //2D arrays are pretty much same like 1D arrays, except few behaviours
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr[2][3];

    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            cin>>arr[i][j];
        }
    }

    //Linear search in 2D arrays:
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int ans = isPresent(arr, target, 2, 3);
    if(ans) {
        cout<<"Target Found "<<endl;
    }
    else {
        cout<<"Not found! "<<endl;
    }
    return 0;
}