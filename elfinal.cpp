#include<iostream>
#include <iomanip>
#include <stdexcept>
#include<string>
using namespace std;
class employee
{
private :
    string fristName;
    string lastName;
    double salary;
public:

    void setfrist(string );
    void setlast(string );
    void setsalary(double );
    string getfrist();
    string getlast();
    double getsalary();

    void emplyeetest();
    void display();
    employee();


};
employee::employee()
{
    void setfrist(string);
    void setlast(string);
}

void employee::setfrist(string x)
{
    fristName=x;
}
void employee::setlast(string y)
{
    lastName=y;
}
void employee::setsalary(double z)
{
    if (salary>0)
    {


        salary =z;
    }
   if(salary<0)
    {


        throw invalid_argument("cant be");
    }
}
string employee::getfrist()
{
    return fristName;
}
string employee::getlast()
{
    return lastName;
}
double employee ::getsalary()

{

    return salary ;
}
void employee::emplyeetest()
{
    cout<<"the yearly salary = "<<salary*12<<endl;
    display();
    cout<<endl;
    cout<<" after raisr = "<<(salary*0.1)+salary;

}
void employee::display()
{
    cout<<salary;
}

int main()
{
    employee x;
    x.setsalary(1000);
    x.emplyeetest();



    return 0;
}
