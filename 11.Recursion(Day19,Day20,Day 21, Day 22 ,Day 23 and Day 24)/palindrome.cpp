#include<iostream>

using namespace std;


bool checkPalindrome(int arr[],int start,int end){
    //base case
    if(start==end-1){
     return true;   
    }
    //recursiv case
     if(arr[start]==arr[end-1]){
        return true && checkPalindrome(arr,start +1,end-1);
    }else{
        return false;
    }
}

int main(){
     int arr[]={1,2,1,4};
   if(checkPalindrome(arr,0,4)){
       cout<<"it's palindrome";
   }else{
       cout<<"not a palindrome";
   }

    return 0;
}

