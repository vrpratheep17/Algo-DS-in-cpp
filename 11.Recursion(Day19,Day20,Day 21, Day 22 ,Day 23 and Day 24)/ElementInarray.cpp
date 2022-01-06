#include<iostream>

using namespace std;

bool isElementPresent(int arr[],int n ,int element){
    //base case
    if(n==0){
        return false;
    }
    //recursive case 
    bool smallAns = isElementPresent(arr+1,n-1,element );
    if(arr[0]==element){
        return true;
    }else{
        return smallAns ;
    }
}

bool isElementPresent2(int arr[],int n, int element){
    //base case
    if(n==0){
        return false;
    }

    //recursive case
    bool smallAns=isElementPresent2(arr,n-1,element);
    if(smallAns==true){
        return true;
    }
    else if(arr[n-1]==element){
        return true;
    }else{
        return false;
    }
}

bool isElementPresent3(int arr[],int n, int element,int index){
    //base case
    if(n==index){
        return false;
    }

    //recursive case 
    bool smallAns=isElementPresent3(arr,n,element,index+1);
    if(smallAns){
        return true;
    }
    else if(arr[index]==element){
        return true;
    }else {
        return false;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    if(isElementPresent3(arr,5,2,0)){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }

    return 0;
}