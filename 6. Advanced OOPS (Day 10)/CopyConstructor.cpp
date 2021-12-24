#include<iostream>
#include<cstring>
using namespace std;
class Student{
    private:
        int age;
    public:
        char *name;
    Student (Student const &S){
        this->age=S.age;
       
        this->name=new char[strlen(S.name)+1];
        strcpy(this->name,S.name);
    }
    Student(int age , char *name){
        this->age=age;
        this->name=name;
    }
   
   void print(){
        cout<<"The age is "<<this->age;
        cout<<"The name is "<<this->name;
    }
};

int main(){
    int age =25;
    char name[]="Ninja";
    Student S1(age,name);
    Student S2=S1;
    name[3]='P';
    S2.print();
    return 0;
}