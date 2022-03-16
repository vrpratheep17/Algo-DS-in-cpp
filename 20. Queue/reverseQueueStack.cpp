#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(){
    stack<int> s1;
    queue<int> q1;

    q1.push(5);
    q1.push(4);
    q1.push(3);
    q1.push(2);
    q1.push(1);

    while(!q1.empty()){
        s1.push(q1.front());
        q1.pop();
    }
    while(!s1.empty()){
        q1.push(s1.top());
        s1.pop();
    }
    while(!q1.empty()){
        cout << q1.front() << endl;
        q1.pop();
    }
}