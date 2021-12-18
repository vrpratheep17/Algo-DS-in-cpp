#include<iostream>

using namespace std;

int length(string s){
    int count =0;
    int i=0;
    while(s[i] !='\0'){
        i++;
        count ++;
    }
    return count;
}


int main(){
    string s1;
    getline(cin,s1);
    cout<<"Length is "<<length(s1);

    return 0;
}