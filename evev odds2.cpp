#include<iostream>
using namespace std;
int main()
{
   long long n,k,j,half,x;
   cin>>n>>k;
   half=(n/2)+(n%2);
   x=k%half;
  // cout<<x<<endl;
   if(k<=half)
   {
       j=2*k-1;

   }
   else if(k>half){
if(k!=n||k%2!=0)
{
    j=2*x;
}
else if(k==n)
    j=k;
   }
   cout<<j;

    return 0;
}
