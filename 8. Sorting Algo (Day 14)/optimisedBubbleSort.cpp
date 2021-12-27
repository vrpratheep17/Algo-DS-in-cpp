#include<iostream>
#include<vector>

using namespace std;

void BubbleSort(vector<int> &arr , int n){
    

    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]> arr[j+1]){
                flag=1;
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
        }
        if(flag==0){
            break;
        }
    }



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
    BubbleSort(arr,n);

    for(auto i:arr){
        cout<<i<<" ";
    }


    return 0;
}