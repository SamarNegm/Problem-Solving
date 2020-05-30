#include<iostream>
using namespace std;
int main()
{
   int x,sum=0;
   cin>>x;
   for(int i=0;i<x;i++)
   {
       if(i%4==0)
       {
           sum+=i;
       }
   }
   cout<<sum;

    return 0;
}
