#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> Q1;
    Q1.push(4);
    Q1.push(5);
    Q1.push(6);
    Q1.push(7);
    cout << Q1.size() << endl;
    while(!Q1.empty()){
        cout << Q1.front() << endl;
        Q1.pop();
    }
       //4-->5-->6-->7-->4-->

       return 0;
}