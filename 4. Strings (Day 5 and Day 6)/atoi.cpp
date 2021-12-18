#include<iostream>

using namespace std;

int atoi(string S1){
   
    int tosend=0;

    for(int i=0;i<S1.length();i++){
        tosend=tosend * 10+(int(S1[i])-48);
    }
    return tosend;
}

int main(){

    string S1="12345";

   cout<<atoi(S1);

    return 0;
}