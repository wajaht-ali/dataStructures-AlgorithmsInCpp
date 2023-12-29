#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0, end = size - 1;

    // int mid = (start + end)/2;  if (start + end) > than the range of int (2^32-1) then we can say
    int mid = start + (end - start)/2;

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }
        //Agr mid nhi equal to?
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }

    return -1;
}
int main() {
    int even[4] = {1, 1, 1, 2};
    int odd[7] = {1, 5, 9, 10, 11, 15, 17};

    int index = binarySearch(even, 4, 1);
    cout<<"Index of 1 is: "<< index <<endl;

    // index = binarySearch(odd, 7, 17);
    // cout<<"Index of 17 is: "<< index <<endl;
    return 0;
}