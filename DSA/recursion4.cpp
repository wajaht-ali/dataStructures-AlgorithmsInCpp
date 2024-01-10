#include<iostream>
using namespace std;

bool found(int *arr, int n, int target) {
    if(n == 0 || n == 1) {
        return 0;
    }
    
    if(arr[0] == target) {
        return 1;
    }
    else {
        found(arr+1, n-1, target);
    }
    return 0;
}
int main() {
    int n, target;
    cout<<"enterSize: ";
    cin>>n;
    int *arr = new int[n];
    cout<<endl;
    cout<<"enterArr: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<endl<<"enterTarget: ";
    cin>>target;
    bool ans = found(arr, n, target);
    cout<<ans;
    return 0;
}