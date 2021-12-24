#include<iostream>

using namespace std;

class Student{
    private:
        int age;
        const int rollNumber;
        int &x;

    public:
        Student(int age, int rollNumber): age(age),rollNumber(rollNumber), x(this->age){
        }
    void print(){
        cout<<"The age is "<<this->age<<endl;
        cout<<"The rollNumber is "<<this->rollNumber<<endl;
        cout<<"The X is "<<this->x<<endl;
    }
};

int main(){
    Student S1(1,2);
    S1.print();
    return 0;
}
