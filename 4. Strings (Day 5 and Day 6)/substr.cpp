#include<iostream>

using namespace std;

int length(string s){
    int count=0,i=0;

    while(s[i] !='\0'){
        count ++;
        i++;
    }
    return count;
}


string substring(string s , int firstIndex, int secondIndex=0){
    if(secondIndex ==0) secondIndex=length(s);
    string tosend="";
    for(int i=firstIndex;i<=secondIndex;i++){
           tosend.push_back(s[i]);
    }
    return tosend;

}

int main(){
    string s1;
    getline(cin,s1);

    //substring(s1,10,10);
    cout<<substring(s1,2);

    return 0;
}