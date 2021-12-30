#include<iostream>
using namespace std;

int fibonaciNumber(int n){
    //base case
    if(n==0) {
        return 0;
    }
    else if (n==1) {
        return 1;
    }
    else {
        //assumptions and calculation
        int smallans=fibonaciNumber(n-2) + fibonaciNumber(n-1);
      return smallans;
    }
}



int main(){
    
    int n;

   cout<<fibonaciNumber(6);
    return 0;
}