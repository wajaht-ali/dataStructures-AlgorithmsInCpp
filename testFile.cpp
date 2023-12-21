//This file includes all the test cases (raw code), which required to test the functionality before actual implementation.

#include<iostream>
using namespace std;

bool valid(char ch) {
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ){
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    string str;
    bool flag = false;
    cout<<"enterPrompt: ";
    cin>>str;
    int len = str.size();
    // int len2 = temp.size();

    for(int i=0; i<len; i++) {
        if(valid(str[i]) == 1) {
            flag = true;
        }
        else {
            flag = false;
        }
    }
    if(flag == true) {
        cout<<"stringIsValid"<<endl;
    }
    else {
        cout<<"stringIsInvalid";
    }
    return 0;
}