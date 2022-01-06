#include<iostream>

using namespace std;

void printAllpositionofElement(int arr[],int n,int element){
    //base case
    if(n==-1){
        return;
    }
        if(arr[n-1] ==element){
            cout<<n-1<<endl;
        }
        printAllpositionofElement(arr,n-1,element);
    
}

void printAllpositionofElement1(int arr[],int n,int element,int index){
    //base case
    if(index ==n){
        return;
    }
    
       if(arr[index]==element){
            cout<<index<<endl;
        }

 printAllpositionofElement1(arr,n,element,index+1);

}


int main(){
    int arr[]={1,2,3,4,4,4};
    printAllpositionofElement(arr,6,4);

    return 0;
}