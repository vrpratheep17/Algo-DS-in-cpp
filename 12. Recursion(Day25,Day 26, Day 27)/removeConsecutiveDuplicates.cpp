#include<iostream>
using namespace std;

void removeConsecutiveDuplicates(char ch[]){
    if(ch[0] =='\0') return;

    if(ch[0]==ch[1]){
        for(int i=0;ch[i] !='\0';i++){
            ch[i]=ch[i+1];
        }
    }
   return removeConsecutiveDuplicates(ch+1);
}


int main(){
    char ch[]="aabbcde";
    removeConsecutiveDuplicates(ch);
    cout<<ch;

    return 0;
}