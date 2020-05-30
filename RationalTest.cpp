#include "Rational.h"
#include <iostream>
using namespace std;

int main(){

	Rational r1(3,4);
	r1.print();
	r1.printFloat();
	cout << "=============================" <<std::endl;

	Rational r2(5,6);
	r2.print();
	r2.printFloat();
	cout << "=============================" <<std::endl;

	cout <<"The addition is: " << std::endl;
	Rational ans = r1.add(r2);
	ans.print();
	ans.printFloat();
	cout << "=============================" <<std::endl;

	cout <<"The subtraction is: " << std::endl;
	ans = r1.sub(r2);
	ans.print();
	ans.printFloat();
	cout << "=============================" <<std::endl;

	cout <<"The multiplication is: " << std::endl;
	ans = r1.mult(r2);
	ans.print();
	ans.printFloat();
	cout << "=============================" <<std::endl;

	cout <<"The division is: " << std::endl;
	ans = r1.divide(r2);
	ans.print();
	ans.printFloat();
	cout << "=============================" <<std::endl;

	system("pause");
};
