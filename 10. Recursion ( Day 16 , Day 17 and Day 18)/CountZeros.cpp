#include<iostream>

using namespace std;

int countZeros(int n){
    //base case 
    if(n==0){
        return 0;
    }
    //recursive case
    int smallans=countZeros(n/10);
    //calculation
    int lastDigit=n%10;
    if(lastDigit==0){
        return smallans +1;
    }else{
        return smallans;
    }
}

int main(){
    cout<<countZeros(2002);
    return 0;
}
