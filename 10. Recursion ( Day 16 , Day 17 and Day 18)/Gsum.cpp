#include<bits/stdc++.h>
using namespace std;

double gsum(float n, float d, int p){
    //base case
    if(p==0){
        return n;
    }

    //recursive case
    float smallans=gsum(n,d,p-1) ;

    double mul=pow(d,p);
    //calculation
    return smallans + 1/mul;

}

int main(){
    
    cout<<gsum(1,2,3);


    return 0;
}