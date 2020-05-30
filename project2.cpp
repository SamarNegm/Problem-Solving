#include <iostream>
#include <conio.h>
#include<string>
using namespace std;

class account
{
private:
    string cust_name;
   int  acc_no;
   string acc_type;



public :
    void get_accinfo(string ,int ,string);
    void display_accinfo();
    account(string x,int y,string z);


};
account::account(string x,int y,string z)
{
    cust_name=x;
    acc_no=y;
    acc_type=z;
}

class cur_acct : public account
{
private:
    static float balance;
public:
    void disp_currbal();
    void deposit_currbal();
    void withdraw_currbal();

};
class sav_acct : public account
{
    static float savbal;
public :
    void disp_savbal();
    void deposit_savbal();
    void withdraw_savbal();
};
float cur_acct :: balance;
float sav_acct  :: savbal;


void account::get_accinfo(string x ,int y,string z)
{
    cout<<"\n\nEnter Customer Name :- ";
    cin>>cust_name;
    cout<<"Enter Account Number :- ";
    cin>>acc_no;
    cout<<"Enter Account Type :- ";
    cin>>acc_type;
}
void account::display_accinfo()
{
    cout<<"\n\nCustomer Name :- "<<cust_name;
    cout<<"\nAccount Number :- "<<acc_no;
    cout<<"\nAccount Type :- "<<acc_type;
}
void cur_acct::deposit_currbal()
{
    {
        float deposit;
        cout<<"\nEnter amount to Deposit :- ";
        cin>>deposit;
        balance = balance + deposit;
    }
}
void cur_acct::disp_currbal()
{



        cout<<"\nBalance :- "<<balance;


}
void cur_acct:: withdraw_currbal()
{
    {
        float penalty,withdraw;
        cout<<"\n\nBalance :- "<<balance;
        cout<<"\nEnter amount to be withdraw :-";
        cin>>withdraw;
        balance=balance-withdraw;
        if(balance < 500)
        {
            penalty=(500-balance)/10;
            balance=balance-penalty;
            cout<<"\nBalance after deducting penalty : "<<balance;
        }
        else if(withdraw > balance)
        {
            cout<<"\n\nYou have to take permission for Bank Overdraft Facility\n";
            balance=balance+withdraw;
        }
        else
            cout<<"\nAfter Withdrawl your Balance revels : "<<balance;
    }
}
void sav_acct::deposit_savbal()
{
    cout<<"\nBalance :- "<<savbal;

}
void sav_acct::withdraw_savbal()
{
        float withdraw;
      cout<<"\nBalance :- "<<savbal;
      cout<<"\nEnter amount to be withdraw :-";
      cin>>withdraw;
      savbal=savbal-withdraw;
      if(withdraw > savbal)
      {
      cout<<"\n\nYou have to take permission for Bank Overdraft Facility\n";
      savbal=savbal+withdraw;
      }
      else
      cout<<"\nAfter Withdrawl your Balance revels : "<<savbal;

}
void sav_acct::disp_savbal()
{
        float deposit,interest;
      cout<<"\nEnter amount to Deposit :- ";
      cin>>deposit;
      savbal = savbal + deposit;
      interest=(savbal*2)/100;
      savbal=savbal+interest;
}



