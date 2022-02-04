#include<iostream>


using namespace std;

// void printSubsequences(string input , string output=""){
//     //base case
//     if(input.length()==0){
//         cout<<output<<endl;
//         return;
//     }

//     //exclude
//     printSubsequences(input.substr(1),output);
//     //include
//     printSubsequences(input.substr(1),output + input[0]);

// }

void printSubsequences2(char input[], char output[],int i){
    //base case
    if(input[0]=='\0'){
        output[i]='\0';
        cout<<output<<endl;
        return;
    }


    //exclude
     
    printSubsequences2(input+1,output,i);

    //include
   output[i]=input[0];
    printSubsequences2(input+1,output,i+1);
}


int main(){ 

    char s1[10];
    cin>>s1;
    char ouput[100];
    printSubsequences2(s1,ouput,0);
    return 0;
}