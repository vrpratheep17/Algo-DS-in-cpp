#include<iostream>
using namespace std;

int power(int n, int p){
    //base case
    if(p==1){
        return n;
    }

    //assumption
    int smallans= power(n,p-1);
    //calculation
    int ans = n* smallans;
    return ans;
};


int main(){
    int n,p;
    cout<<"Enter number ";
    cin>>n;
    cout<<"Enter power ";
    cin>>p; 
    cout<<power(n,p);
    return 0;
}