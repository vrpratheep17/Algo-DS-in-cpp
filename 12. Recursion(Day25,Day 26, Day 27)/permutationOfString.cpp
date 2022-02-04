#include<iostream>

using namespace std;

void permutate(char str[],int index){
    if(str[index]=='\0'){
        cout << str << endl;
        return;
    }

    for (int i = index; str[i] != '\0';i++){
        swap(str[index], str[i]);
        permutate(str, index + 1);
        swap(str[index], str[i]);
    }
}


int main(){

    char str[] = "abc";
    permutate(str, 0);

    return 0;
}