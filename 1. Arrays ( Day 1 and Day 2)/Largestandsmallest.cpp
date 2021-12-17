#include<iostream>

using namespace std;


int main(){
    int n;
    cout<<"Enter the length of array";
    cin>>n;
    int a[n];


    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int largest=INT_MIN; //-INFINITY
    int smallest =INT_MAX; //INFINITY
    for(int i=0;i<n;i++){
        if(a[i] > largest)
        largest=a[i];

        if(a[i]<smallest)
        smallest=a[i];
    }



    cout<<"The largest number is "<<largest;
    cout<<"The smallest number is "<<smallest;
    

    return 0;
}