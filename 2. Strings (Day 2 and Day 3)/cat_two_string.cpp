#include<iostream>
#include<cstring>

using namespace std;

int length(char a[]){
    int count=0;
    for(int i=0;a[i] !='\0';i++){
        count ++;
    }
    return count;
}


void string_cat(char str1[],char str2[]){
    int length_of_str1=length(str1);
  for(int i=0;i<=length(str2);i++){
      cout<<str2[i]<<endl;
       str1[length_of_str1+i]=str2[i];
  }
}


int main(){
    char str1[100];
    char str2[100];
    cin.getline(str1,100);
    cin.getline(str2,100);
string_cat(str1,str2);
cout<<"After concat " <<str1;

cout<<"using inbuilt function";
strcat(str1,str2);
cout<<"After concat " <<str1;



    return 0;
}