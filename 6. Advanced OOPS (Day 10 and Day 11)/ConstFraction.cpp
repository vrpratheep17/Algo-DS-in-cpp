#include<iostream>
#include<algorithm>
using namespace std;


class Fraction{
    private:
    int numerator;
    int denominator;
    public:
    Fraction(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    void print() const{
        cout<<"The value is "<<this->numerator<<" / "<<this->denominator;
    }
    void add(Fraction C){
        int lcm=this->denominator * C.denominator;
        int x= lcm/this->denominator;
        int y=lcm/C.denominator;
        this->numerator=x * this->numerator + y* C.numerator;
        this->denominator=lcm;
        simplify();
    }
    void simplify(){
        int minValue=min(this->numerator,this->denominator);
        int gcd=__gcd(this->numerator,this->denominator);
        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;
    }

};


int main(){
    Fraction C1(5,2);
    Fraction C2(10,2);
    Fraction const C3(12,2);
    C1.add(C2);
    C1.print();
    //since it's const so it throws error
    //const can be accessed only via constant variable
    //C3.add(C2);
    C3.print();

    return 0;
}