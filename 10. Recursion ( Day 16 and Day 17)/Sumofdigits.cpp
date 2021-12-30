#include<iostream>

using namespace std;

int sumOfDigits(int digit){
    //base case
    if(digit<=0){
        return 0;
    }
    int smallans=sumOfDigits(digit/10) + digit%10;

    return  smallans;
}

int main(){
    cout<<sumOfDigits(12345);

    return 0;
}