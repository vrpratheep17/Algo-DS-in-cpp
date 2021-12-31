#include<iostream>

using namespace std;


int multiply (int m , int n){
    //base case
    if(n==1){
        return m;
    }
    //recursive case
    int smallans = multiply(m, n-1);

    int ans=smallans + m;
    return ans;

}



int main(){

    cout<<multiply(5,3);

    return 0;
}