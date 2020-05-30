#include<bits/stdc++.h>
using namespace std;

long long fun(long long l,long long h)
{
    return (h-l+1)*h-((h-l+1)*((h-l+1-1)))/2;
}
int main()
{
    long long a,b,ans=0,c=0;
  cin>>a>>b;
    if(a<=b&&a>1)
        cout<<1;
    else if(a==1)
    cout<<0;
    else
    {
        a--;
        b--;
        if(b*(b+1)/2<a)
        {
            cout<<-1;
            return 0;
        }

long long l=1,h=b,mid,sum=0,ans=-1;
while(l<h)
{
    mid=(h+l)/2;
  long long q=fun(mid,b);
  if(q==a)
  {
      cout<<b-mid+1 ;
      return 0;
  }
  if(q>a)
    l=mid+1;
  else
    h=mid;
 // cout<<l<<" "<<h<<" "<<q<<" "<<mid<<endl;;
}
cout<<b-h+2;
    }

    return 0;
}

