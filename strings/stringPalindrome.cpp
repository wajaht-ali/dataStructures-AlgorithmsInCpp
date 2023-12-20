#include<iostream>
#include<string>
using namespace std;

bool result(string str) {
    int n = str.size();
    int s = 0;
    int e = n -1;

    while(s < e) {
        if(str[s] != str[e]) {
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}
int main() {
    string s = "ALA";
    int oP = result(s);
    if(oP == 1) {
        cout<<"testCasePassed"<<endl;
    }
    else {
        cout<<"testCaseFailed";
    }
    char upperCase = 'A';
    char lower = tolower(upperCase);
    cout<<lower;
    return 0;
}