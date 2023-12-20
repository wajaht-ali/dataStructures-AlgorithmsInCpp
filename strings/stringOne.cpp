#include<iostream>
using namespace std;

int getLength(char name[]) {
    int counter = 0;
    for(int i=0; name[i] != '\0'; i++) {
        counter++;
    }
    return counter;
}
void reverse(char name[], int n) {
    int s=0;
    int e=n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int main() {
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<endl;
    int len = getLength(name);

    cout<<"Your name is: " << name << " and it's length is: "<< len << endl;

    reverse(name, len);
    return 0;
}