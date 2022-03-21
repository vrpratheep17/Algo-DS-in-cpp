#include<iostream>

using namespace std;

int countWays(int n){
    if(n==1|| n==0){
        return 1;
    }
    return countWays(n - 1) + countWays(n - 2);
}


int countWays2(int n, int k){
    int *dp = new int(n + 1);

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n;i++){
        dp[i] = dp[i - 1]+ dp[i - 2];
    }

    int value;
    for (int i = k; i <0 ;i--){
        value += dp[k];
    }

        return value;
}

int main(){
    cout << countWays(5) << endl;
    cout<<countWays2(5, 2);

    return 0;
}