#include<iostream>
using namespace std;

int lastIndexofElement(int arr[],int n,int element){
    if(n==0){
        return -1;
    }
    
    if(arr[n-1]==element){
        return n-1;
    }
    return lastIndexofElement(arr,n-1,element);
}

int main(){
    int arr[]={1,2,2,2,2,2};
    cout<<lastIndexofElement(arr,6,1);
}