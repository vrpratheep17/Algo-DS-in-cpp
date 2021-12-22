#include<iostream>

using namespace std;


class ComplexNumber{
    private:
        int real;
        int Imaginary;
    public:
    ComplexNumber(int real , int Imaginary){
        this->real=real;
        this->Imaginary =Imaginary;
    }
    void print(){

        cout<<"Value is "<<this->real <<" + "<<this->Imaginary<<"i";
    
    }
    void add(ComplexNumber C){
        this->real=this->real + C.real;
        this->Imaginary=this->Imaginary + C.Imaginary;
    }
    void multiply(ComplexNumber C){
        this->real =this->real * C.real - this->Imaginary+ C.Imaginary;
        this->Imaginary=this->real * C.Imaginary + C.real + this->Imaginary;
    }

};


int main(){

    ComplexNumber C1(1,2);
    ComplexNumber C2(2,4);
    // C1.add(C2);
       C1.multiply(C2);
    C1.print();




    return 0;
}