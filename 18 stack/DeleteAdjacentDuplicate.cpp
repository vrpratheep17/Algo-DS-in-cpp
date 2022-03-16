#include<iostream>
#include<stack>
#include<string>
#include <bits/stdc++.h>
using namespace std;


int main(){
    stack<char> s;
    string value = "abcd";
    

    for (int i = 0; i < value.length();i++){
        
        if(s.empty() || s.top() !=value[i]){
            s.push(value[i]);
        }else{
                s.pop();
        }
       
    }
  //  cout <<"hello"<< s.empty() << endl;
    string toPrint;
    while (!s.empty())
    {
        toPrint.push_back(s.top());
        s.pop();
    }
    reverse(toPrint.begin(), toPrint.end());
    cout <<toPrint  << endl;

    return 0;
}