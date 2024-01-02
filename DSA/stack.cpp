#include<iostream>
#include<stack>
using namespace std;

//we can use stack directly form "STL", but we can also implement of our own. The STL approach some specific functions of stack like push, pop, isEmpty, top, emplace, and like other also.
int main() {
    stack <int> s;
    s.push(2);
    s.push(4);
    cout<<"printing stack: "<<s.top();
    return 0;
}