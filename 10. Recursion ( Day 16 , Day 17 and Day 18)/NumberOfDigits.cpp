#include<iostream>

using namespace std;

int numberOfDigits(int digit){
    // base case
    if(digit<=0){
        return 0;
    }

    return numberOfDigits(digit/10) + 1;


}


int main(){
    cout<<numberOfDigits(555);


    return 0;
}