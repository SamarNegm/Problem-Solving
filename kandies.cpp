#include<iostream>
using namespace std;
int main()
{

   int k ,n,t,a,b,z;
   cin >> t ;
   for (int i=0;i<t;i++)
   {
       cin>>a>>b;
      int sum=0;
       for(int f =0;f<a;f++)
       {
           cin>>z;
          sum=sum+(z/b);

       }
       cout<<sum<<"\n";
   }
    return 0;

   }









