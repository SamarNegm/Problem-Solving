#include<bits/stdc++.h>
using namespace std;
long long a[100010],b[100010];
long long n,k,sum,l,h=5e9+1;;
bool check(long long l)
{
    long long t=k;
     for(int i=0;i<n;i++)
     {
         t-=(max((long long )0,a[i]*l-b[i]));
         if(t<0)
            break;
     }
    if(t>=0)
        return 1;
    else
        return 0;

}
int main()
{

    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
        cin>>b[i];

    while(l<h)
    {
      long long  mid=(l+h+1)>>1;
      if(check(mid))
        l=mid;
      else
        h=mid -1;
       // cout<<mid<<endl;
    }
    cout<<l;







    return 0;
}
