#include<iostream>

using namespace std;

void mergeArray(int x[],int y[],int a[],int s , int e){
    int k = s,    i = s;
    int mid = (s+e) / 2;
    int j = mid + 1;
    while(i<=mid && j<=e){
        if(x[i]>y[j]){
            a[k] = y[j];
            j++;
            k++;
        }else{
            a[k] = x[i];
            i++;
            k++;
        }
    }

    while(i<=mid){
        a[k] = x[i];
        i++;
        k++;
    }
    while(j<=e){
        a[k] = y[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }

    int x[1001];
    int y[1001];
    int mid = (s + e) / 2;

    for (int i = 0; i <= mid;i++){
        x[i] = arr[i];
       
    }
    for (int i = mid + 1; i <= e;i++){
        y[i] = arr[i];
    }
        mergeSort(x, s, mid);
    mergeSort(y, mid+1, e);
    mergeArray(x, y, arr, s, e);
}

int main(){
    int arr[] = {4,1,3,7,8,9};
    mergeSort(arr, 0, sizeof(arr) / sizeof(arr[0])-1);

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++){
        cout << arr[i] << endl;
    }
        return 0;
}