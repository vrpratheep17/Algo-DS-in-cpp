#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> arr,int n){
        int pivotIndex=0;
        for(int i=0;i<n-2;i++){
            int smallestIndex=i;
            for(int j=i;j<n;j++){
                if(arr[smallestIndex] > arr[j]){
                    smallestIndex=j;
                }
            }
            if(arr[smallestIndex]<arr[i]){
                arr[i]=arr[i]^arr[smallestIndex];
                arr[smallestIndex]=arr[i]^arr[smallestIndex];
                arr[i]=arr[i]^arr[smallestIndex];
            }
        }

        //to print
        for(auto i:arr){
            cout<<i<<" ";
        }
}


int main(){
    int n;
    cin>>n;
    vector<int> vect;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        vect.push_back(element);
    }
    selectionSort(vect, n);

    return 0;
}