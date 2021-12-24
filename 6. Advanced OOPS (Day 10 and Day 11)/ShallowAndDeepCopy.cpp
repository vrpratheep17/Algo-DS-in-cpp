#include<iostream>
#include<cstring>
using namespace std;

class Student{
    private:
        int age;
        char *name;

    public:
    Student(int age, char *name){
        this->age =age;
        //shallow copy
        //this->name=name;
        //deep copy
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void print(){
        cout<<"The age is "<< this->age<<endl;
        cout<<"The name is "<<this->name<<endl;
    }
};


int main(){
    int age=23;
    char name[]="Pratheep";
    Student S1(age, name);
    name[3]='p';
    S1.print();


    return 0;
}