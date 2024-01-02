#include<iostream>
#include<queue>
using namespace std;

int main() {
    // creating queue using STL:
    queue<int> q;
    q.push(3);
    q.push(4);
    cout<<"Front is: "<< q.front() <<endl;
    q.pop();
    cout<<"Size of queue is: "<<q.size()<<endl;
    cout<<"Is empty? "<<q.empty()<<endl;
    return 0;
}