#include<iostream>
#include<vector>
using namespace std;


int main(){ 
    vector<int> v1;
    cout<<"The size of v1 is "<<v1.size()<<endl;
    for(int i=0;i<10;i++){
        v1.push_back(i+1);
    }
    cout<<"After update"<<endl;
    cout<<"The size of v1 is "<<v1.size()<<endl;
    cout<<"The capacity of v1 is "<<v1.capacity()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i];
    }
    cout<<endl;
    cout<<"The first element is "<<v1.front()<<endl;
    v1.pop_back();
    cout<<"The last element is "<<v1.back()<<endl;
    cout<<"At index 6 "<<v1.at(3);

    return 0;
}