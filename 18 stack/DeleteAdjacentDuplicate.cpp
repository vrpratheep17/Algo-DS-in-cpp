#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main(){
    stack<char> s;
    string value = "aab";
    

    for (int i = 0; i < value.length();i++){
        
        if(s.empty()){
            s.push(value[i]);
        }else{
            if(s.top()==value[i]){
                s.pop();
            }else{
                s.push(value[i]);
            }
        }
       
    }
  //  cout <<"hello"<< s.empty() << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    

        return 0;
}