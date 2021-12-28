#include<bits/stdc++.h>

using namespace std;

int BinarySearch(vector<int> arr,int key){

    int s=0 , e=arr.size() -1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid] <key){
            s=mid+1;
        }else {
            e=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int key;
    cout<<"Enter the key ";
    cin>>key;

    int pos =BinarySearch(arr,key);
    if(pos==-1){
        cout<<"Element not found ";
    }else{
        cout<<"Element found at index " <<pos;
    }
    return 0;
}