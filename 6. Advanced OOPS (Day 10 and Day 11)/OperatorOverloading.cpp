#include<iostream>

using namespace std;

class Fraction {
    private:
    int numerator;
    int denominator;

    public:
    Fraction (int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }

    void print() const{
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    }
    Fraction operator +(Fraction const &F)const {
        int lcm=this->denominator * F.denominator;
        int x=lcm/this->denominator;
        int y=lcm/F.denominator;

       int n= x * this->numerator + y * F.numerator;
      int d=lcm;
        Fraction fnew(n,d);
        fnew.simplify();
        return fnew;
    }

    Fraction operator *(Fraction const &F)const {
        int n=this->numerator * F.numerator;
        int d=this->denominator * F.denominator;
        Fraction fnew(n,d);
        fnew.simplify();
        return fnew;
    }
    int operator ==(Fraction const &F)const {
        if(this->numerator ==F.numerator && this->denominator == F.denominator){
            return 1;
        }else{
            return 0;
        }
    }

    void simplify(){
        int minValue=(this->numerator,this->denominator);
        int gcd=minValue;
        for(int i=2;i<=minValue;i++){
            if(this->numerator%i ==0 && this->denominator %i==0){
                gcd=i;
            }
        }
  
        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;
    
    }
    
};

int main(){
    Fraction F1(10,2);
    Fraction F2(10,2);
    // add
    Fraction F3=F1 +F2;
    F3.print();
    //multiply
    Fraction F4=F1 +F2;
    F4.print();
    //equal to 
    Fraction F5=F1 +F2;
    if(F5==F3){
        cout<<"Equal to ";
    }
    else{
        cout<<"Not equal to";
    }
    return 0;
}