#include<iostream>
using namespace std;

int firstIndexofElement(int arr[],int n,int element,int index=0){
//base case
if(n==index){
    return -1;
}

if(arr[index]==element) {
    return index;
}

int ans= firstIndexofElement(arr,n,element,index+1);
return ans;
}

int main(){
    int arr[]={1,3,3,2,2,2};
    cout<<firstIndexofElement(arr,6,1);
    return 0;
}
