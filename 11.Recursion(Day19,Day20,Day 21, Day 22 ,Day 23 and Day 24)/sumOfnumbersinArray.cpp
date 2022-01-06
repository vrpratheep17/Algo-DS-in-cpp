#include<iostream>
using namespace std;

int SumofArray(int arr[],int n){
    //base case
    if(n==0){
        return 0;
    }

    //recursive case
    int smallans=SumofArray(arr+1,n-1);

    int ans=smallans + arr[0];

    return ans;

}

int SumofArray2(int arr[],int n){
    if(n==0){
        return 0;
    }

    //recursive case
    int smallans=SumofArray2(arr,n-1);

    int ans=smallans + arr[n-1];
    return ans;

}

int SumofArray3(int arr[],int n,int i){
    if(n==i){
        return 0;
    }

    //recursive case
    int smallAns=SumofArray3(arr,n,i+1);

    return arr[i] +smallAns;
}

int main(){
    int arr[]={1,2,3,4,5};
    cout<<SumofArray3(arr,5,0);
    return 0;
}