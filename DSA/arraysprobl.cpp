//find the numb of pairs in a given array whose sum is less than given number
#include<iostream>
using namespace std;

int main() {

    int arr[] = {1, 3, 6, 7, 8, 9, 10};
    int x = 7, n = 7, count = 0;

    for(int i=0; i<n; i++) {
        for(int j = i+1; j<n; j++) {
            if(arr[i] + arr[j] < x)  {
                count++;
            }
        }
    }
    cout<<endl;
    cout<<"Number of pairs are: "<<count;
    return 0;
}