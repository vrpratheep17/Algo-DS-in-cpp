#include<iostream>

using namespace std;

int lengthOfChar(char ch[]){
    //base case
    if(ch[0]=='\0'){
        return 0;
    }

    
  
    return 1+ lengthOfChar(ch+1);;
}


int main(){
    char ch[]="abcd";
    cout<<lengthOfChar(ch);
}