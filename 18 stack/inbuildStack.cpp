#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"Size is "<<s.size()<<endl;
    cout << "Top is" << s.top() << endl;
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}