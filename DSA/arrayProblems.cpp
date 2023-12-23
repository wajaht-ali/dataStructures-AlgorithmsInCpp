#include<iostream>
using namespace std;


int main() {
    int size;
    cin>>size;
    cout<<endl;
    int arr[size];
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    
    int x = 0, y = x + 1;
    while (x < size - 1 && y < size){
        swap(arr[x], arr[y]);
        x = x + 2;
        y = y + 2;
    }

    cout<<endl;
    for(int i=0; i<size; i++) {
        cout<<arr[i];
    }
    return 0;
}