#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string p = "({[}]})";

    stack<char> s;

    bool status = true;

    for (int i = 0; i < p.length();i++){
        if(p[i]=='(' || p[i]=='{' || p[i]=='['){
            s.push(p[i]);
        }else{
            if(s.empty())
                status = false;
            else{
                if(p[i]==')'){
                    if(!s.top()=='(')
                        status = false;
                    else
                        s.pop();
                }
                if(p[i]==']'){
                    if(!s.top()=='[')
                        status = false;
                    else
                        s.pop();
                }
                if(p[i]=='}'){
                    if(!s.top()=='{')
                        status = false;
                    else
                        s.pop();
                }
            }
        }
    }

    if(!s.empty()){
        status = false;
    }

    cout << "Status is " << status;
   
    return 0;
}