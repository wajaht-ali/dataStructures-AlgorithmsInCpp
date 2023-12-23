#include<iostream>
using namespace std;

void swapAlter(int arr[], int len) {
    int x = 0, y = x + 1;
    while (x < len - 1 && y < len){
        swap(arr[x], arr[y]);
        x = x + 2;
        y = y + 2;
    }
}
void findUnique(int arr[], int temp[], int len) {
    int unique = 0;
    for(int i = 0; i < len; i++) {
        for(int j = i + 1; j < len; j++) {
            if(arr[i] != arr[j]) {
                temp[i] = arr[i];
            }
        }
    }
}
int main() {
    int size;
    cout<<"enterLen :";
    cin>>size;
    cout<<endl;
    int arr[size], temp[size];
    cout<<"enterArr :"<<endl;
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    
    // swapAlter(arr, size);
    cout<<endl;
    findUnique(arr, temp, size);
    
    // cout<<endl;
    for(int i=0; i<size; i++) {
        cout<<temp[i];
    }
    return 0;
}