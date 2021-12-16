#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[]="abcd";

    for(int e=0;e<strlen(a);e++){
        for(int s=0;s<=e;s++){
            cout<<a[s];
        }
        cout<<endl;
    }
    return 0;
}