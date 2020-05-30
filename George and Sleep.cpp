#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int ch,mc,ph,mp,h,m;
 char x=':';;
cin>>ch>>x>>mc>>ph>>x>>mp;
m=mc-mp;
h=ch-ph;
if (m<0)
    {m+=60;
    h--;}

     if(h<0)
        h+=24;
           cout<<setw(2)<<setfill('0')<<h<<":";
    cout<<setw(2)<<setfill('0')<<m;
}
