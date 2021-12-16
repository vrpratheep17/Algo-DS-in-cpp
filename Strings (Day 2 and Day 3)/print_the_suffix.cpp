#include<iostream>
#include<cstring>

using namespace std;

int main(){
   char a[]="abcd";

    for(int i=0;i<strlen(a);i++)
  {
      for(int j=i;j>=0;j--){
          cout<<a[strlen(a)-1-j];
      }
      cout<<endl;
  }

    return 0;
}