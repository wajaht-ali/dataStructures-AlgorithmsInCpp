#include<iostream>
#include<string>
using namespace std;
bool result(char arr[], int n) {
    int str = 0;
    int end = n-1;

    while(str < end) {
        if(arr[str] != arr[end]) {
            return 0;
        }
        else {
            str++;
            end--;
        }
    }
    return 1;
}

int main() {
    char arr[5] = {'a', 'c', 'c', 'b', 'a'};
    int len = sizeof(arr);
    cout<<len<<" "<<sizeof(arr)<<" "<<sizeof(arr[0])<<" "<<sizeof(arr) / sizeof(arr[0])<<endl;
    cout<<"Is palindrome? "<<endl;
    int oP = result(arr, len);

    if(oP == 1) {
        cout<<"testCasePassed"<<endl;
    }
    else {
        cout<<"testCaseFailed"<<endl;
    }
    return 0;
}