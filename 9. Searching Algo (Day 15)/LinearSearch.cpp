#include<bits/stdc++.h>

using namespace std;

int linearSearch(vector<int> const &arr, int key) {
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
};

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    cout<<"Enter key to find ";
    int key;
    cin>>key;

    int pos=linearSearch(arr,key);
    if(pos==-1){
        cout<<"Element not found";
    }else{
        cout<<"Element found at index "<<pos;
    }


    return 0;
}