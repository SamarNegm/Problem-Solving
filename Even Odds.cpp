#include<iostream>
using namespace std;
int main()
{
  long long n,k;
    cin>>n>>k;
     long long a[n]={0};
   for ( long long i=1;i<=n;i++)
   {
       if(i%2!=0)
       {
          a[i/2]=i;

       }

   }
  long long x=n/2+n%2;
   for( long long i=2,s=0;i<=n;i+=2,s++)
   {
       if(i%2==0)
        a[x+s]=i;
   }

   cout<<a[k-1];



    return 0;
}
