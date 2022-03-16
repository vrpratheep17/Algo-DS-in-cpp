#include<iostream>
#include<queue>

using namespace std;

queue<int> reverseQueue(queue<int> q){
    queue<int> q2;
    int arr[q.size()];

    int temp = q.size();
    for (int i = 0; i < temp;i++){
        arr[i] = q.front();
        q.pop();
    }
    for (int i = temp-1; i >= 0;i--){
        q2.push(arr[i]);
    }

    return q2;
}



int main(){
    queue<int> q1;
    q1.push(5);
    q1.push(4);
    q1.push(3);
    q1.push(2);
    q1.push(1);
    q1=reverseQueue(q1);

    while(!q1.empty()){
        cout << q1.front() << endl;
        q1.pop();
    }
    return 0;
}