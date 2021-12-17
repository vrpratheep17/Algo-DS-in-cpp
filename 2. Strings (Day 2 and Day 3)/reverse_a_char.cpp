#include<iostream>

using namespace std;

int length(char a[]){
    int count=0;

    for(int i=0; a[i] !='\0';i++){
        count++;
    }
    return count;
}

void reverse(char a[]){
    int start=0;
    int end =length(a) -1;

    while (start<end){
        a[start]=a[start]^ a[end];
        a[end]=a[start]^a[end];
        a[start]=a[start]^a[end];
        start++;
        end--;
    }
}

int main(){
    char a[100];
    cin.getline(a,12);

    cout<<length(a)<<endl;
    reverse(a);
    cout<<a;
    return 0;
}