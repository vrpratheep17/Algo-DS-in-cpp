#include<iostream>

using namespace std;

//static data member can access only static variable

class StaticStudent{
  
    private:
        int age;
        int rollNumber;
    public:
    static int totalStudent;
    StaticStudent(){
        totalStudent++;
    }

    int static getTotalStudent(){
       //throws error because age is of non -static type
       //return age;
        return totalStudent;
    }
    
};

int StaticStudent::totalStudent=0;

int main(){
    cout<<StaticStudent::totalStudent;
    StaticStudent S1,S2,S3,S4,S5;
    cout<<StaticStudent::totalStudent<<endl;
    cout<<S5.getTotalStudent();
    return 0;
}