#include<iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;

    // int i = 0;
    // while(i<n) {
    //     int j = 0;
    //     while(j<n) {
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}