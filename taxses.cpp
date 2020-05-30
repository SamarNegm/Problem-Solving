#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int tax,newtax,res,x;
    cin>>tax;
    if (tax<2000.00)
    {
        cout<<"Isento\n";
    }
    else
    {
        newtax=tax-2000;
        cout<<newtax<<"\n";
        x=newtax%1000;
        cout<<x<<"\n";
        x=newtax%100;
        cout<<x<<"\n";
        x=newtax%10;
        cout<<x<<"\n";




    }

}
