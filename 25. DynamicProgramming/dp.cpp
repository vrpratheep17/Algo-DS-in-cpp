#include<iostream>
#include<algorithm>
using namespace std;


int findMinSteps2(int n){
    
    int *dp = new int(n + 1);
    dp[0] = 0;
    dp[1] = 0;
    for (int i = 2; i <= n;i++){
       
        int one=INT_MAX, two=INT_MAX, three=INT_MAX;
        if(i%2==0){
            two = 1+ dp[i / 2];
        }
        if(i%3==0){
            three = 1+ dp[i / 3];
        }

         one = 1+ dp[i - 1];
        // cout << min({one, two, three}) << endl;
        dp[i] = min({one, three, two});

    }

    for (int i = 0; i< n+1;i++){
        cout <<"for "<<i<<" vlaue " <<  dp[i] << endl;
    }

       
    return dp[n];
}

// int findMinSteps(int n, int redis[]){
//     if(n==1){
//         return 0;
//     }
    
//     if(redis[n]!=-1){
//         return redis[n];
//     }

//     int three=INT_MAX, two=INT_MAX, one=INT_MAX;
//     if(n%3==0){
//         three = 1 + findMinSteps(n / 3, redis);
//     }
//     if(n%2==0){
//         two = 1 + findMinSteps(n / 2,redis);
//     }
//     one = 1+  findMinSteps(n - 1,redis);

//     redis[n] = min({one, two, three});

//     return min({one, two, three});
// }

int main(){
    // int n;
    // cin >> n;
    // int redis[n];
    // for (int i = 0; i < n+1;i++){
    //     redis[i] = -1;
    // }

     cout << findMinSteps2(11);

    return 0;
}