#include<iostream>
using namespace std;

void update(int n) {
    n++;
}

void update2(int& n) {
    n++;
}
int main() {
    // int arr[2][3];
    // cout<<"Enter array ";
    // for(int i=0; i<2; i++) {
    //     for(int j=0; j<3; j++) {
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<endl;
    //Sum of each row in 2D array
    // for(int i=0; i<2; i++) {
    //     int sum = 0;
    //     for(int j=0; j<3; j++) {
    //         sum+=arr[i][j];
    //     }
    //     cout<<sum<<endl;
    // }

    //reference variable
    int n = 5;
    
    update(n);      //pass by value
    cout<<n<<endl;

    update2(n);     //pass by reference
    cout<<n;
    return 0;
}