#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    int I1=123;
   // cin>>s1;
    getline(cin,s1);
    s1.push_back(' -signature');
    cout<<s1<<endl;
    cout<<"The value is"<<s1<<endl;
    cout<<"The length of string is "<<s1.length()<<endl;
    cout<<"Substring from index 2"<<s1.substr(2)<<endl;
    cout<<"Substring from index 2 to 3"<<s1.substr(2,3)<<endl;
    cout<<"Interger conversion "<<atoi(s1.c_str())<<endl;
    cout<<"String conversion"<<to_string(I1);

    return 0;
}