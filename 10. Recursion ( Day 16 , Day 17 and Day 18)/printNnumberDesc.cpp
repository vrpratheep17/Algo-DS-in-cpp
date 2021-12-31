#include<iostream>

using namespace std;

void printNnumber(int n=0){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printNnumber(n-1);
    return;
};

int main(){
    printNnumber(5);
    return 0;
}