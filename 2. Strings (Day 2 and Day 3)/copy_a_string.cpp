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


void copy_a_string(char a[],char b[]){
    for(int i=0;i<length(b)+1;i++){
        a[i]=b[i];
    }
}


int main(){
    char str1[100];
    char str2[100];
    cin.getline(str1,100);
    cin.getline(str2,100);
    cout<<"String before copy"<<endl;
    cout<<"str1 "<<str1<<endl;
    cout<<"str2 "<<str2<<endl;
    copy_a_string(str1,str2);
    cout<<"String after copy"<<endl;
    cout<<"str1 "<<str1<<endl;
    cout<<"str2 "<<str2<<endl;

    // cout<<"copy using inbuilt function";
    // strcpy(str1,str2);
    // cout<<"String after copy"<<endl;
    // cout<<"str1 "<<str1<<endl;
    // cout<<"str2 "<<str2<<endl;



    return 0;
}