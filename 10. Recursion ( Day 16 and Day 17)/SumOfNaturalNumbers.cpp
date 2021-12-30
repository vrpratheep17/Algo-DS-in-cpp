
#include <iostream>
using namespace std;

int sumOfNNaturalNumber(int n){
    //base case
    if(n==1){
        return 1; 
    }
     //assumptions
    int smallans = sumOfNNaturalNumber(n-1);
    //calculation
    int ans= n+ smallans;
    return ans;
}


int main() {
    int n=55;
   
    int sum=sumOfNNaturalNumber(n);
    cout<<sum;

    return 0;
}