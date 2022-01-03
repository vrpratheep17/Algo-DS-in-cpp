#include<iostream>

using namespace std;

bool isSorted(int arr[],int n){
    //base case
    if(n==0 || n==1){
        return true;
    }

    if(arr[0] >arr[1]){
        return false;
    }

    //recursive case
    int smallans=isSorted(arr+1,n-1);
    return smallans;

}

bool isSorted2(int arr[],int n){
    //base case
    if(n==0||n==1){
        return true;
    }
    
    //recursive case 
    int smallans=isSorted2(arr+1,n-1);

    if(arr[0]>arr[1]){
        return false;
    }
    return true;
}

bool isSorted3(int arr[],int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[n-1] < arr[n-2]){
        return false;
    }

    int smallans=isSorted3(arr,n-1);
    return smallans;
}

int main(){
    int arr[]={11,2,333,4,55};
    cout<<isSorted3(arr,5);
    return 0;
}