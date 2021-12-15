// #include<iostream>

// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter the value of a";
//     cin>>a;
//     cout<<"Enter the value of b";
//     cin>>b;
//     cout<<"Values before swapping "<<"a= " <<a<<" b= "<<b<<endl;

//     int temp=a;
//     a=b;
//     b=temp;
//     cout<<"Values after swapping "<<"a= " <<a<<" b= "<<b;

//     return 0;
// }

// method 2
#include<iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of a";
    cin>>a;
    cout<<"Enter the value of b";
    cin>>b;
    cout<<"Values before swapping "<<"a= " <<a<<" b= "<<b<<endl;

    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"Values after swapping "<<"a= " <<a<<" b= "<<b;

    return 0;
}