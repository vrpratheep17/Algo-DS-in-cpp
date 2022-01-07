#include<iostream>

using namespace std;

void print(char ch[],int index){
//base case
if(ch[index]=='\0'){
    return;
}

cout<<ch[index];
 print(ch,index+1);


}

void reversePrint(char ch[],int n){
    if(n==0){
        return;
    }

    cout<<ch[n-1];
    reversePrint(ch,n-1);
}

int main(){
    char ch[]="hello world";

    print(ch,0);
    cout<<endl;
    reversePrint(ch,sizeof(ch)/sizeof(ch[0]));

    return 0;
}