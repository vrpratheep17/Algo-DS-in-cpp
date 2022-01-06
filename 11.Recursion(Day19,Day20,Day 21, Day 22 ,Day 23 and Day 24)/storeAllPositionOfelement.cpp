#include<iostream>
#include<vector>
using namespace std;

void storePositionOfElement(int arr[],int n,int element, vector<int> &vect){
    if(n==0){
        return;
    }
    if(arr[n-1]==element){
        vect.push_back(n-1);
    }
    storePositionOfElement(arr,n-1,element,vect);
}

int main(){
    int arr[]={1,5,5,6,7,5};
    vector<int> vect;
    storePositionOfElement(arr,6,5,vect);
    
    for(auto i:vect){
        cout<<i<<endl;
    }

    return 0;
}