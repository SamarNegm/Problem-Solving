#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int m,n;
   cin>>n>>m;
   cout<<m+n-1<<endl;
   if(m>=n){
   for(int i=1;i<=min(m,n);i++)
   {
       for(int j=1;j<=max(m,n);j++)
       {
           if (i<=j)
           cout<<i<< " "<<j<<endl;
       }
   }
   }
   else
   {
   for(int i=1;i<=min(m,n);i++)
   {
       for(int j=1;j<=max(m,n);j++)
       {
           if (i<=j)
           cout<<j<< " "<<i<<endl;
       }
   }
   }

    return 0;
}
