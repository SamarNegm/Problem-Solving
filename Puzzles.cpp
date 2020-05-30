#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int a[m];
   for(int i=0;i<m;i++)
   {
       cin>>a[i];
   }
   sort(a,a+m);

   int minyy=a[n-1]-a[0];
   for(int i=0;i<=m-n;i++)
   {
       if(a[(n+i-1)]-a[i]<minyy)
        minyy=a[(n+i-1)]-a[i];
       // cout<<a[(n+i-1)]-a[i]<<" "<<a[i]<<" "<<a[(n+i-1)]<<endl;;
   }
cout<<minyy;


    return 0;
}
