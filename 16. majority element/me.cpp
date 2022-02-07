#include<iostream>

using namespace std;

int main(){
    int arr[] = {3,2,3};
    int cond = arr[0];
    int count = 1;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++){
        if(cond==arr[i]){
            count++;
        }
        else{
            count--;
            if(count==0){
                cond = arr[i];
                count++;
            }
        }
    }
    cout << "The majority element is " << cond;
    return 0;
}