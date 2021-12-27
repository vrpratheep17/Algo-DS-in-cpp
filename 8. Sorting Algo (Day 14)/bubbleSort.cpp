#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        int j=0;
        while(j<n-1){
            if(arr[j]> arr[j+1]){
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
            j++;
        }
    }
    
   
}


int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    bubbleSort(arr,n);
     for(auto i: arr){
        cout<<i<< " ";
    }
    return 0;
}