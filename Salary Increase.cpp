#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   float s,t,p;
   cin>>s;
   if(s>=0&&s<=400.00)
   {
       p=(s*15)/100;
       t=s+p;
       cout<<setprecision(2)<<fixed<< "Novo salario: "<<t<<"\n";
       cout<<setprecision(2)<<fixed<<"Reajuste ganho: "<<p<<"\n";
       cout<<"Em percentual: "<<15<<" %"<<"\n";

   }
      if(s>=400.01&&s<=800.00)
   {
       p=(s*12)/100;
       t=s+p;
       cout<<setprecision(2)<<fixed<<"Novo salario: "<<t<<"\n";
       cout<<setprecision(2)<<fixed<<"Reajuste ganho: "<<p<<"\n";
       cout<<"Em percentual: "<<12<<" %"<<"\n";

   }
      if(s>=800.01&&s<=1200.00)
   {
       p=(s*10)/100;
       t=s+p;
       cout<<setprecision(2)<<fixed<<"Novo salario: "<<t<<"\n";
       cout<<setprecision(2)<<fixed<<"Reajuste ganho: "<<p<<"\n";
       cout<<"Em percentual: "<<10<<" %"<<"\n";

   }
      if(s>=1200.01&&s<=2000.00)
   {
       p=(s*7)/100;
       t=s+p;
       cout<<setprecision(2)<<fixed<<"Novo salario: "<<t<<"\n";
       cout<<setprecision(2)<<fixed<<"Reajuste ganho: "<<p<<"\n";
       cout<<"Em percentual: "<<7<<" %"<<"\n";

   }
      if(s>2000.000)
   {
       p=(s*4)/100;
       t=s+p;
       cout<<setprecision(2)<<fixed<<"Novo salario: "<<t<<"\n";
       cout<<setprecision(2)<<fixed<<"Reajuste ganho: "<<p<<"\n";
       cout<<"Em percentual: "<<4<<" %"<<"\n";

   }








    return 0;
}
