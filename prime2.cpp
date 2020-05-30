#include<iostream>
using namespace std;
int main()
{
   long long x,s=0;
   cin>>x;
   for(int i=2;i<x-1;i++)
   {
       if(x%i==0)
       s=1;
       else
        s=0;

   }
   if(s==1||x==1)
    cout<<"not prime";
   else
    cout<<"prime";


    return 0;
}
