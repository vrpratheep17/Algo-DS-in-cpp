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


int stringCompare(char str1[],char str2[]){

  
    if(length(str1) != length(str2)) {
        return 1;
    }

    for(int i=0;str1[i] !='\0';i++){
        if(str1[i] != str2[i]) return 1;
    }

    return 0;
}

int main(){ 
    char str1[100];
    char str2[100];

    cout<<"Enter the first string";
    cin.getline(str1,100);
    cout<<"Enter the second string";
    cin.getline(str2,100);
    // cout<<stringCompare(str1,str2);
    if(stringCompare(str1,str2)!=0){
        cout<<"not equal";
    }else{
        cout<<"equal";
    }

    cout<<"Compare using inbuilt function"<<stricmp(str1,str2);


    return 0;
}