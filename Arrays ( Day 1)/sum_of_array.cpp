#include<iostream>
using namespace std;

int main(){ 
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //sum the number
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=a[i];
    }

    cout<<sum;


    return 0;

}