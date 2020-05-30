#include "Rational.h"
#include <iostream>
#include <iomanip>
using namespace std;




int* Rational::reducedForm(int num, int denom){
    //first get the GCD for a and b
     int a = num, b = denom, c;
	 int* ans = new int[2];          //array created on heap
      while ( a != 0 ) {
         c = a; a = b%a;  b = c;
      }
	  //then reduce
      ans[0]= num/b;    //reduced numerator
	  ans[1]= denom/b;  //reduced denominator
	  return ans;
}


Rational::Rational(int anum, int adenom){
	int * reduced = reducedForm(anum, adenom);
	num = reduced[0];
	denom = reduced[1];
	delete reduced;                //delete the array that was on the heap (garbage collect)
}

Rational Rational::add(const Rational & r2)//read as result = (this + arg)
{
	int numerator = (num * r2.denom) + (r2.num * denom);
	int denominator = denom * r2.denom;
	Rational sum(numerator, denominator);
	return sum;
}

Rational Rational::sub(const Rational & r2) //read as result = (this - arg)
{
	int numerator = (num * r2.denom) - (r2.num * denom);
	int denominator = denom * r2.denom;
	Rational sum(numerator, denominator);
	return sum;

}
Rational Rational::mult(const Rational & r2) //read as result = (this * arg)
{
	int numerator = (num * r2.num);
	int denominator = denom * r2.denom;
	Rational sum(numerator, denominator);
	return sum;
}

Rational Rational::divide(const Rational & r2) //read as result  (this / arg)
{
	int numerator = num * r2.denom;
	int denominator = denom * r2.num;
	Rational sum(numerator, denominator);
	return sum;
}
void Rational::print()
{
	cout<< num<<"/" << denom << endl;
}

void Rational::printFloat()
{
	double f = (double) num/denom;
	cout<<fixed <<setprecision(3) << f << endl; // fixed point notation
}
