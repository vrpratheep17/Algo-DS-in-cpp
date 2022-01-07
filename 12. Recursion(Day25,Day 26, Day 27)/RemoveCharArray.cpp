#include<iostream>

using namespace std;

void removeChar(char ch[]){
//base case
if(ch[0]=='\0') return;
//recursive case
if(ch[0]!='a') {
    removeChar(ch+1);
}else{
    for(int i=0;ch[i] !='\0' ;i++){
        ch[i]=ch[i+1];
    }
    removeChar(ch+1);
}

removeChar(ch+1);

}

int main(){
char ch[]="pratheep alien";
removeChar(ch);
cout<<ch;
}
