#include<iostream>
using namespace std;
class Fraction{
  public:
   int num;
   int den;
     Fraction(int num,int den){
        this->num=num;
        this->den=den;
     }

   void display(){
    cout<<num<<"/"<<den<<endl;
   }
     

     Fraction operator+( Fraction f){
        int newNum =this->num*f.den +den*f.num ;
        int newDen = this->den*f.den;
        Fraction ans(newNum, newDen);
        return ans;
     }

   Fraction operator-( Fraction f){
        int newNum =this->num*f.den - den*f.num ;
        int newDen = this->den*f.den;
        Fraction ans(newNum, newDen);
        return ans;
     }
 

    Fraction operator*( Fraction f){
        int newNum =this->num*f.num ;
        int newDen = this->den*f.den;
        Fraction ans(newNum, newDen);
        return ans;
     }
};

int main(){
    
    Fraction f1(1,2);
    Fraction f2(3,8);
    f1.display();
    f2.display();

    //Fraction f3= f1.add(f2);    // we cam even make it like f1+f2 by changing function name add to +
    Fraction f3= f1+f2;
    Fraction f4= f3-f1;
    f4=f1*f2;
    f3.display();
    f4.display();

} 