#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string e1[5] = {"4","13","5","/","+"};
    stack<string> s;
    //
    for (int i = 0; i < sizeof(e1)/sizeof(e1[0]);i++){
        
        if(e1[i]=="/" || e1[i]== "*" ||e1[i]=="+" ||e1[i]=="-"){
            string a = s.top();
            s.pop();
            string b = s.top();
             s.pop();
            int c;
             if(e1[i]=="/"){
                c = stoi(b) / stoi(a);
             }
             else if(e1[i]== "*"){
                  c = stoi(b) * stoi(a);
             }
             else if(e1[i]=="+" ){
                 c = stoi(b) + stoi(a);
             }
             else if(e1[i]=="-"){
                c = stoi(b) - stoi(a);
             }
             cout << "value is " << c << endl;
        s.push(to_string(c));
        }
        else{
            
            s.push(e1[i]);
        }
    }

    cout << s.top() << endl;

    return 0;
}   