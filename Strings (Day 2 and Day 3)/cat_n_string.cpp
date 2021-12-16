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

void copy_n_string(char str1[],char str2[], int n)
{
    int length_of_str1=length(str1);
    for(int i=0;i<n;i++){
        str1[i]=str2[i];
    }
}


int main(){
    char str1[100];
    char str2[100];
    cin.getline(str1,100);
    cin.getline(str2,100);
    copy_n_string(str1,str2,2);
    cout<<"after n copy ";
    cout<<"str1 is "<<str1;

    cout<<"After inbuilt function"<<endl;
    strncpy(str1,str2,1);
     cout<<"after n copy ";
    cout<<"str1 is "<<str1;

    return 0;
}