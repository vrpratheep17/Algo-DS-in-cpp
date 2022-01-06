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

int lastIndexofElement2(int arr[],int n,int element, int index){
    if(index==-1){
        return -1;
    }

    if(arr[index] ==element){
        return index;
    }

    return lastIndexofElement2(arr,n,element,index-1);
}

int main(){
    int arr[]={1,2,2,2,2,2};
    cout<<lastIndexofElement(arr,6,1);
}