#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> vect;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        vect.push_back(element);
    }
    sort(vect.begin(),vect.end());

    for(auto i:vect){
        cout<<i<<" ";
    }
}