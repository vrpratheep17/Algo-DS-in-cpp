#include<iostream>

using namespace std;

int length(char ch[]){
    if(ch[0] =='\0'){
        return 0;
    }


   return 1+ length(ch+1);

}

int convertStringToInt(char ch[],int n){
    if(ch[n-1] =='\0' ) return 0;

    int smallAns=convertStringToInt(ch,n-1);
    int ans=ch[n-1] -'0';
    return smallAns * 10 + ans;


}


int main(){
    char ch[]="123";
    cout<<length(ch)<<endl;
    cout<<convertStringToInt(ch,length(ch));


    return 0;
}