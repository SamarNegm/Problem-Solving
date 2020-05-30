
#include<iostream>
using namespace std;
class birthbay
{
public:
    birthbay(int d,int m,int y);
    void printBD();

private:
    int day;
    int month;
    int year;

};
birthbay::birthbay(int d,int m,int y)
{
day=d;
month=m;
year=y;
}
void birthbay::printBD()
{
    cout<<day<<"  "<<month<<"  "<<year;
}

class people
{
public:
    people(string n,birthbay dt);
    void printPR();
private:
    string name;
    birthbay date;



};
people::people(string n,birthbay dt)
:name(n),
date(dt)
{

}
void people::printPR()
{
    cout<<name<<" BR is at  ";
    date.printBD();
}
int main()
{
    birthbay sBD(6,3,99) ;

    people samar("samar",sBD);
    samar.printPR();



    return 0;


}
/*
#include <iostream>
#include<string>

using namespace std;

class account
{
private:
    int cust_name;
   int  acc_no;
   int acc_type;



public :
    void get_accinfo();
    void display_accinfo();
    account(char  ,int=1 ,int=2000);


};
account::account(char x ,int y,int z)
{
    cust_name='x';
    acc_no=y;
    acc_type=z;
}

void account::get_accinfo()
{
    cout<<"\n\nEnter Customer Name :- ";
    cin>>cust_name;

    cout<<"Enter Account Number :- ";
    cin>>acc_no;

    cout<<"Enter Account Type :- "<<acc_type;

}
int main()
{
    account x;
    x.get_accinfo();
    return 0;
}
*/
