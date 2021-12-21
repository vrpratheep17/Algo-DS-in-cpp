#include<iostream>

using namespace std;

class Fraction{
    private:
        int Numerator;
        int Denominator;

    public:
     Fraction(int numerator,int denominator){
        this->Numerator=numerator;
        this->Denominator=denominator;
    }
    void print(){
        cout<<"Fraction is "<<this->Numerator<<" / "<<this->Denominator<<endl;
    }
    void add(Fraction F1){
        int lcm=this->Denominator * F1.Denominator;
        int x=lcm/this->Denominator;
        int y=lcm/F1.Denominator;
        this->Numerator=this->Numerator * x + F1.Numerator *y;
        this->Denominator=lcm;
        simplify();
    };
    void simplify(){
        int minValue=min(this->Numerator, this->Denominator);
        int gcd=1;
        for(int i=1;i<=minValue;i++){
            if(this->Numerator%i==0 && this->Denominator%i==0){
                gcd=i;
            }
        }
        this->Numerator=this->Numerator/gcd;
        this->Denominator=this->Denominator/gcd;
    }
};

int main(){
    Fraction F1(10,2);
    Fraction F2(15,4);
    F1.add(F2);
    F1.print();
    return 0;
}