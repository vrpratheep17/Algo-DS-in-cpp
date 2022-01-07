#include<iostream>

using namespace std;

void replaceChar(char ch[]){
    if(ch[0]=='\0'){
        return;
    }

    if(ch[0]=='a') ch[0]='x';
    replaceChar(ch+1);
}

int main(){
    char ch[]="aabcdea";
    replaceChar(ch);
    cout<<ch;
    return 0;
}