#include<iostream>

using namespace std;


int main(){
    int m,n;
    cout<<"Enter the row value";
    cin>>m;
    cout<<"Enter the column value";
    cin>>n;
    int a[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    //to print the array values
    cout<<"Printing in row wise"<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Printing in column wise"<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}