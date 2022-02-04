#include<iostream>

using namespace std;

int partition(int arr[],int s, int e){
    int pivot = arr[e];
    int count = 0;
    for (int i = 0; i <= e;i++){
        if(arr[i]<pivot)
            count++;
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[e]);
    int i = s, j = e;
    while(i<pivotIndex &&j>pivotIndex){
        if(arr[i] > arr[j]){
            if(arr[j]<arr[pivotIndex]){
                swap(arr[i], arr[j]);
              
            }
        }
          j--;
          i++;
    }
    return pivotIndex;
}


//method 2 
int partition2(int arr[],int s, int e){
    int pivot = arr[e];
    int i = s, j = s;
    for (int j = s; j <= e-1;j++){
        if(arr[j]<pivot){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[e], arr[i]);
    return i;
}
void quick_sort(int arr[],int s, int e){
    if(s>=e){
        return;
    }
    int p = partition2(arr, s, e);
    quick_sort(arr, s, p - 1);
    quick_sort(arr, p + 1, e);
}


int main(){
       int arr[] = {2,1,3,4,5,90,8};
    quick_sort(arr, 0, sizeof(arr) / sizeof(arr[0])-1);

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++){
        cout << arr[i] << endl;
    }

    return 0;
}