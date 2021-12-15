#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the length of the array";
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int start=0, end=n-1;

    while(start<=end){
        a[start]=a[start]^a[end];
        a[end]=a[start]^a[end];
        a[start]=a[start]^a[end];

        start++;
        end--;
    }

    cout<<"After reversing the array";

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}