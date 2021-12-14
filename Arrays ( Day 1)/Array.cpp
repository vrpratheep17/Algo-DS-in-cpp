#include<iostream>

using namespace std;

// arrays are stored in consecutive memory location
// the pointer point to the first location of the array
// can store values of same data type 
// can be distingueshed by index number


int main(){
    //array decleration
    int a[10]; // where all contains garbage values
    for(int i=0;i<10;i++){
        cout<<a[i]<<" "; 
    }

    cout<<endl;
    int b[10]={0};
    // b array doesn't contain garbage values
    for(int i=0;i<10;i++){
        cout<<b[i]<<" ";
    }


    cout<<endl;
    int c[10];
    for(int i=0;i<10;i++){
        c[i]=i*i;
    }
    //c array does not contain garbage values
    for(int i=0;i<10;i++){
        cout<<c[i]<<" ";
    }

    //returns the size of variable
    cout<<sizeof(c)<<endl;
    //return the content length of the variable
    cout<<sizeof(c)/sizeof(c[0]);

    //int d[]; //throws error because array need the quantity value it gonna store. 
    
    return 0;
}