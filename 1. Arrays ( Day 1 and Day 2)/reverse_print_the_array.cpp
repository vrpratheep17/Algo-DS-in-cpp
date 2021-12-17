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

    cout<<"Printing in normal order";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    cout<<"Printing in reverse order";
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}