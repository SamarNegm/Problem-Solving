#include <iostream>
using namespace std;

class Rational{
private:
int numerator;
int denominator;
void reduce();

public:
Rational();
Rational(int,int);
Rational add(Rational);
Rational subtract(Rational);
Rational multiply(Rational);
Rational divide(Rational);
void printRational();
void printRationalAsFloat();
};


Rational::Rational() {
   numerator = 0;
   denominator = 1;
}

Rational::Rational(int n, int d) {
   numerator = n;
   denominator = d;
   reduce();
}

//--------------------------------- add --------------------------------------
// overloaded +: addition of 2 Rationals, current object and parameter
Rational Rational::add(Rational a) {
   Rational t;
   t.numerator = a.numerator * denominator + (a.denominator * numerator);
   t.denominator = a.denominator * denominator;
   if (denominator != 0) t.reduce();

   return t;
}

//------------------------------ subtract ------------------------------------
// subtraction of 2 Rationals, current object and parameter

Rational Rational::subtract( Rational s) {
   Rational t;

   t.numerator = s.denominator * numerator - (denominator * s.numerator);
   t.denominator = s.denominator * denominator;
   if (denominator != 0) t.reduce();

   return t;
}

//------------------------------ multiply ------------------------------------
// multiplication of 2 Rationals, current object and parameter
Rational Rational::multiply(Rational m) {
   Rational t;

   t.numerator = m.numerator * numerator;
   t.denominator = m.denominator * denominator;
   if (denominator != 0) t.reduce();

   return t;
}
//-------------------------------- divide ------------------------------------
// division of 2 Rationals, current object and parameter,
// division by zero is unreliable
Rational Rational::divide( Rational v) {
   Rational t;

   t.numerator = v.denominator * numerator;
   t.denominator = denominator * v.numerator;
   if (denominator != 0) t.reduce();

   return t;
}
//---------------------------- printRational ---------------------------------
void Rational::printRational() {
   if (denominator == 0)
      cout << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
   else if (numerator == 0)
      cout << 0;
   else
      cout << numerator << "/" << denominator;
}
//------------------------ printRationalAsFloat ------------------------------
void Rational::printRationalAsFloat() {
   if (denominator == 0)
      cout << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
   else
      cout << float(numerator) / float(denominator);
}

//-------------------------------- reduce ------------------------------------
// reduce fraction to lowest terms
void Rational::reduce(){
int largest;
largest=numerator > denominator ? numerator: denominator;
int gcd=0;

for(int loop=2;loop<=largest;loop++){
if(numerator%loop==0 && denominator%loop==0)
gcd=loop;
}

if (gcd!=0)
{
numerator=numerator/gcd;
denominator=denominator/gcd;
}
}


int main(){
Rational x(2,10);
Rational y(4,5);
Rational z;
z=x.add(y);
x.printRational();
 cout<<" + " ;
y.printRational();
cout<<" = " ;
z.printRational();
cout<<endl;
z.printRational(); cout<<"="; z.printRationalAsFloat();






}
