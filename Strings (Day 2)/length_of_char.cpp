#include<iostream>

using namespace std;

int length(char a[]){
    int count =0;
    for (int i=0;a[i] !='\0';a++){
        count ++;
    }

    return count;
}

int main(){
    char a[100];
    cout<<"Enter your name";
    cin>>a;

    cout<<"The length of the array is"<< length(a);


    return 0;
}