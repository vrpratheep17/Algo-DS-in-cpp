#include<iostream>

using namespace std;

class Student{
    public:
     Student(){
        cout<<"Constructor Called"<<endl;
    }

    //parameterised constructor
     Student(int a){
        cout<<"Parameterised constructor called"<<endl;
    }
    public:
        int rollNumber;
    private:
        int age;
    public:
    void updateAge(int a){
        this->age=a;
    }
    int getAge(){
        return this->age;
    }
};