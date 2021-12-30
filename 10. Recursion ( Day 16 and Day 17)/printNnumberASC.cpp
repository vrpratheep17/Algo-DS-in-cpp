#include<iostream>

using namespace std;

void printNnumber(int n){
    if(n==0){
        return;
    }
    printNnumber(n-1);
    cout<<n<<endl;

}

int main(){

    printNnumber(5);

    return 0;
}