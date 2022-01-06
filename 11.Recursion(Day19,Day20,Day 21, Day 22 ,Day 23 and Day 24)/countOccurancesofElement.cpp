#include<iostream>

using namespace std;

int countOccuracesOfElement(int arr[],int n, int element){
    //base case
    if(n==0){
        return 0;
    }

    int smallAns=countOccuracesOfElement(arr,n-1,element);

    if(arr[n-1]==element){
        return smallAns +1;
    }
    return smallAns;
}

void countOccuracesOfElement1(int arr[],int n, int element , int index, int &count){
    if(index==n){
        return ;
    }

    if(arr[index]==element){
        count++;
    }

    countOccuracesOfElement1(arr,n,element,index+1,count);

}

int main(){
    
    int arr[]={1,2,3,4,4,4};
    int count=0;

   countOccuracesOfElement1(arr,6,4,0,count);
   cout<<count;


    return 0;
}