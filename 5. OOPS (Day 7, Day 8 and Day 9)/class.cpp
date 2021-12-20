#include<iostream>
#include"student.cpp"

using namespace std;

int main(){
    //static variable
    Student S1;
    //dynamic variable and parameterised constructor
    Student *S2 =new Student(12);
    //updating class variables
    S1.rollNumber=23;
    S2->rollNumber=23;

    //print class variables
    cout<<"Print from static decleration"<<S1.rollNumber<<endl;
    cout<<"Print from dynamic decleration"<<S2->rollNumber<<endl;

    //update private data
    S1.updateAge(22);
    S2->updateAge(23);

    //get private data
    cout<<"Print from static decleration private data"<<S1.getAge()<<endl;
    cout<<"Print from dynamic decleration private data"<<S2->getAge()<<endl;

    return 0;
}