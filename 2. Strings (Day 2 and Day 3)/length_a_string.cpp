#include<iostream>
#include<cstring>

using namespace std;

int length(char a[]){
    int count=0;

    for(int i=0;a[i] !='\0';i++){
        count++;
    }

    return count;
}


int main(){
    char a[100];
    cin.getline(a,100);
    cout<<"length is "<<length(a)<<endl;

    //inbuilt function
    cout<<"print using inbuilt function" <<strlen(a);
    return 0;
}